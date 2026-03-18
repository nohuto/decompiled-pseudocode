/*
 * XREFs of ?VidSchiEnqueueDeviceCommandToWorkerThreadAtDpc@@YAXPEBXW4_VIDSCH_DEVICE_COMMAND_TYPE@@@Z @ 0x14002C5D8
 * Callers:
 *     ?VidSchiExecuteMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@AEAU_VIDSCH_CALL_EXECUTE_FLIP@@PEAW4_VIDSCH_FLIP_STATUS@@K@Z @ 0x140017FD0 (-VidSchiExecuteMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@AEAU_V.c)
 * Callees:
 *     VidSchiInsertCommandToSoftwareQueue @ 0x140020A30 (VidSchiInsertCommandToSoftwareQueue.c)
 *     ?VidSchiAllocatePacketFromGuaranteedPacketPool@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU_VIDSCH_CONTEXT@@@Z @ 0x14002CDA8 (-VidSchiAllocatePacketFromGuaranteedPacketPool@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU_VIDSCH_CONTEXT@.c)
 *     memset @ 0x14005BBC0 (memset.c)
 */

LONG __fastcall VidSchiEnqueueDeviceCommandToWorkerThreadAtDpc(__int128 *a1, LONG a2)
{
  __int128 v3; // xmm0
  struct _KEVENT *v4; // rdi
  __int128 v5; // xmm0
  struct _LIST_ENTRY *Flink; // rbx
  struct _VIDSCH_QUEUE_PACKET *PacketFromGuaranteedPacketPool; // rax
  __int128 v8; // xmm0
  __int64 v9; // r8
  __int128 v10; // xmm1
  LONG result; // eax
  __int128 v12; // xmm0
  __int128 v13; // [rsp+20h] [rbp-78h]
  __int128 v14; // [rsp+30h] [rbp-68h]
  _OWORD v15[5]; // [rsp+40h] [rbp-58h] BYREF
  LONG v16; // [rsp+A8h] [rbp+10h] BYREF

  v16 = a2;
  memset(v15, 0, sizeof(v15));
  v3 = *a1;
  v4 = *(struct _KEVENT **)a1;
  *((_QWORD *)&v15[1] + 1) = VidSchiExecuteMmIoFlipAtPassiveLevel;
  v13 = v3;
  DWORD2(v15[2]) = 5;
  v5 = a1[1];
  Flink = v4[11].Header.WaitListHead.Flink;
  v14 = v5;
  PacketFromGuaranteedPacketPool = VidSchiAllocatePacketFromGuaranteedPacketPool((struct _VIDSCH_CONTEXT *)Flink);
  v8 = v15[0];
  v9 = (__int64)PacketFromGuaranteedPacketPool;
  v10 = v15[1];
  *(_DWORD *)PacketFromGuaranteedPacketPool = 895576406;
  *((_DWORD *)PacketFromGuaranteedPacketPool + 12) = 6;
  *((_QWORD *)PacketFromGuaranteedPacketPool + 7) = MEMORY[0xFFFFF78000000320];
  result = 0;
  *(_DWORD *)(v9 + 52) = 2;
  *(_QWORD *)(v9 + 88) = Flink;
  *(_QWORD *)(v9 + 104) = KeGetCurrentThread();
  v16 = 0;
  *(_OWORD *)(v9 + 280) = v8;
  v12 = v15[2];
  *(_OWORD *)(v9 + 296) = v10;
  *(_OWORD *)(v9 + 312) = v12;
  *(_OWORD *)(v9 + 328) = v13;
  *(_OWORD *)(v9 + 344) = v14;
  if ( v9 )
  {
    VidSchiInsertCommandToSoftwareQueue(v9, &v16);
    result = v16;
  }
  ++LODWORD(Flink[51].Flink);
  if ( result )
  {
    v4[62].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000320];
    return KeSetEvent(v4 + 61, 0, 0);
  }
  return result;
}
