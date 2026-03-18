/*
 * XREFs of RtlPcToFileHeader @ 0x14047F990
 * Callers:
 *     RtlGuardCheckLongJumpTarget @ 0x140530D10 (RtlGuardCheckLongJumpTarget.c)
 *     EtwTimLogControlProtectionKernelModeReturnMismatch @ 0x1406C6AF4 (EtwTimLogControlProtectionKernelModeReturnMismatch.c)
 *     MiCallDllUnload @ 0x140874FA0 (MiCallDllUnload.c)
 *     MiIssueDllInitializeCall @ 0x1408752E8 (MiIssueDllInitializeCall.c)
 *     EtwpLocateDbgIdForRegEntry @ 0x140942658 (EtwpLocateDbgIdForRegEntry.c)
 *     IoCreateDriver @ 0x140B57970 (IoCreateDriver.c)
 *     sub_140C82940 @ 0x140C82940 (sub_140C82940.c)
 *     VslpRecordBootRanges @ 0x140D09CF8 (VslpRecordBootRanges.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x1402E9A40 (RtlpxLookupFunctionTable.c)
 */

__int64 __fastcall RtlPcToFileHeader(unsigned __int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]

  v5 = 0LL;
  v4 = 0LL;
  if ( a1 < *((_QWORD *)&xmmword_141200030 + 1)
    || a1 >= *((_QWORD *)&xmmword_141200030 + 1) + (unsigned __int64)(unsigned int)qword_141200040 )
  {
    RtlpxLookupFunctionTable(a1, (__int64)&v4);
  }
  else
  {
    v4 = xmmword_141200030;
  }
  result = *((_QWORD *)&v4 + 1);
  *a2 = *((_QWORD *)&v4 + 1);
  return result;
}
