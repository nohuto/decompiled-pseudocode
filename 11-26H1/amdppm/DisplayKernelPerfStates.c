/*
 * XREFs of DisplayKernelPerfStates @ 0x14002E1BC
 * Callers:
 *     InitLegacyPccInternal @ 0x14000AE10 (InitLegacyPccInternal.c)
 *     InitCpcStatesInternal @ 0x140032B70 (InitCpcStatesInternal.c)
 *     InitPerfStatesInternal @ 0x1400345C8 (InitPerfStatesInternal.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003760 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x140003880 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x140009004 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall DisplayKernelPerfStates(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  int v5; // [rsp+20h] [rbp-18h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      result = WPP_RECORDER_SF_q((__int64)WPP_GLOBAL_Control->DeviceExtension, a2, a3, 0x69u, v5);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(a2) = 5;
        result = WPP_RECORDER_SF_d(
                   WPP_GLOBAL_Control->DeviceExtension,
                   a2,
                   2,
                   106,
                   (__int64)&WPP_c6064094ced332a4201bf8f4f3337742_Traceguids,
                   *(_WORD *)(a1 + 4));
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
                     107,
                     (__int64)&WPP_c6064094ced332a4201bf8f4f3337742_Traceguids,
                     *(_DWORD *)(a1 + 16));
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
                       108,
                       (__int64)&WPP_c6064094ced332a4201bf8f4f3337742_Traceguids,
                       *(_DWORD *)(a1 + 20));
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              LOBYTE(a2) = 5;
              return WPP_RECORDER_SF_(
                       WPP_GLOBAL_Control->DeviceExtension,
                       a2,
                       2,
                       109,
                       (__int64)&WPP_c6064094ced332a4201bf8f4f3337742_Traceguids);
            }
          }
        }
      }
    }
  }
  return result;
}
