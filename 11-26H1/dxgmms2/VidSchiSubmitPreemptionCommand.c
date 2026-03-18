/*
 * XREFs of VidSchiSubmitPreemptionCommand @ 0x1400EAA60
 * Callers:
 *     VidSchiScheduleCommandToRun @ 0x140021700 (VidSchiScheduleCommandToRun.c)
 *     VidSchiSwitchFromSuspendedDevices @ 0x14003C870 (VidSchiSwitchFromSuspendedDevices.c)
 *     VidSchiResetEngine @ 0x1400454F8 (VidSchiResetEngine.c)
 *     VidSchiPreemptEngineNodes @ 0x1400C070C (VidSchiPreemptEngineNodes.c)
 *     VidSchiCheckHwProgress @ 0x1400C4FC0 (VidSchiCheckHwProgress.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     VidSchiAllocateDmaPacket @ 0x1400E9AF0 (VidSchiAllocateDmaPacket.c)
 *     VidSchiSendToExecutionQueueWithWait @ 0x1400EA9F0 (VidSchiSendToExecutionQueueWithWait.c)
 */

void __fastcall VidSchiSubmitPreemptionCommand(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rbp
  __int64 v4; // rbx
  _QWORD *DmaPacket; // r14
  void (__fastcall *v6)(_QWORD); // rax

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)(a1 + 24);
  v4 = *(_QWORD *)(v1 + 104);
  DmaPacket = VidSchiAllocateDmaPacket(a1);
  *(_DWORD *)DmaPacket = 912353622;
  DmaPacket[6] = v1;
  DmaPacket[10] = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)DmaPacket + 18) = 7;
  DmaPacket[11] = 3LL;
  _InterlockedIncrement((volatile signed __int32 *)(v3 + 788));
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 3012));
  _InterlockedIncrement((volatile signed __int32 *)(v4 + 1844));
  _InterlockedIncrement((volatile signed __int32 *)(v1 + 792));
  *(_BYTE *)(v3 + 62) = 1;
  if ( *(_DWORD *)(a1 + 16520) != -1 )
  {
    v6 = *(void (__fastcall **)(_QWORD))(v3 + 3304);
    if ( v6 )
      v6(*(_QWORD *)(v3 + 3368));
  }
  *(_BYTE *)(v3 + 62) = 0;
  *((_DWORD *)DmaPacket + 23) |= 0x400u;
  VidSchiSendToExecutionQueueWithWait((__int64)DmaPacket, 0);
}
