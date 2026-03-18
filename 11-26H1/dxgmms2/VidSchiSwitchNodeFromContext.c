/*
 * XREFs of VidSchiSwitchNodeFromContext @ 0x1400EBAC0
 * Callers:
 *     ?VidSchiSwitchNodeFromDevice@@YAXPEAX@Z @ 0x1400269F0 (-VidSchiSwitchNodeFromDevice@@YAXPEAX@Z.c)
 *     VidSchiSwitchFromSuspendedDevices @ 0x14003C870 (VidSchiSwitchFromSuspendedDevices.c)
 * Callees:
 *     VidSchWaitForEvents @ 0x14002FB1C (VidSchWaitForEvents.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     VidSchiAllocateDmaPacket @ 0x1400E9AF0 (VidSchiAllocateDmaPacket.c)
 *     VidSchiSendToExecutionQueueWithWait @ 0x1400EA9F0 (VidSchiSendToExecutionQueueWithWait.c)
 */

__int64 __fastcall VidSchiSwitchNodeFromContext(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rsi
  __int64 v3; // rdi
  _QWORD *DmaPacket; // rbx
  __int64 v5; // rax
  __int64 *v6; // rcx
  __int64 v7; // rax
  void (__fastcall *v8)(_QWORD); // rax
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF
  struct _KEVENT *p_Event; // [rsp+60h] [rbp+8h] BYREF

  result = *(_QWORD *)(a1 + 96);
  if ( a1 == *(_QWORD *)(result + 224) )
  {
    result = *(unsigned int *)(result + 3016);
    if ( !(_DWORD)result )
    {
      v2 = *(_QWORD *)(a1 + 96);
      v3 = *(_QWORD *)(*(_QWORD *)(a1 + 104) + 40LL);
      DmaPacket = VidSchiAllocateDmaPacket(v2);
      *(_DWORD *)DmaPacket = 912353622;
      *((_DWORD *)DmaPacket + 22) = 0;
      DmaPacket[10] = MEMORY[0xFFFFF78000000320];
      *((_DWORD *)DmaPacket + 18) = 7;
      DmaPacket[6] = *(_QWORD *)(v2 + 32);
      v5 = *(unsigned __int16 *)(v2 + 4);
      v6 = *(__int64 **)(v3 + 696);
      if ( (unsigned int)v5 < *(_DWORD *)(v3 + 768) )
        v6 += v5;
      v7 = *v6;
      DmaPacket[13] = ++*(_QWORD *)(v7 + 48);
      memset(&Event, 0, sizeof(Event));
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      *((_DWORD *)DmaPacket + 23) |= 0x1000u;
      DmaPacket[25] = &Event;
      *(_BYTE *)(v3 + 62) = 1;
      if ( *(_DWORD *)(v2 + 16520) != -1 )
      {
        v8 = *(void (__fastcall **)(_QWORD))(v3 + 3304);
        if ( v8 )
          v8(*(_QWORD *)(v3 + 3368));
      }
      *(_BYTE *)(v3 + 62) = 0;
      *((_DWORD *)DmaPacket + 23) |= 0x400u;
      VidSchiSendToExecutionQueueWithWait((__int64)DmaPacket, 0);
      p_Event = &Event;
      return VidSchWaitForEvents(v3, 1u, (PVOID *)&p_Event, 0LL, 0);
    }
  }
  return result;
}
