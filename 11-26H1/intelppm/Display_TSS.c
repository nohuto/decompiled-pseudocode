/*
 * XREFs of Display_TSS @ 0x140046B04
 * Callers:
 *     InitAcpiThrottleStates @ 0x14003B1EC (InitAcpiThrottleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140003440 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x140004618 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_Ds @ 0x14000A0C4 (WPP_RECORDER_SF_Ds.c)
 *     __security_check_cookie @ 0x1400102F0 (__security_check_cookie.c)
 */

int __fastcall Display_TSS(unsigned int *a1)
{
  int result; // eax
  unsigned int i; // edi
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // [rsp+20h] [rbp-78h]
  char DstBuf[16]; // [rsp+40h] [rbp-58h] BYREF
  __int128 v10; // [rsp+50h] [rbp-48h]
  char v11; // [rsp+60h] [rbp-38h]

  if ( a1 )
  {
    result = 0;
    *(_OWORD *)DstBuf = 0LL;
    v11 = 0;
    v10 = 0LL;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        result = WPP_RECORDER_SF_(
                   WPP_GLOBAL_Control->DeviceExtension,
                   5,
                   2,
                   111,
                   (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        result = WPP_RECORDER_SF_(
                   WPP_GLOBAL_Control->DeviceExtension,
                   5,
                   2,
                   112,
                   (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids);
    }
    for ( i = 0; i < *a1; ++i )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            5u,
            2u,
            0x71u,
            (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_D(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              5u,
              2u,
              0x72u,
              (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              WPP_RECORDER_SF_D(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                5u,
                2u,
                0x73u,
                (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
              && LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              WPP_RECORDER_SF_D(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                5u,
                2u,
                0x74u,
                (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids);
            }
          }
        }
      }
      _itoa_s(a1[5 * i + 4], DstBuf, 0x21uLL, 2);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_Ds((__int64)WPP_GLOBAL_Control->DeviceExtension, v4, v5, 0x75u, v8, a1[5 * i + 4], DstBuf);
      result = _itoa_s(a1[5 * i + 5], DstBuf, 0x21uLL, 2);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          result = WPP_RECORDER_SF_Ds(
                     (__int64)WPP_GLOBAL_Control->DeviceExtension,
                     v6,
                     v7,
                     0x76u,
                     v8,
                     a1[5 * i + 5],
                     DstBuf);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            result = WPP_RECORDER_SF_(
                       WPP_GLOBAL_Control->DeviceExtension,
                       5,
                       2,
                       119,
                       (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids);
        }
      }
    }
  }
  return result;
}
