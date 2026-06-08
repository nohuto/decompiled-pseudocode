/*
 * XREFs of Display_CSD @ 0x14002C268
 * Callers:
 *     InitAcpiIdleDomain @ 0x1400375B8 (InitAcpiIdleDomain.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003760 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x140003880 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_Ds @ 0x140007750 (WPP_RECORDER_SF_Ds.c)
 *     GetCoordinationType @ 0x14002DA7C (GetCoordinationType.c)
 */

void __fastcall Display_CSD(unsigned int *a1)
{
  unsigned int i; // edi
  const char *CoordinationType; // rax
  __int64 v4; // r8
  __int64 v5; // rdx
  int v6; // [rsp+20h] [rbp-38h]

  if ( a1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          5,
          2,
          141,
          (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            5,
            2,
            142,
            (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_d(
              WPP_GLOBAL_Control->DeviceExtension,
              5,
              2,
              143,
              (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids,
              *a1);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            WPP_RECORDER_SF_(
              WPP_GLOBAL_Control->DeviceExtension,
              5,
              2,
              144,
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
          WPP_RECORDER_SF_d(
            WPP_GLOBAL_Control->DeviceExtension,
            5,
            2,
            145,
            (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids,
            i);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_d(
              WPP_GLOBAL_Control->DeviceExtension,
              5,
              2,
              146,
              (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids,
              a1[6 * i + 1]);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              WPP_RECORDER_SF_d(
                WPP_GLOBAL_Control->DeviceExtension,
                5,
                2,
                147,
                (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids,
                a1[6 * i + 2]);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                WPP_RECORDER_SF_d(
                  WPP_GLOBAL_Control->DeviceExtension,
                  5,
                  2,
                  148,
                  (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids,
                  a1[6 * i + 3]);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                {
                  CoordinationType = (const char *)GetCoordinationType(a1[6 * i + 4]);
                  WPP_RECORDER_SF_Ds(*(_QWORD *)(v4 + 64), v5, v4, 0x95u, v6, v5, CoordinationType);
                }
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                    WPP_RECORDER_SF_d(
                      WPP_GLOBAL_Control->DeviceExtension,
                      5,
                      2,
                      150,
                      (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids,
                      a1[6 * i + 5]);
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                      WPP_RECORDER_SF_d(
                        WPP_GLOBAL_Control->DeviceExtension,
                        5,
                        2,
                        151,
                        (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids,
                        a1[6 * i + 6]);
                    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    {
                      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                        WPP_RECORDER_SF_(
                          WPP_GLOBAL_Control->DeviceExtension,
                          5,
                          2,
                          152,
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
