/*
 * XREFs of RtlPcToFileHeader @ 0x140479300
 * Callers:
 *     RtlGuardCheckLongJumpTarget @ 0x140533210 (RtlGuardCheckLongJumpTarget.c)
 *     EtwTimLogControlProtectionKernelModeReturnMismatch @ 0x1406CA7F4 (EtwTimLogControlProtectionKernelModeReturnMismatch.c)
 *     MiCallDllUnload @ 0x14087B384 (MiCallDllUnload.c)
 *     MiIssueDllInitializeCall @ 0x14087B6CC (MiIssueDllInitializeCall.c)
 *     EtwpLocateDbgIdForRegEntry @ 0x140A35768 (EtwpLocateDbgIdForRegEntry.c)
 *     IoCreateDriver @ 0x140B5A8C0 (IoCreateDriver.c)
 *     sub_140C88940 @ 0x140C88940 (sub_140C88940.c)
 *     VslpRecordBootRanges @ 0x140D0FFC8 (VslpRecordBootRanges.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x1402CBA80 (RtlpxLookupFunctionTable.c)
 */

PVOID __cdecl RtlPcToFileHeader(PVOID PcValue, PVOID *BaseOfImage)
{
  PVOID result; // rax
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]

  v5 = 0LL;
  v4 = 0LL;
  if ( (unsigned __int64)PcValue < *((_QWORD *)&xmmword_141200030 + 1)
    || (unsigned __int64)PcValue >= *((_QWORD *)&xmmword_141200030 + 1)
                                  + (unsigned __int64)(unsigned int)qword_141200040 )
  {
    RtlpxLookupFunctionTable((unsigned __int64)PcValue, (__int64)&v4);
  }
  else
  {
    v4 = xmmword_141200030;
  }
  result = (PVOID)*((_QWORD *)&v4 + 1);
  *BaseOfImage = (PVOID)*((_QWORD *)&v4 + 1);
  return result;
}
