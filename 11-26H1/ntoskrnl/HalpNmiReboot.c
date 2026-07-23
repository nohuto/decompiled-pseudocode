/*
 * XREFs of HalpNmiReboot @ 0x140596590
 * Callers:
 *     HalpReboot @ 0x140581E74 (HalpReboot.c)
 * Callees:
 *     ?RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140253210 (-RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KeStallExecutionProcessor @ 0x14037DCA0 (KeStallExecutionProcessor.c)
 *     KeRemoveProcessorAffinityEx @ 0x140453E40 (KeRemoveProcessorAffinityEx.c)
 *     HalpIsHvPresent @ 0x1404B2B68 (HalpIsHvPresent.c)
 *     HalSendNMI @ 0x140581470 (HalSendNMI.c)
 *     HalpInterruptRebootService @ 0x140596BB0 (HalpInterruptRebootService.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 HalpNmiReboot()
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 result; // rax
  int v2; // edi
  struct _KAFFINITY_EX v3; // [rsp+20h] [rbp-128h] BYREF

  memset_0(&v3.8, 0, sizeof(v3.8));
  CurrentPrcb = KeGetCurrentPrcb();
  result = CurrentPrcb->CpuStep & 0xFF00;
  if ( ((unsigned int)result | ((unsigned __int8)CurrentPrcb->CpuType << 16)) > 0x50100 )
  {
    v2 = HalpInterruptProcessorsStarted;
    *(_QWORD *)&v3.Count = 2097153LL;
    HalpInterruptNmiRebootInProgress = 1;
    memset_0(&v3.8, 0, sizeof(v3.8));
    RtlpCopyAffinityEx(&v3, 0x20u, (struct _KAFFINITY_EX *)&stru_140FC11F0.WaitRegister);
    KeRemoveProcessorAffinityEx(&v3.Count, CurrentPrcb->Number);
    HalSendNMI((__int64)&v3);
    KeStallExecutionProcessor(0x1F4u);
    if ( HalpIsHvPresent() )
    {
      while ( HalpInterruptProcessorsStarted > 1 )
        _mm_pause();
    }
    result = (unsigned int)HalpInterruptProcessorsStarted;
    if ( HalpInterruptProcessorsStarted != v2 )
      HalpInterruptRebootService(0LL, 0LL);
  }
  return result;
}
