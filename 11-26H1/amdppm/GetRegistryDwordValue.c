/*
 * XREFs of GetRegistryDwordValue @ 0x1400243B4
 * Callers:
 *     InitDriver @ 0x140023F88 (InitDriver.c)
 *     GetRegistryQwordValue @ 0x140024460 (GetRegistryQwordValue.c)
 *     InitCpcStatesInternal @ 0x140032B70 (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x140034294 (InitPerfFeedbackInternal.c)
 *     InitPerfStatesInternal @ 0x1400345C8 (InitPerfStatesInternal.c)
 *     ProcLibTraceSummary2 @ 0x14003F9E0 (ProcLibTraceSummary2.c)
 *     ProcLibGlobalInit @ 0x140045428 (ProcLibGlobalInit.c)
 * Callees:
 *     GetRegistryDwordValueNoDefault @ 0x1400243DC (GetRegistryDwordValueNoDefault.c)
 */

__int64 __fastcall GetRegistryDwordValue(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 result; // rax

  result = GetRegistryDwordValueNoDefault();
  if ( (int)result < 0 )
    *a3 = 0;
  return result;
}
