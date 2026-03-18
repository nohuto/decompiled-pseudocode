/*
 * XREFs of HalpDmaControllerCancelTransfer @ 0x14058C7F4
 * Callers:
 *     HalCancelMappedTransfer @ 0x14058B780 (HalCancelMappedTransfer.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiInsertQueueDpc @ 0x1402BD330 (KiInsertQueueDpc.c)
 *     KxReleaseSpinLock @ 0x1402BDEF0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x14032F2C0 (KxAcquireSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpDmaControllerCancelTransfer(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v6; // rbx
  unsigned __int8 CurrentIrql; // di
  char v8; // r14
  unsigned __int64 v9; // rdx
  KSPIN_LOCK *v10; // rbp
  __int64 result; // rax
  bool v12; // zf

  v6 = *(_QWORD *)(a1 + 56) + 160LL * a2;
  CurrentIrql = KeGetCurrentIrql();
  v8 = 0;
  if ( CurrentIrql == 15 )
  {
    v10 = (KSPIN_LOCK *)(a1 + 168);
  }
  else
  {
    v9 = *(unsigned __int8 *)(a1 + 176);
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != (_BYTE)v9 )
      __writecr8(v9);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v9);
    v10 = (KSPIN_LOCK *)(a1 + 168);
    KxAcquireSpinLock((PKSPIN_LOCK)(a1 + 168));
    v8 = 1;
  }
  *(_DWORD *)(a3 + 12) |= 1u;
  result = guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 64), a2);
  if ( (_BYTE)result )
  {
    v12 = *(_QWORD *)(v6 + 8) == 0LL;
    *(_BYTE *)(v6 + 6) = 1;
    *(_DWORD *)(v6 + 32) = 2;
    if ( !v12 )
      result = KiInsertQueueDpc(v6 + 40, 0LL, 0LL, 0LL, 0);
  }
  if ( v8 )
  {
    KxReleaseSpinLock(v10);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
