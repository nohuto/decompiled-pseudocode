/*
 * XREFs of PopFxReleasePowerIrp @ 0x1403B60D8
 * Callers:
 *     PopFreeIrp @ 0x1403B5EEC (PopFreeIrp.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     PopRequestPowerIrp @ 0x14026FDC4 (PopRequestPowerIrp.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     PopFxDereferenceDevice @ 0x1403B61F4 (PopFxDereferenceDevice.c)
 */

__int64 __fastcall PopFxReleasePowerIrp(__int64 a1)
{
  KIRQL v2; // r12
  void *v3; // rbp
  __int64 v4; // r14
  __int64 v5; // r15
  int v6; // ebx
  signed __int32 v7; // eax
  signed __int32 v8; // ett
  char v9; // si
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  signed __int32 v14; // eax
  signed __int32 v15; // ett

  v2 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*(_QWORD *)(a1 + 48) + 88LL));
  _InterlockedAnd((volatile signed __int32 *)(a1 + 32), 0xFFFFFFEF);
  v3 = *(void **)(a1 + 552);
  v4 = *(_QWORD *)(a1 + 576);
  v5 = *(_QWORD *)(a1 + 592);
  v6 = *(_DWORD *)(a1 + 568);
  _m_prefetchw((const void *)(a1 + 32));
  v7 = *(_DWORD *)(a1 + 32);
  do
  {
    v8 = v7;
    v7 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 32), v7, v7);
  }
  while ( v8 != v7 );
  if ( (v7 & 0x20) != 0 )
  {
    v9 = 1;
    _m_prefetchw((const void *)(a1 + 32));
    v14 = *(_DWORD *)(a1 + 32);
    do
    {
      v15 = v14;
      v14 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 32), v14, v14);
    }
    while ( v15 != v14 );
    if ( (v14 & 0x100) != 0 )
    {
      v3 = *(void **)(a1 + 560);
      v4 = *(_QWORD *)(a1 + 584);
      v5 = *(_QWORD *)(a1 + 600);
      v6 = *(_DWORD *)(a1 + 572);
    }
  }
  else
  {
    v9 = 0;
    KeSetEvent((PRKEVENT)(a1 + 608), 0, 0);
  }
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(*(_QWORD *)(a1 + 48) + 88LL), v2);
  if ( v9 )
  {
    LOBYTE(v10) = 2;
    PopRequestPowerIrp(v3, v10, v6, v4, v5, 1, 0LL);
  }
  return PopFxDereferenceDevice(a1, 0LL, v11, v12);
}
