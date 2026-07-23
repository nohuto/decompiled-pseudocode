/*
 * XREFs of HalpArtDiscover @ 0x14059AFC4
 * Callers:
 *     HalpTimerRegisterBuiltinPluginsCommon @ 0x140585324 (HalpTimerRegisterBuiltinPluginsCommon.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     HalpArtAvailable @ 0x1404B29B4 (HalpArtAvailable.c)
 *     HalpTimerRegister @ 0x14059A8EC (HalpTimerRegister.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 HalpArtDiscover()
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-69h] BYREF
  _DWORD v2[2]; // [rsp+30h] [rbp-59h] BYREF
  __int64 (__fastcall *v3)(_DWORD *); // [rsp+38h] [rbp-51h]
  unsigned __int64 (__fastcall *v4)(unsigned int *, __int64); // [rsp+40h] [rbp-49h]
  __int64 *v5; // [rsp+88h] [rbp-1h]
  int v6; // [rsp+90h] [rbp+7h]
  int v7; // [rsp+94h] [rbp+Bh]
  __int64 v8; // [rsp+98h] [rbp+Fh]
  int v9; // [rsp+A4h] [rbp+1Bh]
  int v10; // [rsp+B8h] [rbp+2Fh]
  __int64 v11; // [rsp+C0h] [rbp+37h] BYREF
  int v12; // [rsp+C8h] [rbp+3Fh]

  v11 = 0LL;
  v12 = 0;
  DestinationString = 0LL;
  if ( HalpArtAvailable() )
  {
    memset_0(v2, 0, 0x90uLL);
    v2[0] = 1;
    v5 = &v11;
    v2[1] = 144;
    v3 = HalpArtInitialize;
    v7 = 64;
    v4 = HalpArtQueryCounter;
    v8 = 0LL;
    v10 = 15;
    v9 = 1081347;
    v6 = 12;
    RtlInitUnicodeString(
      &DestinationString,
      L"VEN_vvvv&DEV_dddd&SUBVEN_ssss&SUBDEV_yyyy&REV_rrrr&INST_iiii&UID_uuuuuuuu");
    HalpTimerRegister((__int64)v2, &DestinationString);
    HalpTimerAuxiliaryClockEnabled = 1;
  }
  return 0LL;
}
