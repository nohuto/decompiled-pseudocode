/*
 * XREFs of GetRegistryDwordValue @ 0x1400288D0
 * Callers:
 *     GetRegistryQwordValue @ 0x14002CC24 (GetRegistryQwordValue.c)
 *     InitCpcStatesInternal @ 0x140036530 (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x140037C40 (InitPerfFeedbackInternal.c)
 *     InitPerfStatesInternal @ 0x140037F74 (InitPerfStatesInternal.c)
 *     ProcLibTraceSummary2 @ 0x140043EAC (ProcLibTraceSummary2.c)
 *     InitDriver @ 0x14004A03C (InitDriver.c)
 *     ProcLibGlobalInit @ 0x14004B8C0 (ProcLibGlobalInit.c)
 * Callees:
 *     GetRegistryDwordValueNoDefault @ 0x14004841C (GetRegistryDwordValueNoDefault.c)
 */

__int64 __fastcall GetRegistryDwordValue(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 result; // rax

  result = GetRegistryDwordValueNoDefault();
  if ( (int)result < 0 )
    *a3 = 0;
  return result;
}
