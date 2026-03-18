/*
 * XREFs of VidSchiProcessMonitoredFenceSignaledDpc @ 0x1400276A8
 * Callers:
 *     VidSchDdiNotifyDpcWorker @ 0x140028DF4 (VidSchDdiNotifyDpcWorker.c)
 * Callees:
 *     ?VidSchiUpdateHwSchRunningTime@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x140008BB0 (-VidSchiUpdateHwSchRunningTime@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x14000F3B0 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     VidSchiUnwaitMonitoredFences @ 0x14001154C (VidSchiUnwaitMonitoredFences.c)
 *     ?VidSchiUnwaitNodeHwQueueProgress@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_NODE@@@Z @ 0x1400277A0 (-VidSchiUnwaitNodeHwQueueProgress@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_NODE@@@Z.c)
 */

void __fastcall VidSchiProcessMonitoredFenceSignaledDpc(PSLIST_ENTRY ListEntry)
{
  struct _SLIST_ENTRY *Next; // rbx
  __int64 v2; // rdi
  struct _KEVENT *v3; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v4[2]; // [rsp+28h] [rbp-48h] BYREF
  char v5; // [rsp+38h] [rbp-38h]
  int v6; // [rsp+3Ch] [rbp-34h]
  __int64 v7; // [rsp+40h] [rbp-30h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-28h] BYREF
  __int16 v9; // [rsp+60h] [rbp-10h]

  Next = ListEntry[2].Next;
  ExpInterlockedPushEntrySList((PSLIST_HEADER)&Next[193], ListEntry);
  v2 = *((_QWORD *)&Next[1].Next + 1);
  v9 = 256;
  v7 = v2 + 2016;
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v2 + 2016), &LockHandle);
  LOBYTE(v9) = 1;
  v3 = (struct _KEVENT *)v2;
  v4[1] = v4;
  v4[0] = v4;
  v5 = 0;
  v6 = 2;
  if ( (*((_DWORD *)&Next->Next + 3) & 2) != 0 )
    VidSchiUnwaitNodeHwQueueProgress((struct HwQueueStagingList *)&v3, (struct _VIDSCH_NODE *)Next);
  VidSchiUnwaitMonitoredFences((HwQueueStagingList *)&v3, v2);
  if ( (*((_DWORD *)&Next->Next + 3) & 2) != 0 )
    VidSchiUpdateHwSchRunningTime((struct _VIDSCH_NODE *)Next);
  HwQueueStagingList::~HwQueueStagingList(&v3);
  if ( (_BYTE)v9 )
  {
    if ( HIBYTE(v9) )
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    else
      KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
