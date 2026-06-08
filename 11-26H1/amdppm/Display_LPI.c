/*
 * XREFs of Display_LPI @ 0x14002C824
 * Callers:
 *     AcpiGetCoordinatedLpiStates @ 0x14002A0CC (AcpiGetCoordinatedLpiStates.c)
 *     InitAcpiLpiStates @ 0x14003E698 (InitAcpiLpiStates.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003760 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x140003880 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_S @ 0x1400070F8 (WPP_RECORDER_SF_S.c)
 *     WPP_RECORDER_SF_DS @ 0x1400075F8 (WPP_RECORDER_SF_DS.c)
 *     WPP_RECORDER_SF_i @ 0x140007B6C (WPP_RECORDER_SF_i.c)
 *     DisplayGenAddr @ 0x14002BD68 (DisplayGenAddr.c)
 */

_UNKNOWN **__fastcall Display_LPI(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _UNKNOWN **result; // rax
  const wchar_t *v5; // rdi
  unsigned int i; // esi
  __int64 v8; // rdi
  int v9; // edx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // edx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // [rsp+20h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  if ( a1 )
  {
    result = &retaddr;
    v5 = (const wchar_t *)a2;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(a2) = 5;
        result = (_UNKNOWN **)WPP_RECORDER_SF_(
                                WPP_GLOBAL_Control->DeviceExtension,
                                a2,
                                2,
                                168,
                                (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          result = (_UNKNOWN **)WPP_RECORDER_SF_S(
                                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                                  5u,
                                  2u,
                                  0xA9u,
                                  (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids,
                                  v5);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            LOBYTE(a2) = 5;
            result = (_UNKNOWN **)WPP_RECORDER_SF_d(
                                    WPP_GLOBAL_Control->DeviceExtension,
                                    a2,
                                    2,
                                    170,
                                    (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids,
                                    a1[4]);
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              LOBYTE(a2) = 5;
              result = (_UNKNOWN **)WPP_RECORDER_SF_d(
                                      WPP_GLOBAL_Control->DeviceExtension,
                                      a2,
                                      2,
                                      171,
                                      (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids,
                                      *a1);
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                result = (_UNKNOWN **)WPP_RECORDER_SF_i(
                                        (__int64)WPP_GLOBAL_Control->DeviceExtension,
                                        a2,
                                        a3,
                                        0xACu,
                                        v15);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                && LOWORD(WPP_GLOBAL_Control->DeviceType) )
              {
                LOBYTE(a2) = 5;
                result = (_UNKNOWN **)WPP_RECORDER_SF_(
                                        WPP_GLOBAL_Control->DeviceExtension,
                                        a2,
                                        2,
                                        173,
                                        (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids);
              }
            }
          }
        }
      }
    }
    for ( i = 0; i < a1[4]; ++i )
    {
      v8 = 20LL * i;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_DS(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            a2,
            a3,
            a4,
            v15,
            i,
            *(const wchar_t **)&a1[v8 + 24]);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            LOBYTE(a2) = 5;
            WPP_RECORDER_SF_d(
              WPP_GLOBAL_Control->DeviceExtension,
              a2,
              2,
              175,
              (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids,
              a1[v8 + 6]);
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              LOBYTE(a2) = 5;
              WPP_RECORDER_SF_d(
                WPP_GLOBAL_Control->DeviceExtension,
                a2,
                2,
                176,
                (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids,
                a1[v8 + 7]);
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              {
                LOBYTE(a2) = 5;
                WPP_RECORDER_SF_d(
                  WPP_GLOBAL_Control->DeviceExtension,
                  a2,
                  2,
                  177,
                  (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids,
                  a1[v8 + 8]);
              }
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                {
                  LOBYTE(a2) = 5;
                  WPP_RECORDER_SF_d(
                    WPP_GLOBAL_Control->DeviceExtension,
                    a2,
                    2,
                    178,
                    (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids,
                    a1[v8 + 9]);
                }
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                  {
                    LOBYTE(a2) = 5;
                    WPP_RECORDER_SF_d(
                      WPP_GLOBAL_Control->DeviceExtension,
                      a2,
                      2,
                      179,
                      (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids,
                      a1[v8 + 10]);
                  }
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                    {
                      LOBYTE(a2) = 5;
                      WPP_RECORDER_SF_d(
                        WPP_GLOBAL_Control->DeviceExtension,
                        a2,
                        2,
                        180,
                        (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids,
                        a1[v8 + 11]);
                    }
                    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                      && LOWORD(WPP_GLOBAL_Control->DeviceType) )
                    {
                      LOBYTE(a2) = 5;
                      WPP_RECORDER_SF_(
                        WPP_GLOBAL_Control->DeviceExtension,
                        a2,
                        2,
                        181,
                        (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids);
                    }
                  }
                }
              }
            }
          }
        }
      }
      DisplayGenAddr((unsigned __int8 *)&a1[v8 + 12], "    ", a3, a4);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(v9) = 5;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v9,
          2,
          182,
          (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids);
      }
      DisplayGenAddr((unsigned __int8 *)&a1[v8 + 15], "    ", v10, v11);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(v12) = 5;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v12,
          2,
          183,
          (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids);
      }
      result = (_UNKNOWN **)DisplayGenAddr((unsigned __int8 *)&a1[v8 + 18], "    ", v13, v14);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LOBYTE(a2) = 5;
          result = (_UNKNOWN **)WPP_RECORDER_SF_(
                                  WPP_GLOBAL_Control->DeviceExtension,
                                  a2,
                                  2,
                                  184,
                                  (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids);
        }
      }
    }
  }
  return result;
}
