/*
 * XREFs of ??0DXGAUTOSPINLOCK@@QEAA@QEAVDXGSPINLOCK@@E@Z @ 0x14003D0D0
 * Callers:
 *     HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_0b554593ef403a86ad1e63867a4eabfc___ @ 0x140080D7C (HOSTVMMONITORMAPPING--RemoveMappingInternal__lambda_0b554593ef403a86ad1e63867a4eabfc___.c)
 *     HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_0c150cc48e274b7aa1002551270ee584___ @ 0x140080F5C (HOSTVMMONITORMAPPING--RemoveMappingInternal__lambda_0c150cc48e274b7aa1002551270ee584___.c)
 *     HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_271d47a19eb31cbfc6e558835131ce74___ @ 0x140081128 (HOSTVMMONITORMAPPING--RemoveMappingInternal__lambda_271d47a19eb31cbfc6e558835131ce74___.c)
 *     HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_fa329dc3555829cf0f5b9660d2dc29b7___ @ 0x1400812D4 (HOSTVMMONITORMAPPING--RemoveMappingInternal__lambda_fa329dc3555829cf0f5b9660d2dc29b7___.c)
 *     ?AddMapping@HOSTVMMONITORMAPPING@@QEAAJPEAUHOST_VMMONITOR_MAPPING@1@@Z @ 0x1400816C4 (-AddMapping@HOSTVMMONITORMAPPING@@QEAAJPEAUHOST_VMMONITOR_MAPPING@1@@Z.c)
 *     ?GuestPaused@HOSTVMMONITORMAPPING@@QEAAXXZ @ 0x140081BFC (-GuestPaused@HOSTVMMONITORMAPPING@@QEAAXXZ.c)
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x14009A6DC (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 *     ?UpdateDisplayModeInfoWorker@BLTQUEUE@@AEAAXXZ @ 0x14009B4C0 (-UpdateDisplayModeInfoWorker@BLTQUEUE@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

DXGAUTOSPINLOCK *__fastcall DXGAUTOSPINLOCK::DXGAUTOSPINLOCK(DXGAUTOSPINLOCK *this, KSPIN_LOCK *a2, char a3)
{
  *((_QWORD *)this + 1) = a2;
  *((_BYTE *)this + 40) = 0;
  if ( a3 )
  {
    KeAcquireInStackQueuedSpinLock(a2, (PKLOCK_QUEUE_HANDLE)((char *)this + 16));
    a2[1] = (KSPIN_LOCK)KeGetCurrentThread();
    *((_BYTE *)this + 40) = 1;
  }
  return this;
}
