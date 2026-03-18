/*
 * XREFs of VidSchiAllocateQueuePacket @ 0x140108F9C
 * Callers:
 *     VidSchSignalSyncObjectsFromGpu @ 0x14000F5A0 (VidSchSignalSyncObjectsFromGpu.c)
 *     VidSchWaitForSingleSyncObject @ 0x14002D9C0 (VidSchWaitForSingleSyncObject.c)
 *     VidSchSubmitGlobalCommand @ 0x140108A8C (VidSchSubmitGlobalCommand.c)
 *     VidSchEnqueueCpuEvent @ 0x140108B90 (VidSchEnqueueCpuEvent.c)
 * Callees:
 *     VidSchiInterlockedRemoveHeadListIfExist @ 0x140026470 (VidSchiInterlockedRemoveHeadListIfExist.c)
 *     VidSchiInterlockedInsertTailList @ 0x14002E870 (VidSchiInterlockedInsertTailList.c)
 *     VidSchiInterlockedRemoveEntryList @ 0x140035C50 (VidSchiInterlockedRemoveEntryList.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     VidSchWaitForCompletionEvent @ 0x1400EA1E8 (VidSchWaitForCompletionEvent.c)
 *     VidSchRegisterCompletionEvent @ 0x1400EA5D8 (VidSchRegisterCompletionEvent.c)
 */

__int64 __fastcall VidSchiAllocateQueuePacket(__int64 a1, int a2)
{
  _DWORD *v2; // r12
  _QWORD **v3; // r13
  unsigned int v4; // ebx
  __int64 v7; // rdi
  _QWORD *v8; // rax
  size_t v9; // r14
  __int64 Pool2; // rbx
  __int64 v12; // rcx
  _QWORD *v13; // rax
  _QWORD v14[20]; // [rsp+20h] [rbp-C8h] BYREF

  v2 = (_DWORD *)(a1 + 736);
  v3 = (_QWORD **)(a1 + 720);
  v4 = 1136;
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL);
  if ( (unsigned int)(*(_DWORD *)(v7 + 160) * (72 * *(_DWORD *)(v7 + 84) + 224) + 8 * (*(_DWORD *)(v7 + 84) + 113)) > 0x470 )
    v4 = *(_DWORD *)(v7 + 160) * (72 * *(_DWORD *)(v7 + 84) + 224) + 8 * (*(_DWORD *)(v7 + 84) + 113);
  v8 = VidSchiInterlockedRemoveHeadListIfExist((KSPIN_LOCK *)(v7 + 2024), (_QWORD **)(a1 + 720), v2);
  v9 = v4;
  if ( !v8 )
  {
    Pool2 = ExAllocatePool2(64LL, v4, 895576406LL);
    if ( Pool2 )
      goto LABEL_6;
    if ( !a2 )
      return Pool2;
    memset(v14, 0, sizeof(v14));
    v12 = *(_QWORD *)(a1 + 96);
    LODWORD(v14[4]) |= 0x40u;
    LODWORD(v14[2]) = 1;
    LODWORD(v14[6]) = *(unsigned __int16 *)(v12 + 4);
    VidSchRegisterCompletionEvent(v7, (__int64)v14);
    do
    {
      v13 = VidSchiInterlockedRemoveHeadListIfExist((KSPIN_LOCK *)(v7 + 2024), v3, v2);
      if ( v13 )
        Pool2 = (__int64)(v13 - 1);
      else
        VidSchWaitForCompletionEvent(v7, (__int64)v14, 19LL);
    }
    while ( !Pool2 );
    VidSchiInterlockedRemoveEntryList((KSPIN_LOCK *)(v7 + 2032), v14, 0LL);
LABEL_5:
    memset((void *)Pool2, 0, v9);
LABEL_6:
    *(_QWORD *)(Pool2 + 56) = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(Pool2 + 52) = 1;
    VidSchiInterlockedInsertTailList((KSPIN_LOCK *)(v7 + 2024), a1 + 768, (_QWORD *)(Pool2 + 8), (_DWORD *)(a1 + 784));
    return Pool2;
  }
  Pool2 = (__int64)(v8 - 1);
  if ( v8 != (_QWORD *)8 )
    goto LABEL_5;
  return Pool2;
}
