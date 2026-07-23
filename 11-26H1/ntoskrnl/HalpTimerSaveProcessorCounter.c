/*
 * XREFs of HalpTimerSaveProcessorCounter @ 0x140505AA0
 * Callers:
 *     HaliAcpiSleep @ 0x1405A4F20 (HaliAcpiSleep.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpTimerSaveProcessorCounter(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rdx
  __int64 result; // rax

  LODWORD(a3) = KeGetPcr()->Prcb.Number;
  v3 = __rdtsc();
  v4 = (unsigned __int64)HIDWORD(v3) << 32;
  *(_QWORD *)(HalpTimerSavedProcessorCounter + 8 * a3) = v4 | (unsigned int)v3;
  result = qword_140FBB3E8;
  if ( qword_140FBB3E8 )
  {
    if ( !(_DWORD)a3 )
    {
      HalpTimerIsReferenceTimeSaved = 1;
      result = guard_dispatch_icall_no_overrides(&HalpTimerSavedSequenceNumber, v4);
      HalpTimerSavedReferenceTime = result;
    }
  }
  else
  {
    HalpTimerIsReferenceTimeSaved = 0;
    HalpTimerSavedSequenceNumber = 0;
  }
  return result;
}
