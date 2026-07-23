/*
 * XREFs of IopSymlinkEnforceEnabledTypes @ 0x140ACA6B8
 * Callers:
 *     IopParseDevice @ 0x140930850 (IopParseDevice.c)
 * Callees:
 *     FsRtlInsertExtraCreateParameter @ 0x140933D40 (FsRtlInsertExtraCreateParameter.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall IopSymlinkEnforceEnabledTypes(bool a1, char a2, struct _ECP_LIST *a3)
{
  char v3; // bl
  struct _LIST_ENTRY *Flink; // rax
  __int64 v8; // rdi
  char *v9; // rcx
  __int64 Pool2; // rax

  v3 = IopSymlinkEnabledTypes;
  if ( IopSymlinkEnabledTypes == 15 )
    return 0LL;
  Flink = a3->EcpList.Flink;
  v8 = 0LL;
  while ( 1 )
  {
    if ( Flink == &a3->EcpList )
      goto LABEL_9;
    v9 = (char *)Flink[1].Flink - *(_QWORD *)&GUID_ECP_NETWORK_OPEN_CONTEXT.Data1;
    if ( !v9 )
      v9 = (char *)Flink[1].Blink - *(_QWORD *)GUID_ECP_NETWORK_OPEN_CONTEXT.Data4;
    if ( !v9 )
      break;
    Flink = Flink->Flink;
  }
  LODWORD(Flink[2].Blink) |= 4u;
  v8 = (__int64)&Flink[4];
  if ( Flink != (struct _LIST_ENTRY *)-64LL && ((__int64)Flink[2].Blink & 0x10) != 0 )
    return 3221227285LL;
LABEL_9:
  if ( !a1 )
  {
    if ( !v8 )
      return 3221227285LL;
    a1 = *(_DWORD *)(v8 + 16) == 2;
  }
  if ( !a2 && !v8 )
  {
    Pool2 = ExAllocatePool2(0x100uLL);
    if ( !Pool2 )
      return 3221225626LL;
    *(_QWORD *)Pool2 = 1215324997LL;
    *(_QWORD *)(Pool2 + 16) = 0LL;
    *(_QWORD *)(Pool2 + 8) = 0LL;
    *(_DWORD *)(Pool2 + 52) = 100;
    v8 = Pool2 + 72;
    *(_QWORD *)(Pool2 + 40) = 0LL;
    *(GUID *)(Pool2 + 24) = GUID_ECP_NETWORK_OPEN_CONTEXT;
    *(_DWORD *)(Pool2 + 48) = 2;
    *(_QWORD *)(Pool2 + 56) = 0LL;
    *(_QWORD *)(Pool2 + 64) = 0LL;
    *(_QWORD *)(Pool2 + 76) = 0LL;
    *(_QWORD *)(Pool2 + 84) = 0LL;
    *(_QWORD *)(Pool2 + 92) = 0LL;
    *(_DWORD *)(Pool2 + 72) = 28;
    FsRtlInsertExtraCreateParameter(a3, (PVOID)(Pool2 + 72));
  }
  if ( a1 )
  {
    if ( (v3 & 2) == 0 && (v3 & 1) == 0 )
      return 3221227285LL;
    if ( a2 )
    {
      if ( (v3 & 1) != 0 )
        return 0LL;
      return 3221227285LL;
    }
    if ( (v3 & 2) == 0 )
      *(_DWORD *)(v8 + 4) = 2;
    if ( (v3 & 1) != 0 )
      return 0LL;
LABEL_29:
    *(_DWORD *)(v8 + 4) = 1;
    return 0LL;
  }
  if ( (v3 & 8) == 0 && (v3 & 4) == 0 )
    return 3221227285LL;
  if ( !a2 )
  {
    if ( (v3 & 8) == 0 )
      *(_DWORD *)(v8 + 4) = 2;
    if ( (v3 & 4) != 0 )
      return 0LL;
    goto LABEL_29;
  }
  return (v3 & 4) == 0 ? 0xC0000715 : 0;
}
