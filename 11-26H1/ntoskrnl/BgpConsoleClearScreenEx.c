/*
 * XREFs of BgpConsoleClearScreenEx @ 0x140C4FD78
 * Callers:
 *     BgpConsoleClearScreen @ 0x140C4FD40 (BgpConsoleClearScreen.c)
 *     BgpConsoleInitialize @ 0x140C50420 (BgpConsoleInitialize.c)
 * Callees:
 *     BgpClearScreen @ 0x140715B44 (BgpClearScreen.c)
 */

__int64 BgpConsoleClearScreenEx()
{
  struct _LIST_ENTRY *Flink; // rcx
  int v1; // r8d
  struct _LIST_ENTRY *v2; // r9
  __int64 v3; // r10
  unsigned int Flink_high; // eax
  __int64 v5; // r11
  unsigned int i; // ebx
  __int64 v7; // rcx
  __int64 v8; // rdx

  Flink = WheapPfaLock.SavedApcState.ApcListHead[1].Flink;
  *(struct _LIST_ENTRY **)((char *)&WheapPfaLock.SavedApcState.ApcListHead[1].Flink[4].Flink + 4) = 0LL;
  v1 = BgpClearScreen((unsigned int)Flink[1].Flink);
  if ( v1 >= 0 )
  {
    v2 = WheapPfaLock.SavedApcState.ApcListHead[1].Flink;
    v3 = 0LL;
    Flink_high = HIDWORD(WheapPfaLock.SavedApcState.ApcListHead[1].Flink->Flink);
    v5 = 80LL;
    do
    {
      for ( i = 0; i < Flink_high; Flink_high = HIDWORD(v2->Flink) )
      {
        v7 = i++;
        v8 = 3 * (v3 + v7);
        *((_WORD *)&v2[5].Blink + 2 * v8) = 32;
        *((_DWORD *)&v2[5].Flink + 3 * v3 + 3 * v7 + 1) = v2[1].Flink;
        *((_DWORD *)&v2[5].Flink + v8) = HIDWORD(v2->Blink);
      }
      v3 += 25LL;
      --v5;
    }
    while ( v5 );
  }
  return (unsigned int)v1;
}
