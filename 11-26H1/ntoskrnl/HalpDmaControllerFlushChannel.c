/*
 * XREFs of HalpDmaControllerFlushChannel @ 0x140437C44
 * Callers:
 *     HalFlushAdapterBuffersEx @ 0x1404379C0 (HalFlushAdapterBuffersEx.c)
 *     IoFlushAdapterBuffersV3 @ 0x14058E180 (IoFlushAdapterBuffersV3.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpDmaControllerFlushChannel(__int64 a1, unsigned int a2)
{
  ULONG_PTR BugCheckParameter4; // r13
  __int64 v3; // rbx
  unsigned __int8 CurrentIrql; // di
  char v5; // r15
  unsigned __int64 v6; // rdx
  KSPIN_LOCK *v7; // rsi
  __int64 v8; // r12
  __int64 v9; // rbp
  ULONG_PTR v10; // r14
  __int64 result; // rax

  BugCheckParameter4 = a2;
  v3 = a1;
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
    v7 = (KSPIN_LOCK *)(v3 + 168);
    KxAcquireSpinLock((PKSPIN_LOCK)(v3 + 168));
    v5 = 1;
  }
  v8 = *(_QWORD *)(v3 + 56);
  v9 = 160 * BugCheckParameter4;
  v10 = v8 + 160 * BugCheckParameter4;
  if ( !*(_BYTE *)(v10 + 6) && *(_QWORD *)(v10 + 8) )
    KeBugCheckEx(0xE6u, 0x23uLL, 0LL, *(unsigned int *)(v3 + 32), BugCheckParameter4);
  result = guard_dispatch_icall_no_overrides(*(_QWORD *)(v3 + 64), (unsigned int)BugCheckParameter4);
  *(_BYTE *)(v8 + v9 + 6) = 0;
  *(_QWORD *)(v10 + 8) = 0LL;
  *(_QWORD *)(v8 + v9 + 16) = 0LL;
  if ( v5 )
  {
    KxReleaseSpinLock(v7);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
