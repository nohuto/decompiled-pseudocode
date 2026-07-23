/*
 * XREFs of ExpGetSystemProcessorFeaturesInformation @ 0x1407788EC
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 */

__int64 __fastcall ExpGetSystemProcessorFeaturesInformation(void *a1, char a2)
{
  __int64 Src; // [rsp+28h] [rbp-30h] BYREF
  __int128 v4; // [rsp+30h] [rbp-28h]
  __int64 v5; // [rsp+40h] [rbp-18h]

  v4 = 0LL;
  v5 = 0LL;
  Src = KeFeatureBits;
  if ( a2 )
    RtlCopyToUser(a1, &Src, 0x20uLL);
  else
    RtlCopyVolatileMemory(a1, &Src, 0x20uLL);
  return 0LL;
}
