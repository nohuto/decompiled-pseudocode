/*
 * XREFs of ACPIVerifyUSB4Presence @ 0x1400BA408
 * Callers:
 *     ACPIRootInitialize @ 0x1400B9B0C (ACPIRootInitialize.c)
 * Callees:
 *     WPP_RECORDER_SF_i @ 0x14005D6F0 (WPP_RECORDER_SF_i.c)
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 *     ACPIAmliEvaluateOsc @ 0x1400CD900 (ACPIAmliEvaluateOsc.c)
 */

__int64 __fastcall ACPIVerifyUSB4Presence(__int64 a1, __int64 a2, int a3)
{
  int v3; // edx
  unsigned int v4; // ebx
  __int128 v6; // [rsp+30h] [rbp-38h] BYREF
  __int64 v7; // [rsp+40h] [rbp-28h] BYREF
  int v8; // [rsp+48h] [rbp-20h]

  v7 = 1LL;
  v6 = SB_OSC_USB4_UUID;
  v8 = 15;
  v4 = ACPIAmliEvaluateOsc(*(_QWORD *)(RootDeviceExtension + 760), (int)&v6, a3, 3, &v7);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v3) = 4;
    WPP_RECORDER_SF_i(
      WPP_GLOBAL_Control->DeviceExtension,
      v3,
      10,
      29,
      (__int64)&WPP_6ec2c04a42a73872bc28b180499bcec1_Traceguids,
      v4);
  }
  return v4;
}
