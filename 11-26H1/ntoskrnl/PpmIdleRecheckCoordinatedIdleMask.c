/*
 * XREFs of PpmIdleRecheckCoordinatedIdleMask @ 0x140604ED4
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1402F87D0 (PpmIdleExecuteTransition.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

char __fastcall PpmIdleRecheckCoordinatedIdleMask(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v6; // r13
  char v7; // bl
  unsigned __int16 v8; // r9
  __int64 v9; // r10
  unsigned int i; // r8d
  unsigned __int16 v11; // r12
  __int64 *v12; // r14
  unsigned __int16 v13; // dx
  unsigned __int16 *v14; // rdi
  unsigned __int16 v15; // r11
  __int64 v16; // rcx
  __int64 v18; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD v19[33]; // [rsp+30h] [rbp-D8h] BYREF

  v4 = a2;
  memset_0(v19, 0, 0x100uLL);
  v6 = PpmPlatformStates;
  v7 = 0;
  if ( !PpmPlatformStates )
    return v7;
  v18 = 2097153LL;
  memset_0(v19, 0, 0x100uLL);
  v8 = 1;
  if ( (_WORD)v4 )
  {
    if ( WORD1(v18) <= (unsigned __int16)v4 )
      goto LABEL_6;
    LOWORD(v18) = v4 + 1;
  }
  v19[v4] |= a3;
  v8 = v18;
LABEL_6:
  v9 = *(_QWORD *)(a1 + 992);
  for ( i = 0; i < *(_DWORD *)(v9 + 4); ++i )
  {
    if ( *(_DWORD *)(v9 + 4LL * i + 8) == -1 )
    {
      v11 = v8;
      v12 = &v18;
      v13 = 0;
      v14 = (unsigned __int16 *)(v6 + 448LL * *(unsigned int *)(*(_QWORD *)(a1 + 1024) + 24LL * i + 4) + 128);
      v15 = *v14;
      if ( *v14 >= v8 )
      {
        v11 = *v14;
        v12 = (__int64 *)(v6 + 448LL * *(unsigned int *)(*(_QWORD *)(a1 + 1024) + 24LL * i + 4) + 128);
        v15 = v8;
      }
      while ( v13 < v15 )
      {
        v16 = *(_QWORD *)&v14[4 * v13 + 4];
        if ( (v16 & v19[v13]) != v16 )
          goto LABEL_18;
        ++v13;
      }
      if ( v12 != &v18 )
      {
        while ( v13 < v11 )
        {
          if ( *(_QWORD *)&v14[4 * v13 + 4] )
            goto LABEL_18;
          ++v13;
        }
      }
      return 1;
    }
LABEL_18:
    ;
  }
  return v7;
}
