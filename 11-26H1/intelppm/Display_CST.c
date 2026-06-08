/*
 * XREFs of Display_CST @ 0x140029C88
 * Callers:
 *     InitAcpiCStates @ 0x140047B54 (InitAcpiCStates.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140003440 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x140004618 (WPP_RECORDER_SF_D.c)
 *     DisplayGenAddr @ 0x140028678 (DisplayGenAddr.c)
 */

_UNKNOWN **__fastcall Display_CST(int *a1, __int64 a2, struct _DEVICE_OBJECT *a3, __int64 a4)
{
  _UNKNOWN **result; // rax
  unsigned int i; // edi
  __int64 v7; // [rsp+28h] [rbp-30h]
  int v8; // [rsp+28h] [rbp-30h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  if ( a1 )
  {
    result = &retaddr;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        result = (_UNKNOWN **)WPP_RECORDER_SF_(
                                WPP_GLOBAL_Control->DeviceExtension,
                                5,
                                2,
                                131,
                                (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          result = (_UNKNOWN **)WPP_RECORDER_SF_(
                                  WPP_GLOBAL_Control->DeviceExtension,
                                  5,
                                  2,
                                  132,
                                  (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            v8 = *a1;
            result = (_UNKNOWN **)WPP_RECORDER_SF_D(
                                    (__int64)WPP_GLOBAL_Control->DeviceExtension,
                                    5u,
                                    2u,
                                    0x85u,
                                    (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids,
                                    v8);
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            result = (_UNKNOWN **)WPP_RECORDER_SF_(
                                    WPP_GLOBAL_Control->DeviceExtension,
                                    5,
                                    2,
                                    134,
                                    (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids);
          }
        }
      }
    }
    for ( i = 0; i < *a1; ++i )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LODWORD(v7) = i;
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            5u,
            2u,
            0x87u,
            (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids,
            v7);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            LODWORD(v7) = LOBYTE(a1[5 * i + 4]);
            WPP_RECORDER_SF_D(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              5u,
              2u,
              0x88u,
              (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids,
              v7);
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              LODWORD(v7) = HIWORD(a1[5 * i + 4]);
              WPP_RECORDER_SF_D(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                5u,
                2u,
                0x89u,
                (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids,
                v7);
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              {
                LODWORD(v7) = a1[5 * i + 5];
                WPP_RECORDER_SF_D(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  5u,
                  2u,
                  0x8Au,
                  (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids,
                  v7);
              }
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                && LOWORD(WPP_GLOBAL_Control->DeviceType) )
              {
                WPP_RECORDER_SF_(
                  WPP_GLOBAL_Control->DeviceExtension,
                  5,
                  2,
                  139,
                  (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids);
              }
            }
          }
        }
      }
      result = (_UNKNOWN **)DisplayGenAddr((unsigned __int8 *)&a1[5 * i + 1], "    ", a3, a4);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          result = (_UNKNOWN **)WPP_RECORDER_SF_(
                                  WPP_GLOBAL_Control->DeviceExtension,
                                  5,
                                  2,
                                  140,
                                  (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids);
      }
    }
  }
  return result;
}
