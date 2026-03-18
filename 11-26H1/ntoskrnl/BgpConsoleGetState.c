/*
 * XREFs of BgpConsoleGetState @ 0x140C503B0
 * Callers:
 *     <none>
 * Callees:
 *     BgpFwAcquireLock @ 0x1404E7E04 (BgpFwAcquireLock.c)
 *     BgpFwReleaseLock @ 0x1404E81BC (BgpFwReleaseLock.c)
 */

__int64 __fastcall BgpConsoleGetState(_DWORD *a1)
{
  struct _LIST_ENTRY *Flink; // rdx
  unsigned int v3; // ebx

  BgpFwAcquireLock();
  Flink = WheapPfaLock.SavedApcState.ApcListHead[1].Flink;
  v3 = 0;
  if ( WheapPfaLock.SavedApcState.ApcListHead[1].Flink )
  {
    *a1 = HIDWORD(WheapPfaLock.SavedApcState.ApcListHead[1].Flink[1].Flink);
    a1[1] = Flink[1].Blink;
    a1[2] = Flink->Flink;
    a1[3] = HIDWORD(Flink->Flink);
    a1[4] = Flink[3].Flink;
    a1[5] = HIDWORD(Flink[3].Flink);
    a1[6] = HIDWORD(Flink[3].Blink);
    a1[7] = Flink[4].Flink;
  }
  else
  {
    v3 = -1073741823;
  }
  BgpFwReleaseLock();
  return v3;
}
