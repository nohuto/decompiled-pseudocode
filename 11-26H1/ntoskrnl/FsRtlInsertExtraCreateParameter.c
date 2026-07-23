/*
 * XREFs of FsRtlInsertExtraCreateParameter @ 0x140933D40
 * Callers:
 *     IopSymlinkAllocateAndAddECP @ 0x140933C40 (IopSymlinkAllocateAndAddECP.c)
 *     PspCreateUserProcessEcp @ 0x140933EF8 (PspCreateUserProcessEcp.c)
 *     IopCreateFile @ 0x140984B18 (IopCreateFile.c)
 *     IopSymlinkEnforceEnabledTypes @ 0x140ACA6B8 (IopSymlinkEnforceEnabledTypes.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall FsRtlInsertExtraCreateParameter(PECP_LIST EcpList, PVOID EcpContext)
{
  struct _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *p_EcpList; // r8
  char *v4; // r9
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v6; // rdx
  NTSTATUS result; // eax

  Flink = EcpList->EcpList.Flink;
  p_EcpList = &EcpList->EcpList;
  while ( Flink != p_EcpList )
  {
    v4 = (char *)Flink[1].Flink - *((_QWORD *)EcpContext - 6);
    if ( !v4 )
      v4 = (char *)Flink[1].Blink - *((_QWORD *)EcpContext - 5);
    if ( !v4 )
    {
      LODWORD(Flink[2].Blink) |= 4u;
      return -1073741811;
    }
    Flink = Flink->Flink;
  }
  Blink = EcpList->EcpList.Blink;
  v6 = (struct _LIST_ENTRY *)((char *)EcpContext - 64);
  if ( Blink->Flink != p_EcpList )
    __fastfail(3u);
  v6->Blink = Blink;
  v6->Flink = p_EcpList;
  Blink->Flink = v6;
  result = 0;
  EcpList->EcpList.Blink = v6;
  return result;
}
