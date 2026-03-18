/*
 * XREFs of BgpConsoleDisplayCharacter @ 0x140C4FE00
 * Callers:
 *     <none>
 * Callees:
 *     BgpFwAcquireLock @ 0x1404E7E04 (BgpFwAcquireLock.c)
 *     BgpFwReleaseLock @ 0x1404E81BC (BgpFwReleaseLock.c)
 *     BgpDisplayCharacterEx @ 0x140715C90 (BgpDisplayCharacterEx.c)
 *     AnFwFadeCompletion @ 0x140C52980 (AnFwFadeCompletion.c)
 */

__int64 __fastcall BgpConsoleDisplayCharacter(unsigned __int16 a1, unsigned int a2, unsigned int a3, int a4, int a5)
{
  __int64 v6; // rsi
  __int64 v7; // r12
  struct _LIST_ENTRY *Flink; // rbx
  int v10; // esi
  __int64 v11; // rcx
  __int64 v12; // rdi
  unsigned __int64 v14; // [rsp+40h] [rbp-38h]
  int v15; // [rsp+50h] [rbp-28h] BYREF
  _DWORD v16[3]; // [rsp+54h] [rbp-24h] BYREF

  v6 = a3;
  v7 = a2;
  BgpFwAcquireLock();
  Flink = WheapPfaLock.SavedApcState.ApcListHead[1].Flink;
  if ( WheapPfaLock.SavedApcState.ApcListHead[1].Flink )
  {
    if ( ((__int64)WheapPfaLock.SavedApcState.ApcListHead[1].Flink->Blink & 0x10000) != 0 )
    {
      AnFwFadeCompletion();
      Flink = WheapPfaLock.SavedApcState.ApcListHead[1].Flink;
      LODWORD(WheapPfaLock.SavedApcState.ApcListHead[1].Flink->Blink) &= ~0x10000u;
    }
    v11 = v6 + 25 * v7;
    v12 = 3 * v11;
    if ( *((_WORD *)&Flink[5].Blink + 6 * v11) == a1
      && *((_DWORD *)&Flink[5].Flink + 3 * v11) == a4
      && *((_DWORD *)&Flink[5].Flink + 3 * v11 + 1) == a5 )
    {
      v10 = 0;
    }
    else
    {
      v10 = BgpDisplayCharacterEx(
              a1,
              (__int64 *)Flink[2].Blink,
              HIDWORD(Flink[3].Blink) + LODWORD(Flink[3].Flink) * (int)v7,
              LODWORD(Flink[4].Flink) + HIDWORD(Flink[3].Flink) * (int)v6,
              a5,
              a4,
              v16,
              &v15,
              v14);
      if ( v10 >= 0 )
      {
        *((_WORD *)&Flink[5].Blink + 2 * v12) = a1;
        *((_DWORD *)&Flink[5].Flink + v12) = a4;
        *((_DWORD *)&Flink[5].Flink + v12 + 1) = a5;
      }
    }
  }
  else
  {
    v10 = -1073741823;
  }
  BgpFwReleaseLock();
  return (unsigned int)v10;
}
