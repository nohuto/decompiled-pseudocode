/*
 * XREFs of MmCanThreadFault @ 0x1402623C0
 * Callers:
 *     EtwpStackTraceDispatcher @ 0x14020A480 (EtwpStackTraceDispatcher.c)
 *     EtwpEventWriteFull @ 0x14021344C (EtwpEventWriteFull.c)
 *     EtwpCovSampSafeForUserAddressCapture @ 0x140260BD8 (EtwpCovSampSafeForUserAddressCapture.c)
 *     EtwpCovSampCaptureApc @ 0x140260C70 (EtwpCovSampCaptureApc.c)
 *     RtlWalkFrameChain @ 0x1402622E0 (RtlWalkFrameChain.c)
 *     ObpPushStackInfo @ 0x140264F60 (ObpPushStackInfo.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x140473EA4 (EtwpGetStackExtendedHeaderItem.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140263850 (KeAreInterruptsEnabled.c)
 */

_BOOL8 __fastcall MmCanThreadFault(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rcx

  if ( !(unsigned __int8)KeAreInterruptsEnabled(a1, a2, a3) )
    return 0LL;
  if ( KeGetCurrentIrql() >= 2u )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  return (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 2) == 0
      && (void (__fastcall __noreturn *)())CurrentThread[1].ApcState.ApcListHead[0].Blink != KiExecuteDpc
      && KiProcessorBlock[0]
      && *(_QWORD *)(KiProcessorBlock[0] + 34872) != 0LL;
}
