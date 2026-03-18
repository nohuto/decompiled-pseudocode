/*
 * XREFs of BgpConsoleDisplayString @ 0x140C501C0
 * Callers:
 *     <none>
 * Callees:
 *     BgpFwAcquireLock @ 0x1404E7E04 (BgpFwAcquireLock.c)
 *     BgpFwReleaseLock @ 0x1404E81BC (BgpFwReleaseLock.c)
 *     BgpConsoleDisplayCharacterEx @ 0x140C4FF18 (BgpConsoleDisplayCharacterEx.c)
 *     AnFwFadeCompletion @ 0x140C52980 (AnFwFadeCompletion.c)
 */

__int64 __fastcall BgpConsoleDisplayString(unsigned __int16 *a1)
{
  struct _LIST_ENTRY *Flink; // rdx
  int v3; // ebx
  unsigned __int16 v5; // cx
  int v6; // eax

  BgpFwAcquireLock();
  Flink = WheapPfaLock.SavedApcState.ApcListHead[1].Flink;
  if ( WheapPfaLock.SavedApcState.ApcListHead[1].Flink )
  {
    if ( a1 )
    {
      if ( *a1 )
      {
        if ( ((__int64)WheapPfaLock.SavedApcState.ApcListHead[1].Flink->Blink & 0x10000) != 0 )
        {
          AnFwFadeCompletion();
          Flink = WheapPfaLock.SavedApcState.ApcListHead[1].Flink;
          LODWORD(WheapPfaLock.SavedApcState.ApcListHead[1].Flink->Blink) &= ~0x10000u;
        }
        v5 = *a1;
        v3 = 0;
        if ( *a1 )
        {
          while ( 1 )
          {
            v6 = BgpConsoleDisplayCharacterEx(
                   v5,
                   HIDWORD(Flink[4].Flink),
                   (unsigned int)Flink[4].Blink,
                   HIDWORD(Flink->Blink),
                   (int)Flink[1].Flink);
            if ( v6 < 0 && v3 >= 0 )
              v3 = v6;
            v5 = *++a1;
            if ( !*a1 )
              break;
            Flink = WheapPfaLock.SavedApcState.ApcListHead[1].Flink;
          }
        }
      }
      else
      {
        v3 = 0;
      }
    }
    else
    {
      v3 = -1073741811;
    }
  }
  else
  {
    v3 = -1073741823;
  }
  BgpFwReleaseLock();
  return (unsigned int)v3;
}
