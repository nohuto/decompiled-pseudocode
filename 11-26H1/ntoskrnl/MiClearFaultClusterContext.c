/*
 * XREFs of MiClearFaultClusterContext @ 0x140467884
 * Callers:
 *     MiAgeThreadFaultClusterBlock @ 0x14046770C (MiAgeThreadFaultClusterBlock.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiPerformFaultClusterMaintenance @ 0x1402CD110 (MiPerformFaultClusterMaintenance.c)
 *     MiSetFaultClusterContextBlockEntryState @ 0x140467AA4 (MiSetFaultClusterContextBlockEntryState.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

_OWORD *__fastcall MiClearFaultClusterContext(__int64 a1, unsigned int a2)
{
  char v2; // r14
  __int64 v3; // rdi
  __int64 v4; // rbx
  unsigned __int8 CurrentIrql; // si
  signed __int64 v6; // rax
  signed __int64 v7; // rtt
  _QWORD *v8; // rbp
  _QWORD *v9; // rdi
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  _OWORD *result; // rax
  int v15; // [rsp+20h] [rbp-58h] BYREF
  __int128 v16; // [rsp+28h] [rbp-50h] BYREF
  __int128 v17; // [rsp+38h] [rbp-40h]
  __int128 i; // [rsp+48h] [rbp-30h]

  v2 = a2;
  v3 = a1;
  v16 = 0LL;
  v4 = 48LL * a2 + a1 + 32;
  v17 = 0LL;
  i = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
  }
  v15 = 0;
LABEL_6:
  v6 = *(_QWORD *)(v4 + 40);
  do
  {
    if ( (v6 & 1) != 0 )
    {
      KeYieldProcessorEx(&v15);
      goto LABEL_6;
    }
    v7 = v6;
    v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 40), v6 | 1, v6);
  }
  while ( v7 != v6 );
  if ( ((*(int *)(v3 + 28) >> (2 * v2)) & 3u) <= 1 )
  {
    _InterlockedDecrement64((volatile signed __int64 *)(v4 + 40));
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    result = (_OWORD *)CurrentIrql;
    __writecr8(CurrentIrql);
  }
  else
  {
    v8 = (_QWORD *)(v4 + 32);
    v9 = (_QWORD *)v4;
    v10 = *(_OWORD *)(v4 + 16);
    v16 = *(_OWORD *)v4;
    v11 = *(_OWORD *)(v4 + 32);
    v17 = v10;
    for ( i = v11; v9 < v8; ++v9 )
    {
      if ( *v9 )
      {
        v12 = (2LL * (*(_QWORD *)(v4 + 40) >> 1) - 2) ^ (*(_QWORD *)(v4 + 40) ^ (2LL * (*(_QWORD *)(v4 + 40) >> 1) - 2)) & 0xFFFFFFFFFFFFFFF1uLL;
        if ( ((((*v9 >> 6) + (*v9 >> 16)) << 16) & 0x1FFFFFLL) == 0 )
          v12 = (16 * ((v12 >> 4) - 1)) ^ ((16 * ((v12 >> 4) - 1)) ^ v12) & 0xFFFFFFFFFFFFFF8FuLL;
        *(_QWORD *)(v4 + 40) = v12;
        *v9 = 0LL;
        if ( (v12 & 0xE) == 0 && !*v8 )
          MiSetFaultClusterContextBlockEntryState(v4, 0LL);
      }
    }
    if ( *v8 )
    {
      v13 = *(_QWORD *)(v4 + 40);
      *v9 = 0LL;
      if ( (v13 & 0xE) == 0 && !*v8 )
        MiSetFaultClusterContextBlockEntryState(v4, 0LL);
    }
    _InterlockedDecrement64((volatile signed __int64 *)(v4 + 40));
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    *((_QWORD *)&i + 1) &= ~1uLL;
    return MiPerformFaultClusterMaintenance(0LL, 0LL, &v16);
  }
  return result;
}
