/*
 * XREFs of FsRtlGetNextExtraCreateParameter @ 0x140ABD5E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall FsRtlGetNextExtraCreateParameter(
        PECP_LIST EcpList,
        PVOID CurrentEcpContext,
        LPGUID NextEcpType,
        PVOID *NextEcpContext,
        ULONG *NextEcpContextSize)
{
  _LIST_ENTRY *p_EcpList; // r10
  NTSTATUS v6; // r10d
  _LIST_ENTRY *v8; // rdx

  p_EcpList = &EcpList->EcpList;
  if ( CurrentEcpContext )
  {
    v8 = (_LIST_ENTRY *)*((_QWORD *)CurrentEcpContext - 8);
    if ( v8 == p_EcpList )
      goto LABEL_14;
    CurrentEcpContext = &v8[-1].Blink;
  }
  else if ( p_EcpList->Flink != p_EcpList )
  {
    CurrentEcpContext = &p_EcpList->Flink[-1].Blink;
  }
  if ( CurrentEcpContext )
  {
    v6 = 0;
    if ( NextEcpContext )
      *NextEcpContext = (char *)CurrentEcpContext + 72;
    if ( NextEcpContextSize )
      *NextEcpContextSize = *((_DWORD *)CurrentEcpContext + 13) - 72;
    if ( NextEcpType )
      *NextEcpType = *(LPGUID)((char *)CurrentEcpContext + 24);
    return v6;
  }
LABEL_14:
  v6 = -1073741275;
  if ( NextEcpContext )
    *NextEcpContext = 0LL;
  if ( NextEcpContextSize )
    *NextEcpContextSize = 0;
  if ( NextEcpType )
    *NextEcpType = 0LL;
  return v6;
}
