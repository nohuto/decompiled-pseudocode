/*
 * XREFs of VidSchResumeSchedulerForSource @ 0x140116580
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiResumeFlipQueues @ 0x14011659C (VidSchiResumeFlipQueues.c)
 */

__int64 __fastcall VidSchResumeSchedulerForSource(__int64 a1, int a2)
{
  __int64 result; // rax

  if ( a2 )
    return VidSchiResumeFlipQueues();
  return result;
}
