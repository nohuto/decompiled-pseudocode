/*
 * XREFs of Display_PSS @ 0x14002CDD4
 * Callers:
 *     ValidatePssCore @ 0x140031E6C (ValidatePssCore.c)
 *     InitAcpiPerfStates @ 0x14003943C (InitAcpiPerfStates.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003760 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x140003880 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_i @ 0x140007B6C (WPP_RECORDER_SF_i.c)
 */

__int64 __fastcall Display_PSS(unsigned int *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned int i; // esi
  int v6; // [rsp+20h] [rbp-28h]
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  if ( a1 )
  {
    result = (__int64)&retaddr;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(a2) = 5;
        result = WPP_RECORDER_SF_(
                   WPP_GLOBAL_Control->DeviceExtension,
                   a2,
                   2,
                   94,
                   (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(a2) = 5;
        result = WPP_RECORDER_SF_(
                   WPP_GLOBAL_Control->DeviceExtension,
                   a2,
                   2,
                   95,
                   (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids);
      }
    }
    for ( i = 0; i < *a1; ++i )
    {
      result = i;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LOBYTE(a2) = 5;
          result = WPP_RECORDER_SF_d(
                     WPP_GLOBAL_Control->DeviceExtension,
                     a2,
                     2,
                     96,
                     (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids,
                     i);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            LOBYTE(a2) = 5;
            result = WPP_RECORDER_SF_d(
                       WPP_GLOBAL_Control->DeviceExtension,
                       a2,
                       2,
                       97,
                       (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids,
                       a1[12 * i + 2]);
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              LOBYTE(a2) = 5;
              result = WPP_RECORDER_SF_d(
                         WPP_GLOBAL_Control->DeviceExtension,
                         a2,
                         2,
                         98,
                         (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids,
                         a1[12 * i + 3]);
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              {
                LOBYTE(a2) = 5;
                result = WPP_RECORDER_SF_d(
                           WPP_GLOBAL_Control->DeviceExtension,
                           a2,
                           2,
                           99,
                           (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids,
                           a1[12 * i + 4]);
              }
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                {
                  LOBYTE(a2) = 5;
                  result = WPP_RECORDER_SF_d(
                             WPP_GLOBAL_Control->DeviceExtension,
                             a2,
                             2,
                             100,
                             (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids,
                             a1[12 * i + 5]);
                }
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                    result = WPP_RECORDER_SF_i((__int64)WPP_GLOBAL_Control->DeviceExtension, a2, a3, 0x65u, v6);
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                      result = WPP_RECORDER_SF_i((__int64)WPP_GLOBAL_Control->DeviceExtension, a2, a3, 0x66u, v6);
                    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    {
                      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                        result = WPP_RECORDER_SF_i((__int64)WPP_GLOBAL_Control->DeviceExtension, a2, a3, 0x67u, v6);
                      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                      {
                        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                          result = WPP_RECORDER_SF_i((__int64)WPP_GLOBAL_Control->DeviceExtension, a2, a3, 0x68u, v6);
                        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                        {
                          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                          {
                            LOBYTE(a2) = 5;
                            result = WPP_RECORDER_SF_(
                                       WPP_GLOBAL_Control->DeviceExtension,
                                       a2,
                                       2,
                                       105,
                                       (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}
