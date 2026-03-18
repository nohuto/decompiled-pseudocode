/*
 * XREFs of HsaAttachDeviceDomainInternal @ 0x1405A8F88
 * Callers:
 *     HsaAttachDeviceDomain @ 0x1405A8F70 (HsaAttachDeviceDomain.c)
 *     HsaDetachDeviceDomain @ 0x1405A94C0 (HsaDetachDeviceDomain.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1402B4630 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402B9F90 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     HsaFlushTbInternal @ 0x14047E3E0 (HsaFlushTbInternal.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     HsaBuildDefaultDomain @ 0x1405A911C (HsaBuildDefaultDomain.c)
 *     HsaUpdateDeviceTableEntry @ 0x1405AAA50 (HsaUpdateDeviceTableEntry.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall HsaAttachDeviceDomainInternal(_QWORD *a1, __int64 a2, _BYTE *a3)
{
  __int64 v6; // r8
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // bl
  int v9; // r9d
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-98h] BYREF
  _BYTE v11[112]; // [rsp+70h] [rbp-78h] BYREF

  memset_0(v11, 0, sizeof(v11));
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !a3 )
  {
    LOBYTE(v6) = *(_BYTE *)(a2 + 48);
    result = HsaBuildDefaultDomain(a1, v11, v6);
    if ( (int)result < 0 )
      return result;
    a3 = v11;
  }
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 15 )
    __writecr8(0xFuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
  KeAcquireInStackQueuedSpinLockAtDpcLevel(a1 + 19, &LockHandle);
  LOBYTE(v9) = 1;
  HsaUpdateDeviceTableEntry((_DWORD)a1, *(_QWORD *)(a2 + 56), 0, v9, (__int64)a3, 1, 0);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  HsaFlushTbInternal(a1, 0, *((_DWORD *)a3 + 12), 1, 0LL, 0LL, 0, 0LL);
  return 0LL;
}
