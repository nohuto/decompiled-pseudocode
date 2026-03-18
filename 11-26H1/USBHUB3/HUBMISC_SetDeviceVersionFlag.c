/*
 * XREFs of HUBMISC_SetDeviceVersionFlag @ 0x1400338D8
 * Callers:
 *     HUBDSM_SettingVersionFlagInEnumerating @ 0x140024AA0 (HUBDSM_SettingVersionFlagInEnumerating.c)
 *     HUBDSM_UpdatingDefaultEndpointMaxPacketSizeInEnum @ 0x140024E40 (HUBDSM_UpdatingDefaultEndpointMaxPacketSizeInEnum.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 */

__int16 __fastcall HUBMISC_SetDeviceVersionFlag(__int64 a1)
{
  int v2; // ecx
  _UNKNOWN **v3; // rax
  int v4; // eax

  *(_BYTE *)(a1 + 1464) = 0;
  v2 = *(unsigned __int16 *)(a1 + 1998);
  LOWORD(v3) = 256;
  if ( (_WORD)v2 != 256 )
  {
    LOWORD(v3) = v2 - 257;
    if ( (unsigned __int16)(v2 - 257) > 0xFEu )
    {
      LOWORD(v3) = 512;
      if ( (_WORD)v2 == 512 )
      {
        *(_DWORD *)(a1 + 1464) |= 4u;
        return (__int16)v3;
      }
      if ( (unsigned __int16)v2 > 0x200u )
      {
        LOWORD(v3) = 768;
        if ( (unsigned __int16)v2 >= 0x300u )
        {
          v4 = *(_DWORD *)(a1 + 1464);
          if ( (v4 & 0x20000) != 0 )
          {
            LODWORD(v3) = v4 | 0x10;
            *(_DWORD *)(a1 + 1464) = (_DWORD)v3;
            return (__int16)v3;
          }
          v3 = &WPP_RECORDER_INITIALIZED;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            LOWORD(v3) = WPP_RECORDER_SF_d(
                           *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
                           2u,
                           5u,
                           0x27u,
                           (__int64)&WPP_dde998bf8bb3310d95d4227a99ba80b7_Traceguids,
                           v2);
        }
        *(_DWORD *)(a1 + 1464) |= 8u;
        return (__int16)v3;
      }
      v3 = &WPP_RECORDER_INITIALIZED;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        LOWORD(v3) = WPP_RECORDER_SF_d(
                       *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
                       2u,
                       5u,
                       0x28u,
                       (__int64)&WPP_dde998bf8bb3310d95d4227a99ba80b7_Traceguids,
                       v2);
    }
    *(_DWORD *)(a1 + 1464) |= 2u;
    return (__int16)v3;
  }
  *(_DWORD *)(a1 + 1464) |= 1u;
  return (__int16)v3;
}
