/*
 * XREFs of ExpQueryRuntimeAttestationReport @ 0x1408391DC
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 * Callees:
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     VslQueryRuntimeAttestationReport @ 0x1407951E0 (VslQueryRuntimeAttestationReport.c)
 */

__int64 __fastcall ExpQueryRuntimeAttestationReport(
        void *Src,
        int a2,
        void *a3,
        unsigned int a4,
        unsigned int *a5,
        char a6)
{
  _OWORD v9[3]; // [rsp+28h] [rbp-40h] BYREF

  memset(v9, 0, sizeof(v9));
  if ( !Src )
    return 3221225485LL;
  if ( a2 != 48 )
    return 3221225476LL;
  if ( !a3 && a4 || !a5 )
    return 3221225485LL;
  if ( a6 )
    RtlCopyFromUser(v9, Src, 0x30uLL);
  else
    RtlCopyVolatileMemory(v9, Src, 0x30uLL);
  *a5 = a4;
  return VslQueryRuntimeAttestationReport((__int16 *)v9, a3, a5, a6);
}
