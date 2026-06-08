/*
 * XREFs of RegisterPepDevice @ 0x14003DD4C
 * Callers:
 *     InitPep @ 0x14003D440 (InitPep.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x140004618 (WPP_RECORDER_SF_D.c)
 *     __security_check_cookie @ 0x1400102F0 (__security_check_cookie.c)
 *     memset @ 0x140010740 (memset.c)
 */

__int64 __fastcall RegisterPepDevice(__int64 a1)
{
  bool v2; // zf
  int v3; // ebx
  _QWORD *v4; // rdi
  _QWORD v6[12]; // [rsp+30h] [rbp-29h] BYREF
  __int128 v7; // [rsp+90h] [rbp+37h] BYREF
  __int64 v8; // [rsp+A0h] [rbp+47h]

  v8 = 0LL;
  v7 = 0LL;
  memset(v6, 0, sizeof(v6));
  v2 = *(_DWORD *)(a1 + 80) == 0;
  v6[0] = 0x100000001LL;
  LODWORD(v6[10]) = 1;
  v6[11] = &v7;
  v6[6] = PepDevicePowerControlCallback;
  LODWORD(v8) = -1;
  v6[7] = a1;
  if ( v2 || !byte_140019AD0 )
  {
    v4 = (_QWORD *)(a1 + 1120);
    v3 = PoFxRegisterDevice(*(_QWORD *)a1, v6, a1 + 1120);
    if ( v3 >= 0 )
    {
      PoFxActivateComponent(*v4, 0LL, 0LL);
      PoFxStartDevicePowerManagement(*v4);
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          4u,
          0x13u,
          (__int64)&WPP_997e76c6ae9131171cbd6c73bc5000b7_Traceguids,
          v3,
          v6[0]);
      *v4 = 0LL;
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v3;
}
