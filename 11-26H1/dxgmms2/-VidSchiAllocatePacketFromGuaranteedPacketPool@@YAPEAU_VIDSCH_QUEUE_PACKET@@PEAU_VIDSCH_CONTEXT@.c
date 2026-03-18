/*
 * XREFs of ?VidSchiAllocatePacketFromGuaranteedPacketPool@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU_VIDSCH_CONTEXT@@@Z @ 0x14002CDA8
 * Callers:
 *     ?VidSchiEnqueueDeviceCommandToWorkerThreadAtDpc@@YAXPEBXW4_VIDSCH_DEVICE_COMMAND_TYPE@@@Z @ 0x14002C5D8 (-VidSchiEnqueueDeviceCommandToWorkerThreadAtDpc@@YAXPEBXW4_VIDSCH_DEVICE_COMMAND_TYPE@@@Z.c)
 * Callees:
 *     VidSchiInterlockedRemoveHeadListIfExist @ 0x140026470 (VidSchiInterlockedRemoveHeadListIfExist.c)
 *     VidSchiInterlockedInsertTailList @ 0x14002E870 (VidSchiInterlockedInsertTailList.c)
 *     memset @ 0x14005BBC0 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
struct _VIDSCH_QUEUE_PACKET *__fastcall VidSchiAllocatePacketFromGuaranteedPacketPool(struct _VIDSCH_CONTEXT *a1)
{
  unsigned int v1; // ebp
  __int64 v3; // rbx
  __int64 v4; // r14
  _QWORD *v5; // rax
  _QWORD *v6; // rsi
  _QWORD *v7; // rbx

  v1 = 1136;
  v3 = *(_QWORD *)(*((_QWORD *)a1 + 12) + 24LL);
  v4 = v3 + 2024;
  if ( (unsigned int)(*(_DWORD *)(v3 + 160) * (72 * *(_DWORD *)(v3 + 84) + 224) + 8 * (*(_DWORD *)(v3 + 84) + 113)) > 0x470 )
    v1 = *(_DWORD *)(v3 + 160) * (72 * *(_DWORD *)(v3 + 84) + 224) + 8 * (*(_DWORD *)(v3 + 84) + 113);
  v5 = VidSchiInterlockedRemoveHeadListIfExist((KSPIN_LOCK *)(v3 + 2024), (_QWORD **)a1 + 93, (_DWORD *)a1 + 190);
  v6 = v5;
  if ( !v5 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 3584LL, v3, a1, (char *)a1 + 784);
    WdLogGlobalForLineNumber = 916;
    JUMPOUT(0x14002CEC3LL);
  }
  v7 = v5 - 1;
  if ( v5 != (_QWORD *)8 )
  {
    memset(v5 - 1, 0, v1);
    *((_DWORD *)v7 + 16) |= 0x40u;
    v7[7] = MEMORY[0xFFFFF78000000320];
    *((_DWORD *)v7 + 13) = 1;
    VidSchiInterlockedInsertTailList(v4, (char *)a1 + 768, v6, (char *)a1 + 784);
  }
  return (struct _VIDSCH_QUEUE_PACKET *)v7;
}
