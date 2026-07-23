/*
 * XREFs of MiWorkingSetVeryLarge @ 0x1403C38E0
 * Callers:
 *     MiOrderTrimList @ 0x1403C3390 (MiOrderTrimList.c)
 * Callees:
 *     MiGetAvailablePagesForTrimPass @ 0x1403C3B08 (MiGetAvailablePagesForTrimPass.c)
 */

unsigned __int64 __fastcall MiWorkingSetVeryLarge(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r9
  __int64 v3; // r11
  unsigned __int64 v4; // rsi
  __int64 v5; // r8
  __int64 v6; // rdi
  unsigned __int64 v7; // r10
  BOOL v8; // r14d
  int v9; // r12d
  unsigned __int64 AvailablePagesForTrimPass; // rbx
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // r9
  unsigned __int64 result; // rax
  int v14; // edx
  int *v15; // rax
  __int64 v16; // r8
  int v17; // ecx
  unsigned __int64 i; // rcx
  __int64 v19; // rax
  _QWORD *v20; // rcx
  __int64 v21; // r8
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // r8
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rdx

  v2 = *(_QWORD *)(a1 + 152);
  v3 = a1;
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL);
  if ( v2 <= v4 )
    return 0LL;
  v5 = *(unsigned __int16 *)(a1 + 174);
  v6 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * v5);
  v7 = *(_QWORD *)(v6 + 22288);
  if ( a2 && ((v2 ^ (v2 + a2)) & 0xFFFFFFFFFFFFFFC0uLL) == 0 )
  {
    v12 = v2 - v4;
    AvailablePagesForTrimPass = -1LL;
    v9 = 0;
  }
  else
  {
    v8 = 0;
    v9 = 1;
    AvailablePagesForTrimPass = MiGetAvailablePagesForTrimPass(*(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * v5));
    if ( AvailablePagesForTrimPass < v7 >> 4 && AvailablePagesForTrimPass < 0x800000 )
      v8 = v11 >= v7 >> 4;
    v12 = v11 - v4;
    if ( v8 )
      goto LABEL_15;
  }
  if ( v12 < 3 * (v7 >> 2) )
    return 0LL;
  v14 = 0;
  v15 = (int *)(v6 + 7588);
  v16 = 7LL;
  do
  {
    v17 = *v15++;
    v14 += v17;
    --v16;
  }
  while ( v16 );
  if ( v14 == *(_DWORD *)(v6 + 18420) )
    return 0LL;
  if ( !v9 )
  {
    AvailablePagesForTrimPass = *(_QWORD *)(v6 + 3408) + *(_QWORD *)(v6 + 3280);
    for ( i = v6 + 3648; i < v6 + 4176; AvailablePagesForTrimPass += v19 )
    {
      v19 = *(_QWORD *)(i + 16);
      i += 88LL;
    }
  }
  if ( AvailablePagesForTrimPass >= 8LL * *(_QWORD *)(v6 + 18400) )
    return 0LL;
LABEL_15:
  v20 = *(_QWORD **)(stru_140E2ED08.ThreadLock + 8LL * *(unsigned __int16 *)(v3 + 174));
  v21 = v20[2300];
  if ( (*(_DWORD *)(v3 + 184) & 0xF) == 0 )
  {
    if ( AvailablePagesForTrimPass <= v20[2128] )
      goto LABEL_17;
    return 0LL;
  }
  v21 *= 2LL;
LABEL_17:
  v22 = v20[2786];
  v23 = 2 * v21;
  if ( v23 > 0x40000 )
    v23 = 0x40000LL;
  v24 = v12;
  if ( v12 >= v22 )
    v24 = v22;
  v25 = v23 * (100 * v24 / v22) / 0x64;
  v26 = v12 / 0xA;
  if ( v25 <= v12 / 0xA )
    v26 = v25;
  result = v26 - AvailablePagesForTrimPass;
  if ( v26 <= AvailablePagesForTrimPass )
    return 0LL;
  return result;
}
