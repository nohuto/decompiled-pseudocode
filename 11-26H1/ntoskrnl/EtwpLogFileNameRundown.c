/*
 * XREFs of EtwpLogFileNameRundown @ 0x140835714
 * Callers:
 *     EtwpEnableDisableSpecialGuids @ 0x140A99808 (EtwpEnableDisableSpecialGuids.c)
 * Callees:
 *     EtwpCheckGuidAccess @ 0x1408FC30C (EtwpCheckGuidAccess.c)
 *     WmiTraceRundownNotify @ 0x140B0D0B4 (WmiTraceRundownNotify.c)
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
