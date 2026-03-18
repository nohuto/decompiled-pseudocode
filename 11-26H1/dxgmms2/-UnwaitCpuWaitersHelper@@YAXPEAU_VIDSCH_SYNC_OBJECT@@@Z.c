/*
 * XREFs of ?UnwaitCpuWaitersHelper@@YAXPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x14003AB8C
 * Callers:
 *     VidSchDestroySyncObject @ 0x1400E15C0 (VidSchDestroySyncObject.c)
 * Callees:
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x140007A40 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x140007FB0 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x14000F3B0 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     VidSchiRundownMonitoredFenceCpuWaiters @ 0x14003AD38 (VidSchiRundownMonitoredFenceCpuWaiters.c)
 */

void __fastcall UnwaitCpuWaitersHelper(struct _VIDSCH_SYNC_OBJECT *a1)
{
  struct _KEVENT *v1; // rbx
  struct _KEVENT *v3; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v4[2]; // [rsp+28h] [rbp-48h] BYREF
  char v5; // [rsp+38h] [rbp-38h]
  int v6; // [rsp+3Ch] [rbp-34h]
  _QWORD v7[4]; // [rsp+40h] [rbp-30h] BYREF
  __int16 v8; // [rsp+60h] [rbp-10h]

  v1 = (struct _KEVENT *)*((_QWORD *)a1 + 1);
  v8 = 0;
  v7[0] = v1 + 84;
  AcquireSpinLock::Acquire((Acquire *)v7);
  v3 = v1;
  v5 = 0;
  v4[1] = v4;
  v6 = 2;
  v4[0] = v4;
  VidSchiRundownMonitoredFenceCpuWaiters(&v3, a1, 0LL);
  HwQueueStagingList::~HwQueueStagingList(&v3);
  AcquireSpinLock::Release((AcquireSpinLock *)v7);
}
