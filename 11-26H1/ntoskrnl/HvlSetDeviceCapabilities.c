/*
 * XREFs of HvlSetDeviceCapabilities @ 0x1405C0860
 * Callers:
 *     <none>
 * Callees:
 *     HvlpHvStatusIsInsufficientMemory @ 0x1402F4C78 (HvlpHvStatusIsInsufficientMemory.c)
 *     HvlpHvToNtStatus @ 0x1402F4CA0 (HvlpHvToNtStatus.c)
 *     HvcallFastExtended @ 0x14032DFE0 (HvcallFastExtended.c)
 *     HvlpHandleInsufficientMemory @ 0x140533814 (HvlpHandleInsufficientMemory.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall HvlSetDeviceCapabilities(__int64 a1, int a2, int a3)
{
  __int16 v3; // ax
  __int16 v4; // r8
  _QWORD v6[2]; // [rsp+40h] [rbp-38h] BYREF
  int v7; // [rsp+50h] [rbp-28h]
  int v8; // [rsp+54h] [rbp-24h]

  v6[0] = -1LL;
  v6[1] = a1;
  v7 = a2;
  v8 = a3;
  while ( 1 )
  {
    v3 = HvcallFastExtended(65792LL, (unsigned __int64)v6, 0x18u, 0LL, 0);
    if ( !HvlpHvStatusIsInsufficientMemory(v3) )
      break;
    if ( (int)HvlpHandleInsufficientMemory(v4) < 0 )
      return 3221225626LL;
  }
  return HvlpHvToNtStatus(v4);
}
