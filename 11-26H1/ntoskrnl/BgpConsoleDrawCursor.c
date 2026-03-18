/*
 * XREFs of BgpConsoleDrawCursor @ 0x140C50278
 * Callers:
 *     BgpConsoleSetCursor @ 0x140C50890 (BgpConsoleSetCursor.c)
 * Callees:
 *     BgpDisplayCharacterEx @ 0x140715C90 (BgpDisplayCharacterEx.c)
 */

__int64 BgpConsoleDrawCursor()
{
  unsigned int Blink_high; // eax
  __int64 Blink_low; // rdx
  __int64 v2; // rax
  unsigned __int16 v3; // r11
  __int64 v4; // rax
  int Flink; // edx
  int v6; // ecx
  unsigned __int64 v8; // [rsp+40h] [rbp-18h]
  int v9; // [rsp+60h] [rbp+8h] BYREF
  int v10; // [rsp+68h] [rbp+10h] BYREF

  Blink_high = HIDWORD(WheapPfaLock.SavedApcState.ApcListHead[1].Flink[4].Blink);
  if ( Blink_high )
  {
    Flink = (int)WheapPfaLock.SavedApcState.ApcListHead[1].Flink[1].Flink;
    v6 = HIDWORD(WheapPfaLock.SavedApcState.ApcListHead[1].Flink->Blink);
    if ( Blink_high >= 0x22 )
    {
      v3 = 9604;
      if ( Blink_high >= 0x43 )
        v3 = 9608;
    }
    else
    {
      v3 = 95;
    }
  }
  else
  {
    Blink_low = LODWORD(WheapPfaLock.SavedApcState.ApcListHead[1].Flink[4].Blink);
    v2 = 25LL * HIDWORD(WheapPfaLock.SavedApcState.ApcListHead[1].Flink[4].Flink);
    v3 = *((_WORD *)&WheapPfaLock.SavedApcState.ApcListHead[1].Flink[5].Blink + 6 * Blink_low + 6 * v2);
    v4 = 3 * (Blink_low + v2);
    Flink = *((_DWORD *)&WheapPfaLock.SavedApcState.ApcListHead[1].Flink[5].Flink + v4 + 1);
    v6 = *((_DWORD *)&WheapPfaLock.SavedApcState.ApcListHead[1].Flink[5].Flink + v4);
  }
  return BgpDisplayCharacterEx(
           v3,
           (__int64 *)WheapPfaLock.SavedApcState.ApcListHead[1].Flink[2].Blink,
           HIDWORD(WheapPfaLock.SavedApcState.ApcListHead[1].Flink[3].Blink)
         + HIDWORD(WheapPfaLock.SavedApcState.ApcListHead[1].Flink[4].Flink)
         * LODWORD(WheapPfaLock.SavedApcState.ApcListHead[1].Flink[3].Flink),
           LODWORD(WheapPfaLock.SavedApcState.ApcListHead[1].Flink[4].Flink)
         + LODWORD(WheapPfaLock.SavedApcState.ApcListHead[1].Flink[4].Blink)
         * HIDWORD(WheapPfaLock.SavedApcState.ApcListHead[1].Flink[3].Flink),
           Flink,
           v6,
           &v10,
           &v9,
           v8);
}
