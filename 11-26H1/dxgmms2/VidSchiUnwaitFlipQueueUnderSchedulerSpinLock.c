/*
 * XREFs of VidSchiUnwaitFlipQueueUnderSchedulerSpinLock @ 0x1400073C8
 * Callers:
 *     ?ResumeFlipQueuesIfSuspendedForMove@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400D1870 (-ResumeFlipQueuesIfSuspendedForMove@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     VidSchiResumeFlipQueues @ 0x14011659C (VidSchiResumeFlipQueues.c)
 * Callees:
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x140007A40 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x140007FB0 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x14000F3B0 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     VidSchUnwaitFlipQueue @ 0x140012CE0 (VidSchUnwaitFlipQueue.c)
 */

void __fastcall VidSchiUnwaitFlipQueueUnderSchedulerSpinLock(__int64 a1)
{
  __int64 v2; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v3[2]; // [rsp+28h] [rbp-48h] BYREF
  char v4; // [rsp+38h] [rbp-38h]
  int v5; // [rsp+3Ch] [rbp-34h]
  _QWORD v6[4]; // [rsp+40h] [rbp-30h] BYREF
  __int16 v7; // [rsp+60h] [rbp-10h]

  v7 = 0;
  v6[0] = a1 + 2016;
  AcquireSpinLock::Acquire((AcquireSpinLock *)v6);
  v2 = a1;
  v4 = 0;
  v3[1] = v3;
  v5 = 2;
  v3[0] = v3;
  VidSchUnwaitFlipQueue(&v2, a1);
  HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)&v2);
  AcquireSpinLock::Release((AcquireSpinLock *)v6);
}
