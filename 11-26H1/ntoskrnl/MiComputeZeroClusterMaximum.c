/*
 * XREFs of MiComputeZeroClusterMaximum @ 0x1403DCF50
 * Callers:
 *     MiResolvePrivateZeroFault @ 0x1402B71E0 (MiResolvePrivateZeroFault.c)
 *     MiDetermineThreadFaultCluster @ 0x1402B7E68 (MiDetermineThreadFaultCluster.c)
 *     MiExpandSharedZeroCluster @ 0x1403DCAFC (MiExpandSharedZeroCluster.c)
 *     MiGetClusterPage @ 0x140508040 (MiGetClusterPage.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiComputeZeroClusterMaximum(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v6; // rax
  unsigned __int64 v8; // r10
  __int64 v9; // rcx
  _QWORD *v10; // r8
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // r9
  unsigned int v14; // edx
  unsigned int v15; // eax
  __int64 v16; // r15
  __int64 v17; // r12
  _QWORD *v18; // r13
  unsigned int i; // r11d
  unsigned __int64 result; // rax
  _QWORD *v21; // rdx
  unsigned __int64 j; // r9
  __int64 v23; // rax
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rdx

  v6 = (_QWORD *)(16LL * *(_QWORD *)(a1 + 24) + *(_QWORD *)(a1 + 8));
  v8 = (*v6 >> 12) + ((v6[1] + 4095LL + (*v6 & 0xFFFuLL)) >> 12) - (a2 >> 12);
  if ( a4 )
  {
    v9 = *(unsigned int *)(a4 + 28);
    if ( v8 > (v9 | ((unsigned __int64)*(unsigned __int8 *)(a4 + 33) << 32)) - (a2 >> 12) + 1 )
      v8 = (v9 | ((unsigned __int64)*(unsigned __int8 *)(a4 + 33) << 32)) - (a2 >> 12) + 1;
  }
  v10 = *(_QWORD **)(stru_140E2ED08.ThreadLock + 8LL * *(unsigned __int16 *)(a3 + 174));
  v11 = 20000LL;
  if ( v10[2300] <= 0x4E20uLL || (v10[2300] & 0xFFFFFFFFFFFFFFFEuLL) <= 0x4E20 )
  {
    v12 = 5000LL;
  }
  else
  {
    if ( v10[2300] > 0x4E20uLL )
      v11 = v10[2300];
    v12 = v11 >> 2;
  }
  v13 = v10[2808];
  if ( v13 < v12 )
  {
    v14 = (unsigned __int16)KeNumberNodes;
    v15 = 0;
    v16 = v10[2] + 13856LL;
    while ( v15 < v14 )
    {
      v17 = 0LL;
      v18 = (_QWORD *)v16;
      while ( v17 <= 1 )
      {
        for ( i = 0; i < dword_140E2D90C; ++i )
        {
          v13 += *(unsigned __int16 *)(*v18 + 16LL * i);
          if ( v13 >= v12 )
            goto LABEL_17;
        }
        ++v17;
        ++v18;
      }
      v14 = (unsigned __int16)KeNumberNodes;
      v16 += 56320LL;
      ++v15;
    }
    return 1LL;
  }
LABEL_17:
  if ( (*(_DWORD *)(a3 + 184) & 0x10) != 0 )
  {
    v24 = *(_QWORD *)(a3 + 136);
    v25 = *(_QWORD *)(a3 + 128);
    if ( v24 >= v25 )
      return 1LL;
    if ( v24 + v8 > v25 )
      v8 = v25 - v24;
  }
  if ( *(_BYTE *)a1 == 1 )
  {
    v21 = v10 + 456;
    for ( j = v10[426] + v10[410]; v21 < &v10[11 * ((*(_DWORD *)(a1 + 80) >> 3) & 7u) + 467]; j += v23 )
    {
      v23 = v21[2];
      v21 += 11;
    }
    if ( v8 > j )
      v8 = j;
  }
  if ( !v8 )
    v8 = 1LL;
  result = 512 - ((((a2 >> 9) & 0xFFFFFFF8) >> 3) & 0x1FF);
  if ( v8 <= result )
    return v8;
  return result;
}
