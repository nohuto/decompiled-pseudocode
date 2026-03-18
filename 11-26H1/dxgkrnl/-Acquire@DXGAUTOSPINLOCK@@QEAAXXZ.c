/*
 * XREFs of ?Acquire@DXGAUTOSPINLOCK@@QEAAXXZ @ 0x14003BB1C
 * Callers:
 *     ?CompletePresentIndirectInternal@BLTQUEUE@@AEAAJPEAVBLTENTRY@@PEAT_LARGE_INTEGER@@H@Z @ 0x1400664A4 (-CompletePresentIndirectInternal@BLTQUEUE@@AEAAJPEAVBLTENTRY@@PEAT_LARGE_INTEGER@@H@Z.c)
 *     ?QuantizeVSync@BLTQUEUE@@QEAAXKPEA_J0@Z @ 0x14006680C (-QuantizeVSync@BLTQUEUE@@QEAAXKPEA_J0@Z.c)
 *     ?SignalVSyncEvent@BLTQUEUE@@AEAAXXZ @ 0x140066AE8 (-SignalVSyncEvent@BLTQUEUE@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGAUTOSPINLOCK::Acquire(DXGAUTOSPINLOCK *this)
{
  KSPIN_LOCK *v1; // rbx

  v1 = (KSPIN_LOCK *)*((_QWORD *)this + 1);
  KeAcquireInStackQueuedSpinLock(v1, (PKLOCK_QUEUE_HANDLE)((char *)this + 16));
  v1[1] = (KSPIN_LOCK)KeGetCurrentThread();
  *((_BYTE *)this + 40) = 1;
}
