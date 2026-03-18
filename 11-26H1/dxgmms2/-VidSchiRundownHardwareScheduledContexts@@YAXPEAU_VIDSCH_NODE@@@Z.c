/*
 * XREFs of ?VidSchiRundownHardwareScheduledContexts@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x14004B298
 * Callers:
 *     VidSchiCompleteAllPendingCommand @ 0x140058F78 (VidSchiCompleteAllPendingCommand.c)
 * Callees:
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x140007A40 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x140007FB0 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x14000F3B0 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     ?VidSchiRundownHardwareContext@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_CONTEXT@@@Z @ 0x140041574 (-VidSchiRundownHardwareContext@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_CONTEXT@@@Z.c)
 */

void __fastcall VidSchiRundownHardwareScheduledContexts(struct _VIDSCH_NODE *a1)
{
  struct _KEVENT *v1; // rbx
  _QWORD **v3; // rdi
  _QWORD *i; // rbx
  struct _KEVENT *v5; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v6[2]; // [rsp+28h] [rbp-48h] BYREF
  char v7; // [rsp+38h] [rbp-38h]
  int v8; // [rsp+3Ch] [rbp-34h]
  _QWORD v9[4]; // [rsp+40h] [rbp-30h] BYREF
  __int16 v10; // [rsp+60h] [rbp-10h]

  v1 = (struct _KEVENT *)*((_QWORD *)a1 + 3);
  v10 = 0;
  v9[0] = v1 + 84;
  AcquireSpinLock::Acquire((Acquire *)v9);
  v5 = v1;
  v7 = 0;
  v3 = (_QWORD **)((char *)a1 + 1712);
  v6[1] = v6;
  v8 = 2;
  v6[0] = v6;
  for ( i = *v3; i != v3; i = (_QWORD *)*i )
    VidSchiRundownHardwareContext((struct HwQueueStagingList *)&v5, (struct VIDSCH_HW_CONTEXT *)(i - 35));
  HwQueueStagingList::~HwQueueStagingList(&v5);
  AcquireSpinLock::Release((AcquireSpinLock *)v9);
}
