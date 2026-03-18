/*
 * XREFs of FsRtlFindExtraCreateParameter @ 0x140A072F0
 * Callers:
 *     FsRtlpAttachOplockKey @ 0x1402C2000 (FsRtlpAttachOplockKey.c)
 *     IopSymlinkGetECP @ 0x14048345C (IopSymlinkGetECP.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall FsRtlFindExtraCreateParameter(
        PECP_LIST EcpList,
        LPCGUID EcpType,
        PVOID *EcpContext,
        ULONG *EcpContextSize)
{
  struct _LIST_ENTRY *i; // rax
  char *v6; // r8

  if ( EcpContext )
    *EcpContext = 0LL;
  if ( EcpContextSize )
    *EcpContextSize = 0;
  for ( i = EcpList->EcpList.Flink; ; i = i->Flink )
  {
    if ( i == &EcpList->EcpList )
      return -1073741275;
    v6 = (char *)i[1].Flink - *(_QWORD *)&EcpType->Data1;
    if ( !v6 )
      v6 = (char *)i[1].Blink - *(_QWORD *)EcpType->Data4;
    if ( !v6 )
      break;
  }
  LODWORD(i[2].Blink) |= 4u;
  if ( EcpContext )
    *EcpContext = &i[4];
  if ( EcpContextSize )
    *EcpContextSize = HIDWORD(i[2].Blink) - 72;
  return 0;
}
