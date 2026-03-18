/*
 * XREFs of BgpConsoleSetTextColor @ 0x140C50940
 * Callers:
 *     <none>
 * Callees:
 *     BgpFwAcquireLock @ 0x1404E7E04 (BgpFwAcquireLock.c)
 *     BgpFwReleaseLock @ 0x1404E81BC (BgpFwReleaseLock.c)
 */

__int64 __fastcall BgpConsoleSetTextColor(_DWORD *a1, _DWORD *a2)
{
  struct _LIST_ENTRY *Flink; // rax
  unsigned int v5; // ebx

  BgpFwAcquireLock();
  Flink = WheapPfaLock.SavedApcState.ApcListHead[1].Flink;
  v5 = 0;
  if ( WheapPfaLock.SavedApcState.ApcListHead[1].Flink )
  {
    if ( a1 )
      HIDWORD(WheapPfaLock.SavedApcState.ApcListHead[1].Flink->Blink) = *a1;
    if ( a2 )
      LODWORD(Flink[1].Flink) = *a2;
  }
  else
  {
    v5 = -1073741823;
  }
  BgpFwReleaseLock();
  return v5;
}
