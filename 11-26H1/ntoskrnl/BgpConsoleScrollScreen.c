/*
 * XREFs of BgpConsoleScrollScreen @ 0x140C56694
 * Callers:
 *     BgpConsoleDisplayCharacterEx @ 0x140C55F18 (BgpConsoleDisplayCharacterEx.c)
 * Callees:
 *     BgpDisplayCharacterEx @ 0x14071A980 (BgpDisplayCharacterEx.c)
 */

__int64 BgpConsoleScrollScreen()
{
  PVOID NormalContext; // r10
  unsigned int v1; // ebx
  __int64 v2; // rsi
  _DWORD *v3; // r12
  _DWORD *v4; // r13
  unsigned int v5; // r9d
  unsigned int v6; // r15d
  __int64 v7; // rdi
  __int64 v8; // r8
  unsigned __int16 v9; // r14
  int v10; // ecx
  int v11; // eax
  unsigned int v12; // r9d
  unsigned int v13; // r8d
  __int64 *v14; // rdx
  int v15; // eax
  unsigned int v16; // ebx
  int v17; // ebp
  unsigned int v18; // edi
  int v19; // r14d
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

  NormalContext = WheapPfaLock.SchedulerApc.NormalContext;
  v1 = 0;
  v2 = 0LL;
  v3 = (char *)WheapPfaLock.SchedulerApc.NormalContext + 60;
  v4 = (char *)WheapPfaLock.SchedulerApc.NormalContext + 48;
  do
  {
    v5 = 0;
    if ( *((_DWORD *)NormalContext + 1) != 1 )
    {
      do
      {
        v6 = v5 + 1;
        v7 = v2 + v5;
        v8 = v2 + v5 + 1;
        v9 = *((_WORD *)NormalContext + 6 * v8 + 44);
        if ( *((_WORD *)NormalContext + 6 * v7 + 44) != v9
          || *((_DWORD *)NormalContext + 3 * v7 + 20) != *((_DWORD *)NormalContext + 3 * v8 + 20)
          || *((_DWORD *)NormalContext + 3 * v7 + 21) != *((_DWORD *)NormalContext + 3 * v8 + 21) )
        {
          v10 = *((_DWORD *)NormalContext + 3 * v8 + 20);
          v11 = *((_DWORD *)NormalContext + 3 * v8 + 21);
          v12 = v3[1] + v4[1] * v5;
          v13 = *v3 + *v4 * v1;
          v14 = (__int64 *)*((_QWORD *)NormalContext + 5);
          v27 = v10;
          v26 = v11;
          v15 = BgpDisplayCharacterEx(v9, v14, v13, v12, v11, v10, &v29, &v28, v25);
          NormalContext = WheapPfaLock.SchedulerApc.NormalContext;
          if ( v15 >= 0 )
          {
            *((_DWORD *)WheapPfaLock.SchedulerApc.NormalContext + 3 * v7 + 21) = v26;
            *((_DWORD *)NormalContext + 3 * v7 + 20) = v27;
            *((_WORD *)NormalContext + 6 * v7 + 44) = v9;
          }
        }
        v5 = v6;
      }
      while ( v6 < *((_DWORD *)NormalContext + 1) - 1 );
    }
    ++v1;
    v2 += 25LL;
  }
  while ( v1 < 0x50 );
  v16 = 0;
  v17 = *((_DWORD *)NormalContext + 4);
  v18 = *((_DWORD *)NormalContext + 1) - 1;
  v19 = *((_DWORD *)NormalContext + 3);
  v20 = 0LL;
  do
  {
    v21 = BgpDisplayCharacterEx(
            0x20u,
            *((__int64 **)NormalContext + 5),
            *v3 + *v4 * v16,
            v3[1] + v4[1] * v18,
            v17,
            v19,
            &v27,
            &v26,
            v25);
    NormalContext = WheapPfaLock.SchedulerApc.NormalContext;
    if ( v21 >= 0 )
    {
      v22 = v20 + v18;
      v23 = 3 * v22;
      *((_WORD *)WheapPfaLock.SchedulerApc.NormalContext + 2 * v23 + 44) = 32;
      *((_DWORD *)NormalContext + 3 * v22 + 21) = v17;
      *((_DWORD *)NormalContext + v23 + 20) = v19;
    }
    ++v16;
    v20 += 25LL;
  }
  while ( v16 < 0x50 );
  result = (unsigned int)(*((_DWORD *)NormalContext + 1) - 1);
  *((_DWORD *)NormalContext + 17) = 0;
  *((_DWORD *)NormalContext + 18) = result;
  return result;
}
