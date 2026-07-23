/*
 * XREFs of HalpDmaControllerReadDmaCounter @ 0x1404EC910
 * Callers:
 *     HalReadDmaCounterV3 @ 0x1404EC8E0 (HalReadDmaCounterV3.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpDmaControllerReadDmaCounter(__int64 a1, unsigned int a2)
{
  __int64 v2; // r15
  _QWORD *v3; // rbx
  unsigned __int8 CurrentIrql; // di
  char v5; // bp
  unsigned __int64 v6; // rdx
  KSPIN_LOCK *v7; // rsi
  unsigned int v8; // r14d

  v2 = a2;
  v3 = (_QWORD *)a1;
  CurrentIrql = KeGetCurrentIrql();
  v5 = 0;
  if ( CurrentIrql == 15 )
  {
    v7 = (KSPIN_LOCK *)(a1 + 168);
  }
  else
  {
    v6 = *(unsigned __int8 *)(a1 + 176);
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != (_BYTE)v6 )
      __writecr8(v6);
    if ( KiIrqlFlags )
    {
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1, v6);
    }
    v7 = v3 + 21;
    KxAcquireSpinLock(v3 + 21);
    v5 = 1;
  }
  v8 = guard_dispatch_icall_no_overrides(v3[8], (unsigned int)v2);
  if ( !v8 )
    *(_BYTE *)(160 * v2 + v3[7] + 6) = 1;
  if ( v5 )
  {
    KxReleaseSpinLock(v7);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  return v8;
}
