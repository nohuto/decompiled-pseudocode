/*
 * XREFs of HalpTimerRestoreProcessorCounter @ 0x140514D2C
 * Callers:
 *     HalpPostSleepMP @ 0x140BECEF0 (HalpPostSleepMP.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

unsigned __int64 __fastcall HalpTimerRestoreProcessorCounter(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax

  LODWORD(a2) = KeGetPcr()->Prcb.Number;
  result = HalpTimerSavedProcessorCounter;
  if ( qword_140FBB048 )
  {
    if ( !(_DWORD)a2 && HalpTimerIsReferenceTimeSaved )
    {
      result = qword_140FBB230;
      if ( qword_140FBB230 )
        return guard_dispatch_icall_no_overrides(
                 (unsigned int)HalpTimerSavedSequenceNumber,
                 HalpTimerSavedReferenceTime);
    }
  }
  else
  {
    result = *(_QWORD *)(HalpTimerSavedProcessorCounter + 8 * a2);
    __writemsr(0x10u, result);
  }
  return result;
}
