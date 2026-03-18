/*
 * XREFs of BgpConsoleGetCursorState @ 0x140C50340
 * Callers:
 *     <none>
 * Callees:
 *     BgpFwAcquireLock @ 0x1404E7E04 (BgpFwAcquireLock.c)
 *     BgpFwReleaseLock @ 0x1404E81BC (BgpFwReleaseLock.c)
 */

__int64 __fastcall BgpConsoleGetCursorState(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  struct _LIST_ENTRY *Flink; // rax
  unsigned int v7; // ebx

  BgpFwAcquireLock();
  Flink = WheapPfaLock.SavedApcState.ApcListHead[1].Flink;
  v7 = 0;
  if ( WheapPfaLock.SavedApcState.ApcListHead[1].Flink )
  {
    *a1 = HIDWORD(WheapPfaLock.SavedApcState.ApcListHead[1].Flink[4].Flink);
    *a2 = Flink[4].Blink;
    *a3 = HIDWORD(Flink[4].Blink);
  }
  else
  {
    v7 = -1073741823;
  }
  BgpFwReleaseLock();
  return v7;
}
