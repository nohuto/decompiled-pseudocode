/*
 * XREFs of BgpConsoleDisplayCharacterEx @ 0x140C4FF18
 * Callers:
 *     BgpConsoleDisplayString @ 0x140C501C0 (BgpConsoleDisplayString.c)
 * Callees:
 *     BgpDisplayCharacterEx @ 0x140715C90 (BgpDisplayCharacterEx.c)
 *     BgpConsoleScrollScreen @ 0x140C50694 (BgpConsoleScrollScreen.c)
 */

__int64 BgpConsoleDisplayCharacterEx(unsigned __int16 a1, unsigned int a2, unsigned int a3, int a4, int a5, ...)
{
  int v5; // esi
  struct _LIST_ENTRY *Flink; // rdx
  int *v8; // rbx
  _DWORD *v9; // r12
  struct _LIST_ENTRY *v10; // r13
  int v11; // ebp
  __int64 v12; // rcx
  int v13; // ecx
  int v14; // r14d
  unsigned int v15; // r8d
  unsigned int v16; // eax
  int v17; // r15d
  __int64 v18; // r14
  int v19; // eax
  __int64 v20; // rax
  int v21; // r14d
  int v22; // r8d
  __int64 v23; // rax
  unsigned int v24; // eax
  unsigned __int64 v26; // [rsp+40h] [rbp-38h]
  int v27; // [rsp+88h] [rbp+10h] BYREF
  va_list va; // [rsp+A8h] [rbp+30h] BYREF

  va_start(va, a5);
  v5 = a1;
  if ( a2 > 0x50 )
    return 3221225485LL;
  Flink = WheapPfaLock.SavedApcState.ApcListHead[1].Flink;
  if ( a3 > HIDWORD(WheapPfaLock.SavedApcState.ApcListHead[1].Flink->Flink) )
    return 3221225485LL;
  v8 = (int *)&WheapPfaLock.SavedApcState.ApcListHead[1].Flink[4].Flink + 1;
  v9 = (_DWORD *)&WheapPfaLock.SavedApcState.ApcListHead[1].Flink[3].Blink + 1;
  v10 = WheapPfaLock.SavedApcState.ApcListHead[1].Flink + 3;
  v11 = 0;
  v12 = (unsigned int)a1 - 8;
  if ( v5 == 8 )
  {
    if ( !*v8 )
      goto LABEL_20;
    v21 = a5;
    v22 = *v8 - 1;
    *v8 = v22;
    v11 = BgpDisplayCharacterEx(
            0x20u,
            (__int64 *)Flink[2].Blink,
            *v9 + LODWORD(v10->Flink) * v22,
            v9[1] + LODWORD(Flink[4].Blink) * HIDWORD(Flink[3].Flink),
            v21,
            a4,
            (int *)va,
            &v27,
            v26);
    if ( v11 >= 0 )
    {
      Flink = WheapPfaLock.SavedApcState.ApcListHead[1].Flink;
      v12 = (unsigned int)v8[1] + 25LL * (unsigned int)*v8;
      v23 = 3 * v12;
      *((_WORD *)&WheapPfaLock.SavedApcState.ApcListHead[1].Flink[5].Blink + 2 * v23) = 32;
      *((_DWORD *)&Flink[5].Flink + v23) = a4;
      *((_DWORD *)&Flink[5].Flink + v23 + 1) = v21;
      goto LABEL_20;
    }
    goto LABEL_19;
  }
  v13 = v12 - 1;
  if ( v13 )
  {
    v12 = (unsigned int)(v13 - 1);
    if ( !(_DWORD)v12 )
    {
LABEL_21:
      ++v8[1];
      goto LABEL_22;
    }
    if ( (_DWORD)v12 == 3 )
    {
LABEL_22:
      *v8 = 0;
      goto LABEL_23;
    }
    v14 = a5;
    v11 = BgpDisplayCharacterEx(
            v5,
            (__int64 *)WheapPfaLock.SavedApcState.ApcListHead[1].Flink[2].Blink,
            HIDWORD(WheapPfaLock.SavedApcState.ApcListHead[1].Flink[3].Blink) + LODWORD(v10->Flink) * *v8,
            LODWORD(WheapPfaLock.SavedApcState.ApcListHead[1].Flink[4].Flink)
          + LODWORD(WheapPfaLock.SavedApcState.ApcListHead[1].Flink[4].Blink)
          * HIDWORD(WheapPfaLock.SavedApcState.ApcListHead[1].Flink[3].Flink),
            a5,
            a4,
            (int *)va,
            &v27,
            v26);
    if ( v11 >= 0 )
    {
      v12 = 3 * ((unsigned int)v8[1] + 25LL * (unsigned int)*v8);
      Flink = WheapPfaLock.SavedApcState.ApcListHead[1].Flink;
      *((_WORD *)&WheapPfaLock.SavedApcState.ApcListHead[1].Flink[5].Blink + 2 * v12) = v5;
      *((_DWORD *)&Flink[5].Flink + v12) = a4;
      *((_DWORD *)&Flink[5].Flink + v12 + 1) = v14;
      ++*v8;
      goto LABEL_20;
    }
LABEL_19:
    Flink = WheapPfaLock.SavedApcState.ApcListHead[1].Flink;
    goto LABEL_20;
  }
  v15 = *v8;
  v16 = 80 - *v8;
  LODWORD(v12) = 5;
  if ( v16 >= 5 || (v12 = v16) != 0 )
  {
    v17 = a5;
    v18 = (unsigned int)v12;
    do
    {
      v19 = BgpDisplayCharacterEx(
              0x20u,
              (__int64 *)Flink[2].Blink,
              *v9 + LODWORD(v10->Flink) * v15,
              v9[1] + HIDWORD(v10->Flink) * v8[1],
              v17,
              a4,
              (int *)va,
              &v27,
              v26);
      Flink = WheapPfaLock.SavedApcState.ApcListHead[1].Flink;
      v11 = v19;
      if ( v19 >= 0 )
      {
        v12 = (unsigned int)v8[1] + 25LL * (unsigned int)*v8;
        v20 = 3 * v12;
        *((_WORD *)&WheapPfaLock.SavedApcState.ApcListHead[1].Flink[5].Blink + 2 * v20) = 32;
        *((_DWORD *)&Flink[5].Flink + v20) = a4;
        *((_DWORD *)&Flink[5].Flink + v20 + 1) = v17;
      }
      v15 = ++*v8;
      --v18;
    }
    while ( v18 );
  }
LABEL_20:
  if ( (unsigned int)*v8 >= 0x50 )
    goto LABEL_21;
LABEL_23:
  v24 = v8[1];
  if ( v24 >= HIDWORD(Flink->Flink) )
  {
    v8[1] = v24 - 1;
    BgpConsoleScrollScreen(v12);
  }
  return (unsigned int)v11;
}
