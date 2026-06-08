/*
 * XREFs of WPP_RECORDER_SF_d @ 0x14000554C
 * Callers:
 *     AcpiEval_PSS @ 0x14002F000 (AcpiEval_PSS.c)
 *     AcpiEval_TSS @ 0x14002F3A8 (AcpiEval_TSS.c)
 *     AcpiEval_XPSS @ 0x14002F6B0 (AcpiEval_XPSS.c)
 *     DisplayCpcResourcePriorityRegisterDescriptor @ 0x140031228 (DisplayCpcResourcePriorityRegisterDescriptor.c)
 *     Display_CPC @ 0x140031398 (Display_CPC.c)
 *     Display_LPI @ 0x1400315DC (Display_LPI.c)
 *     ProcLibDeviceStart @ 0x140032614 (ProcLibDeviceStart.c)
 *     ValidateCoordinatedState @ 0x140034BC4 (ValidateCoordinatedState.c)
 *     PepNotifyQueryProcessorIdleStatesV2 @ 0x14003A730 (PepNotifyQueryProcessorIdleStatesV2.c)
 *     HwDebugInitializeRegistryDebugParameter @ 0x14003B4AC (HwDebugInitializeRegistryDebugParameter.c)
 *     HwDebugInitializeRegistryDebugRegister @ 0x14003B890 (HwDebugInitializeRegistryDebugRegister.c)
 *     InitPepPerfStates @ 0x14003C778 (InitPepPerfStates.c)
 *     PepQueryPerfDomainInfo @ 0x14003D168 (PepQueryPerfDomainInfo.c)
 *     AcpiEval_CSD @ 0x1400405BC (AcpiEval_CSD.c)
 *     AcpiEval_CST @ 0x1400409C0 (AcpiEval_CST.c)
 *     ValidatePlatformIdleState @ 0x1400437F8 (ValidatePlatformIdleState.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140010390 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_SF_d(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned __int16 a4, __int64 a5, ...)
{
  unsigned __int64 v7; // rbx
  unsigned int v9; // edi
  int v10; // eax
  int v12; // [rsp+20h] [rbp-28h]
  va_list va; // [rsp+78h] [rbp+30h] BYREF

  va_start(va, a5);
  v7 = (unsigned __int64)a3 >> 16;
  v9 = a2;
  v10 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v7 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v10, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v7 + 1) >= a2 )
    pfnWppTraceMessage(*((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v7), 43LL, a5, a4, va, 4LL, 0LL);
  LOWORD(v12) = a4;
  return WppAutoLogTrace(a1, v9, a3, a5, v12, va, 4LL, 0LL);
}
