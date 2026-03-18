/*
 * XREFs of ExpGetSystemProcessorInformation @ 0x1404A4D80
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B145DC (ExpQuerySystemInformation.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x1402767B0 (KeQueryMaximumProcessorCountEx.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
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
