/*
 * XREFs of KdDeregisterPowerHandler @ 0x1405E6010
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall KdDeregisterPowerHandler(__int64 *a1)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 *v3; // rax
  __int64 *v4; // rdi
  char v5; // si
  __int64 v6; // rcx
  __int64 *v7; // rdx

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 15 )
    __writecr8(0xFuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
  KxAcquireSpinLock(&KdpPowerSpinLock);
  v3 = (__int64 *)KdpPowerListHead;
  v4 = 0LL;
  v5 = 0;
  while ( v3 != &KdpPowerListHead )
  {
    v6 = *v3;
    v4 = v3;
    if ( a1 == v3 )
    {
      if ( *(__int64 **)(v6 + 8) != v3 || (v7 = (__int64 *)v3[1], (__int64 *)*v7 != v3) )
        __fastfail(3u);
      *v7 = v6;
      v5 = 1;
      *(_QWORD *)(v6 + 8) = v7;
      break;
    }
    v3 = (__int64 *)*v3;
  }
  KeReleaseSpinLock(&KdpPowerSpinLock, CurrentIrql);
  if ( !v5 )
    return 3221226021LL;
  ExFreePoolWithTag(v4, 0x6F49644Bu);
  return 0LL;
}
