/*
 * XREFs of VidSchiAllocateHwQueuePacket @ 0x140109138
 * Callers:
 *     VidSchSubmitSignalToHwQueue @ 0x140008000 (VidSchSubmitSignalToHwQueue.c)
 *     VidSchSubmitWaitToHwQueue @ 0x1400090D0 (VidSchSubmitWaitToHwQueue.c)
 *     VidSchSubmitCommandToHwQueue @ 0x14000AED0 (VidSchSubmitCommandToHwQueue.c)
 *     VidSchSignalSyncObjectsFromGpu @ 0x14000F5A0 (VidSchSignalSyncObjectsFromGpu.c)
 *     VidSchEnqueueCpuEvent @ 0x140108B90 (VidSchEnqueueCpuEvent.c)
 *     VidSchiSubmitHwPagingCommand @ 0x1401095AC (VidSchiSubmitHwPagingCommand.c)
 * Callees:
 *     VidSchiInterlockedRemoveHeadListIfExist @ 0x140026470 (VidSchiInterlockedRemoveHeadListIfExist.c)
 *     VidSchiInterlockedInsertTailList @ 0x14002E870 (VidSchiInterlockedInsertTailList.c)
 *     VidSchiInterlockedRemoveEntryList @ 0x140035C50 (VidSchiInterlockedRemoveEntryList.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     VidSchWaitForCompletionEvent @ 0x1400EA1E8 (VidSchWaitForCompletionEvent.c)
 *     VidSchRegisterCompletionEvent @ 0x1400EA5D8 (VidSchRegisterCompletionEvent.c)
 */

__int64 __fastcall VidSchiAllocateHwQueuePacket(__int64 a1, char a2)
{
  _DWORD *v2; // r12
  unsigned int v3; // ebx
  __int64 v6; // r13
  __int64 v7; // rdi
  _QWORD *v8; // rax
  size_t v9; // r14
  __int64 Pool2; // rbx
  int v12; // ecx
  _QWORD *v13; // rax
  _QWORD v14[20]; // [rsp+20h] [rbp-C8h] BYREF

  v2 = (_DWORD *)(a1 + 232);
  v3 = 1136;
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 16LL);
  v7 = *(_QWORD *)(v6 + 24);
  if ( (unsigned int)(*(_DWORD *)(v7 + 160) * (72 * *(_DWORD *)(v7 + 84) + 224) + 8 * (*(_DWORD *)(v7 + 84) + 113)) > 0x470 )
    v3 = *(_DWORD *)(v7 + 160) * (72 * *(_DWORD *)(v7 + 84) + 224) + 8 * (*(_DWORD *)(v7 + 84) + 113);
  v8 = VidSchiInterlockedRemoveHeadListIfExist((KSPIN_LOCK *)(v7 + 2024), (_QWORD **)(a1 + 216), v2);
  v9 = v3;
  if ( !v8 )
  {
    Pool2 = ExAllocatePool2(64LL, v3, 895576406LL);
    if ( Pool2 )
      goto LABEL_6;
    if ( !a2 )
      return Pool2;
    memset(v14, 0, sizeof(v14));
    v12 = *(unsigned __int16 *)(v6 + 4);
    LODWORD(v14[4]) |= 0x40u;
    LODWORD(v14[6]) = v12;
    LODWORD(v14[2]) = 1;
    VidSchRegisterCompletionEvent(v7, (__int64)v14);
    do
    {
      v13 = VidSchiInterlockedRemoveHeadListIfExist((KSPIN_LOCK *)(v7 + 2024), (_QWORD **)(a1 + 216), v2);
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
    VidSchiInterlockedInsertTailList((KSPIN_LOCK *)(v7 + 2024), a1 + 240, (_QWORD *)(Pool2 + 8), (_DWORD *)(a1 + 256));
    return Pool2;
  }
  Pool2 = (__int64)(v8 - 1);
  if ( v8 != (_QWORD *)8 )
    goto LABEL_5;
  return Pool2;
}
