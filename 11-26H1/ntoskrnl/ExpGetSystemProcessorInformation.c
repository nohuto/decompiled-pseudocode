/*
 * XREFs of ExpGetSystemProcessorInformation @ 0x14049E410
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x140275D20 (KeQueryMaximumProcessorCountEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 */

__int64 __fastcall ExpGetSystemProcessorInformation(void *a1, char a2)
{
  _WORD Src[4]; // [rsp+28h] [rbp-20h] BYREF
  int v6; // [rsp+30h] [rbp-18h]

  Src[0] = KeProcessorArchitecture;
  Src[1] = KeProcessorLevel;
  Src[2] = KeProcessorRevision;
  Src[3] = KeQueryMaximumProcessorCountEx(0xFFFFu);
  v6 = KeFeatureBits;
  if ( a2 )
    RtlCopyToUser(a1, Src, 0xCuLL);
  else
    RtlCopyVolatileMemory(a1, Src, 0xCuLL);
  return 0LL;
}
