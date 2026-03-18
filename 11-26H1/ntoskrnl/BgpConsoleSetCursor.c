/*
 * XREFs of BgpConsoleSetCursor @ 0x140C50890
 * Callers:
 *     <none>
 * Callees:
 *     BgpFwAcquireLock @ 0x1404E7E04 (BgpFwAcquireLock.c)
 *     BgpFwReleaseLock @ 0x1404E81BC (BgpFwReleaseLock.c)
 *     BgpConsoleDrawCursor @ 0x140C50278 (BgpConsoleDrawCursor.c)
 */

__int64 __fastcall BgpConsoleSetCursor(unsigned int a1, unsigned int a2, unsigned int a3)
{
  struct _LIST_ENTRY *Flink; // rax
  unsigned int v7; // ebx

  BgpFwAcquireLock();
  Flink = WheapPfaLock.SavedApcState.ApcListHead[1].Flink;
  v7 = 0;
  if ( WheapPfaLock.SavedApcState.ApcListHead[1].Flink )
  {
    if ( a1 >= 0x50 || a2 >= HIDWORD(WheapPfaLock.SavedApcState.ApcListHead[1].Flink->Flink) || a3 > 0x64 )
    {
      v7 = -1073741811;
    }
    else if ( *(struct _LIST_ENTRY **)((char *)&WheapPfaLock.SavedApcState.ApcListHead[1].Flink[4].Flink + 4) != (struct _LIST_ENTRY *)__PAIR64__(a2, a1)
           || HIDWORD(WheapPfaLock.SavedApcState.ApcListHead[1].Flink[4].Blink) != a3 )
    {
      if ( HIDWORD(WheapPfaLock.SavedApcState.ApcListHead[1].Flink[4].Blink) )
      {
        HIDWORD(WheapPfaLock.SavedApcState.ApcListHead[1].Flink[4].Blink) = 0;
        BgpConsoleDrawCursor();
        Flink = WheapPfaLock.SavedApcState.ApcListHead[1].Flink;
      }
      HIDWORD(Flink[4].Flink) = a1;
      LODWORD(Flink[4].Blink) = a2;
      HIDWORD(Flink[4].Blink) = a3;
      if ( a3 )
        BgpConsoleDrawCursor();
    }
  }
  else
  {
    v7 = -1073741823;
  }
  BgpFwReleaseLock();
  return v7;
}
