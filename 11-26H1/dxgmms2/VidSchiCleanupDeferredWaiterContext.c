/*
 * XREFs of VidSchiCleanupDeferredWaiterContext @ 0x1400064D8
 * Callers:
 *     VidSchFlushContext @ 0x140116BF0 (VidSchFlushContext.c)
 * Callees:
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x140007A40 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x140007FB0 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x14000F3B0 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     VidSchiUnwaitWaitQueuePacket @ 0x14002CECC (VidSchiUnwaitWaitQueuePacket.c)
 *     VidSchiUnblockUnorderedWaitQueuePacket @ 0x14003C738 (VidSchiUnblockUnorderedWaitQueuePacket.c)
 */

void __fastcall VidSchiCleanupDeferredWaiterContext(__int64 a1)
{
  __int64 v2; // rbx
  _QWORD **v3; // rdi
  _QWORD *v4; // rbx
  int v5; // eax
  __int64 v6; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v7[2]; // [rsp+28h] [rbp-48h] BYREF
  char v8; // [rsp+38h] [rbp-38h]
  int v9; // [rsp+3Ch] [rbp-34h]
  _QWORD v10[4]; // [rsp+40h] [rbp-30h] BYREF
  __int16 v11; // [rsp+60h] [rbp-10h]

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 104) + 40LL);
  v11 = 0;
  v10[0] = v2 + 2016;
  AcquireSpinLock::Acquire((AcquireSpinLock *)v10);
  v6 = v2;
  v8 = 0;
  v3 = (_QWORD **)(a1 + 704);
  v7[1] = v7;
  v9 = 2;
  v7[0] = v7;
  v4 = *v3;
  while ( v4 != v3 )
  {
    v5 = *((_DWORD *)v4 + 62);
    v4 = (_QWORD *)*v4;
    if ( (v5 & 4) != 0 )
      VidSchiUnblockUnorderedWaitQueuePacket((HwQueueStagingList *)&v6);
    else
      VidSchiUnwaitWaitQueuePacket((HwQueueStagingList *)&v6);
  }
  HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)&v6);
  AcquireSpinLock::Release((AcquireSpinLock *)v10);
}
