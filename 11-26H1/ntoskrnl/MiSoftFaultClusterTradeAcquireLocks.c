/*
 * XREFs of MiSoftFaultClusterTradeAcquireLocks @ 0x140717048
 * Callers:
 *     MiHandleTransitionFault @ 0x1402D85D0 (MiHandleTransitionFault.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402CAC30 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiLockProtoPoolPage @ 0x1402D7150 (MiLockProtoPoolPage.c)
 *     MiIsProtoPoolPfnInNonPagedPool @ 0x14031E250 (MiIsProtoPoolPfnInNonPagedPool.c)
 *     MiIsFaultPteIntact @ 0x14031E538 (MiIsFaultPteIntact.c)
 *     MiRelockFaultState @ 0x14038DE50 (MiRelockFaultState.c)
 */

__int64 MiSoftFaultClusterTradeAcquireLocks(__int64 a1, ULONG_PTR a2, __int64 *a3, ...)
{
  __int64 *v3; // r14
  __int64 v6; // rdi
  __int64 v7; // rsi
  unsigned int v8; // ebx
  int v10; // [rsp+50h] [rbp+8h] BYREF
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, a3);
  v3 = *(__int64 **)a1;
  v6 = *(_QWORD *)(a1 + 16);
  v7 = *(_QWORD *)(a1 + 8);
  MiRelockFaultState(*(_QWORD *)a1 + 56LL, *(_QWORD *)(a1 + 32), (__int64)a3);
  v8 = 0;
  if ( v7 )
  {
    MiLockProtoPoolPage(a2, 0LL);
    if ( !MiIsProtoPoolPfnInNonPagedPool(v7) )
    {
      v10 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v10);
        while ( *(__int64 *)(v7 + 24) < 0 );
      }
      MiRemoveLockedPageChargeAndDecRef(v7);
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
  }
  v10 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v10);
    while ( *(__int64 *)(v6 + 24) < 0 );
  }
  if ( (*(_QWORD *)(v6 + 24) & 0x4000000000000000LL) == 0
    && (*(_DWORD *)(v6 + 32) & 0x40000000) == 0
    && (unsigned __int16)*(_DWORD *)(v6 + 32) == 1
    && (*(_QWORD *)(v6 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0 )
  {
    return (unsigned int)MiIsFaultPteIntact((__int64)v3, *v3, a3, (__int64 *)va);
  }
  return v8;
}
