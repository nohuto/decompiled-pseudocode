/*
 * XREFs of ?VidSchiProcessCrossAdapterSignaledSyncObjectsFromPassiveLevel@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x1400560C0
 * Callers:
 *     VidSchFlushAdapter @ 0x1400C1D50 (VidSchFlushAdapter.c)
 * Callees:
 *     VidSchiProcessCrossAdapterSignaledSyncObjects @ 0x140006594 (VidSchiProcessCrossAdapterSignaledSyncObjects.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x140007FB0 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x14000F3B0 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     ??0AcquireSpinLock@@QEAA@AEA_K_N1@Z @ 0x14002BF80 (--0AcquireSpinLock@@QEAA@AEA_K_N1@Z.c)
 */

void __fastcall VidSchiProcessCrossAdapterSignaledSyncObjectsFromPassiveLevel(struct _VIDSCH_GLOBAL *a1)
{
  struct _KEVENT *v2; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v3[2]; // [rsp+28h] [rbp-48h] BYREF
  char v4; // [rsp+38h] [rbp-38h]
  int v5; // [rsp+3Ch] [rbp-34h]
  _BYTE v6[48]; // [rsp+40h] [rbp-30h] BYREF

  AcquireSpinLock::AcquireSpinLock((AcquireSpinLock *)v6, (unsigned __int64 *)a1 + 252, 1, 0);
  v2 = (struct _KEVENT *)a1;
  v4 = 0;
  v3[1] = v3;
  v5 = 2;
  v3[0] = v3;
  VidSchiProcessCrossAdapterSignaledSyncObjects((HwQueueStagingList *)&v2, (__int64)a1);
  HwQueueStagingList::~HwQueueStagingList(&v2);
  AcquireSpinLock::Release((AcquireSpinLock *)v6);
}
