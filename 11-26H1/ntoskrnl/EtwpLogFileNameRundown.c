/*
 * XREFs of EtwpLogFileNameRundown @ 0x14082F4D4
 * Callers:
 *     EtwpEnableDisableSpecialGuids @ 0x140A6D54C (EtwpEnableDisableSpecialGuids.c)
 * Callees:
 *     EtwpCheckGuidAccess @ 0x1409207F8 (EtwpCheckGuidAccess.c)
 *     WmiTraceRundownNotify @ 0x140B0B964 (WmiTraceRundownNotify.c)
 */

__int64 __fastcall EtwpLogFileNameRundown(_QWORD *a1, unsigned int a2)
{
  __int64 result; // rax

  result = EtwpCheckGuidAccess(&FileProvGuid, 128LL, 0LL);
  if ( (int)result >= 0 )
  {
    result = WmiTraceRundownNotify(*a1, a2);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
