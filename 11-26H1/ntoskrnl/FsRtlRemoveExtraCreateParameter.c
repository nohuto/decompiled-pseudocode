/*
 * XREFs of FsRtlRemoveExtraCreateParameter @ 0x140A4FBC0
 * Callers:
 *     FsRtlpAttachOplockKey @ 0x14030CCC0 (FsRtlpAttachOplockKey.c)
 *     IopSymlinkRemoveECP @ 0x14046C060 (IopSymlinkRemoveECP.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall FsRtlRemoveExtraCreateParameter(
        PECP_LIST EcpList,
        LPCGUID EcpType,
        PVOID *EcpContext,
        ULONG *EcpContextSize)
{
  struct _LIST_ENTRY *Flink; // rax
  NTSTATUS v6; // r11d
  char *v7; // rdx
  struct _LIST_ENTRY *v8; // rcx
  struct _LIST_ENTRY *Blink; // rdx

  *EcpContext = 0LL;
  Flink = EcpList->EcpList.Flink;
  v6 = -1073741275;
  while ( Flink != &EcpList->EcpList )
  {
    v7 = (char *)Flink[1].Flink - *(_QWORD *)&EcpType->Data1;
    if ( !v7 )
      v7 = (char *)Flink[1].Blink - *(_QWORD *)EcpType->Data4;
    if ( !v7 )
    {
      LODWORD(Flink[2].Blink) |= 4u;
      v6 = 0;
      v8 = Flink->Flink;
      if ( Flink->Flink->Blink != Flink || (Blink = Flink->Blink, Blink->Flink != Flink) )
        __fastfail(3u);
      Blink->Flink = v8;
      v8->Blink = Blink;
      Flink->Blink = 0LL;
      Flink->Flink = 0LL;
      *EcpContext = &Flink[4];
      if ( EcpContextSize )
        *EcpContextSize = HIDWORD(Flink[2].Blink) - 72;
      return v6;
    }
    Flink = Flink->Flink;
  }
  return v6;
}
