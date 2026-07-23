/*
 * XREFs of KiJoinCooperativeIdleSearch @ 0x140241BC0
 * Callers:
 *     KiSearchForNewThreadsWithinL0SearchContext @ 0x1402411E0 (KiSearchForNewThreadsWithinL0SearchContext.c)
 *     KiSearchForNewThreadsWithinSearchContext @ 0x140241560 (KiSearchForNewThreadsWithinSearchContext.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     KeWakeAddressAll @ 0x140304EB0 (KeWakeAddressAll.c)
 *     KxWaitForLockChainValid @ 0x140305020 (KxWaitForLockChainValid.c)
 */

char __fastcall KiJoinCooperativeIdleSearch(__int64 a1, __int64 a2, __int64 a3)
{
  __int16 v3; // ax
  _QWORD *v4; // r12
  char v5; // r15
  __int64 v6; // rdi
  __int64 v7; // rbp
  __int64 v8; // r14
  __int64 v9; // r11
  __int64 v12; // rdx
  __int64 v13; // r9
  _QWORD *v14; // r10
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned int v18; // edx
  __int64 v19; // rcx
  __int64 v20; // rax
  volatile signed __int64 *v21; // rdx
  __int64 v22; // [rsp+20h] [rbp-38h] BYREF
  volatile signed __int64 *v23; // [rsp+28h] [rbp-30h]

  v3 = *(_WORD *)(a2 + 1058);
  v4 = *(_QWORD **)(a1 + 192);
  v5 = 0;
  v6 = a3;
  v7 = a3 + 16 * (*(unsigned __int16 *)(a3 + 8) + 1LL);
  v8 = a2 + 16LL * *(unsigned __int16 *)(a2 + 1056);
  v9 = a2 + 32LL * *(unsigned __int16 *)(a2 + 1056);
  *(_WORD *)(a3 + 10) = v3;
  LODWORD(a3) = 0;
  if ( !v3 )
    return 0;
  do
  {
    v12 = 16LL * (unsigned int)a3;
    v13 = v12 + v7;
    v14 = *(_QWORD **)(KiSubNodes + 8LL * *(unsigned __int16 *)(v9 + 2LL * (unsigned int)a3 + 1064));
    *(_OWORD *)(v12 + v7) = *(_OWORD *)(v12 + v8 + 1064);
    if ( v14 == v4 )
    {
      *(_QWORD *)(v12 + v7) &= ~*(_QWORD *)(a1 + 200);
      *(_QWORD *)(v13 + 8) &= ~*(_QWORD *)(a1 + 36480);
    }
    v15 = v14[10] & ~v14[2];
    *(_QWORD *)(v13 + 8) &= v15;
    *(_QWORD *)(v12 + v7) &= v15;
    *(_QWORD *)(v12 + v7) &= v14[48] | v14[50];
    v16 = *(_QWORD *)(v13 + 8) & v14[49];
    *(_QWORD *)(v13 + 8) = v16;
    if ( *(_QWORD *)(v12 + v7) || v16 )
      v5 = 1;
    a3 = (unsigned int)(a3 + 1);
  }
  while ( (unsigned int)a3 < *(unsigned __int16 *)(v6 + 10) );
  if ( !v5 )
    return 0;
  v23 = (volatile signed __int64 *)a2;
  v22 = 0LL;
  if ( _InterlockedExchange64((volatile __int64 *)a2, (__int64)&v22) )
    KxWaitForLockOwnerShip(&v22);
  v18 = 0;
  *(_QWORD *)v6 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 16) ^= (*(_QWORD *)(a2 + 16) ^ (*(_QWORD *)(a2 + 16) + 128LL)) & 0xFFFFFFFFFFFFFF80uLL;
  if ( *(_WORD *)(v6 + 10) )
  {
    do
    {
      v19 = 16LL * v18;
      *(_QWORD *)(v19 + v7) &= ~*(_QWORD *)(v19 + a2 + 1064);
      *(_QWORD *)(v19 + v7 + 8) &= ~*(_QWORD *)(v19 + a2 + 1072);
      _InterlockedOr64((volatile signed __int64 *)(v19 + a2 + 1064), *(_QWORD *)(v19 + v7));
      _InterlockedOr64((volatile signed __int64 *)(v19 + a2 + 1072), *(_QWORD *)(v19 + v7 + 8));
      ++v18;
      *(_QWORD *)(v19 + v6 + 16) = *(_QWORD *)(v19 + v7);
      *(_QWORD *)(v19 + v6 + 24) = *(_QWORD *)(v19 + v7 + 8);
    }
    while ( v18 < *(unsigned __int16 *)(v6 + 10) );
  }
  *(_QWORD *)(a2 + 8LL * *(unsigned __int8 *)(a1 + 209) + 24) = *(_QWORD *)v6;
  *(_QWORD *)(a2 + 8) |= *(_QWORD *)(a1 + 200);
  _m_prefetchw(&v22);
  v20 = v22;
  if ( v22 )
    goto LABEL_17;
  if ( (__int64 *)_InterlockedCompareExchange64(v23, 0LL, (signed __int64)&v22) != &v22 )
  {
    v20 = KxWaitForLockChainValid(&v22);
LABEL_17:
    v22 = 0LL;
    v21 = v23;
    if ( (((unsigned __int8)v21 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v20 + 8), (__int64)v23)) & 4) != 0 )
      KeWakeAddressAll(v20 + 8, v21, a3, v13);
  }
  return 1;
}
