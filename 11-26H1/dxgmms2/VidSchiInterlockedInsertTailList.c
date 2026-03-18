/*
 * XREFs of VidSchiInterlockedInsertTailList @ 0x14002E870
 * Callers:
 *     ?VidSchiAllocatePacketFromGuaranteedPacketPool@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU_VIDSCH_CONTEXT@@@Z @ 0x14002CDA8 (-VidSchiAllocatePacketFromGuaranteedPacketPool@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU_VIDSCH_CONTEXT@.c)
 *     VidSchiCreateContextInternal @ 0x14002D178 (VidSchiCreateContextInternal.c)
 *     VidSchCreateHwQueue @ 0x14004A8B0 (VidSchCreateHwQueue.c)
 *     VidSchiCreateNode @ 0x1400C3B00 (VidSchiCreateNode.c)
 *     VidSchRegisterCompletionEvent @ 0x1400EA5D8 (VidSchRegisterCompletionEvent.c)
 *     VidSchiCreateDeviceInternal @ 0x1400FC6AC (VidSchiCreateDeviceInternal.c)
 *     VidSchiAllocateQueuePacket @ 0x140108F9C (VidSchiAllocateQueuePacket.c)
 *     VidSchiAllocateHwQueuePacket @ 0x140109138 (VidSchiAllocateHwQueuePacket.c)
 *     VidSchSubmitPagingCommand @ 0x1401092D8 (VidSchSubmitPagingCommand.c)
 *     VidSchSubmitCommand @ 0x14010A830 (VidSchSubmitCommand.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiInterlockedInsertTailList(KSPIN_LOCK *a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  _QWORD *v7; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(a1, &LockHandle);
  v7 = *(_QWORD **)(a2 + 8);
  if ( *v7 != a2 )
    __fastfail(3u);
  *a3 = a2;
  a3[1] = v7;
  *v7 = a3;
  *(_QWORD *)(a2 + 8) = a3;
  if ( a4 )
    ++*a4;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
