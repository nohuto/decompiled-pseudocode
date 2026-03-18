/*
 * XREFs of BgpConsoleScrollScreen @ 0x140C50694
 * Callers:
 *     BgpConsoleDisplayCharacterEx @ 0x140C4FF18 (BgpConsoleDisplayCharacterEx.c)
 * Callees:
 *     BgpDisplayCharacterEx @ 0x140715C90 (BgpDisplayCharacterEx.c)
 */

__int64 BgpConsoleScrollScreen()
{
  struct _LIST_ENTRY *Flink; // r10
  unsigned int v1; // ebx
  __int64 v2; // rsi
  _DWORD *v3; // r12
  struct _LIST_ENTRY *v4; // r13
  unsigned int v5; // r9d
  unsigned int v6; // r15d
  __int64 v7; // rdi
  __int64 v8; // r8
  unsigned __int16 v9; // r14
  int v10; // ecx
  int v11; // eax
  unsigned int v12; // r9d
  unsigned int v13; // r8d
  __int64 *Blink; // rdx
  int v15; // eax
  unsigned int v16; // ebx
  int v17; // ebp
  unsigned int v18; // edi
  int Blink_high; // r14d
  __int64 v20; // rsi
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 result; // rax
  unsigned __int64 v25; // [rsp+40h] [rbp-58h]
  int v26; // [rsp+A0h] [rbp+8h] BYREF
  int v27; // [rsp+A8h] [rbp+10h] BYREF
  int v28; // [rsp+B0h] [rbp+18h] BYREF
  int v29; // [rsp+B8h] [rbp+20h] BYREF

  Flink = WheapPfaLock.SavedApcState.ApcListHead[1].Flink;
  v1 = 0;
  v2 = 0LL;
  v3 = (_DWORD *)&WheapPfaLock.SavedApcState.ApcListHead[1].Flink[3].Blink + 1;
  v4 = WheapPfaLock.SavedApcState.ApcListHead[1].Flink + 3;
  do
  {
    v5 = 0;
    if ( HIDWORD(Flink->Flink) != 1 )
    {
      do
      {
        v6 = v5 + 1;
        v7 = v2 + v5;
        v8 = v2 + v5 + 1;
        v9 = *((_WORD *)&Flink[5].Blink + 6 * v8);
        if ( *((_WORD *)&Flink[5].Blink + 6 * v7) != v9
          || *((_DWORD *)&Flink[5].Flink + 3 * v7) != *((_DWORD *)&Flink[5].Flink + 3 * v8)
          || *((_DWORD *)&Flink[5].Flink + 3 * v7 + 1) != *((_DWORD *)&Flink[5].Flink + 3 * v8 + 1) )
        {
          v10 = *((_DWORD *)&Flink[5].Flink + 3 * v8);
          v11 = *((_DWORD *)&Flink[5].Flink + 3 * v8 + 1);
          v12 = v3[1] + HIDWORD(v4->Flink) * v5;
          v13 = *v3 + LODWORD(v4->Flink) * v1;
          Blink = (__int64 *)Flink[2].Blink;
          v27 = v10;
          v26 = v11;
          v15 = BgpDisplayCharacterEx(v9, Blink, v13, v12, v11, v10, &v29, &v28, v25);
          Flink = WheapPfaLock.SavedApcState.ApcListHead[1].Flink;
          if ( v15 >= 0 )
          {
            *((_DWORD *)&WheapPfaLock.SavedApcState.ApcListHead[1].Flink[5].Flink + 3 * v7 + 1) = v26;
            *((_DWORD *)&Flink[5].Flink + 3 * v7) = v27;
            *((_WORD *)&Flink[5].Blink + 6 * v7) = v9;
          }
        }
        v5 = v6;
      }
      while ( v6 < HIDWORD(Flink->Flink) - 1 );
    }
    ++v1;
    v2 += 25LL;
  }
  while ( v1 < 0x50 );
  v16 = 0;
  v17 = (int)Flink[1].Flink;
  v18 = HIDWORD(Flink->Flink) - 1;
  Blink_high = HIDWORD(Flink->Blink);
  v20 = 0LL;
  do
  {
    v21 = BgpDisplayCharacterEx(
            0x20u,
            (__int64 *)Flink[2].Blink,
            *v3 + LODWORD(v4->Flink) * v16,
            v3[1] + HIDWORD(v4->Flink) * v18,
            v17,
            Blink_high,
            &v27,
            &v26,
            v25);
    Flink = WheapPfaLock.SavedApcState.ApcListHead[1].Flink;
    if ( v21 >= 0 )
    {
      v22 = v20 + v18;
      v23 = 3 * v22;
      *((_WORD *)&WheapPfaLock.SavedApcState.ApcListHead[1].Flink[5].Blink + 2 * v23) = 32;
      *((_DWORD *)&Flink[5].Flink + 3 * v22 + 1) = v17;
      *((_DWORD *)&Flink[5].Flink + v23) = Blink_high;
    }
    ++v16;
    v20 += 25LL;
  }
  while ( v16 < 0x50 );
  result = (unsigned int)(HIDWORD(Flink->Flink) - 1);
  HIDWORD(Flink[4].Flink) = 0;
  LODWORD(Flink[4].Blink) = result;
  return result;
}
