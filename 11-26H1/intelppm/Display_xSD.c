/*
 * XREFs of Display_xSD @ 0x140031E84
 * Callers:
 *     InitAcpiPerfDomain @ 0x1400339E8 (InitAcpiPerfDomain.c)
 *     InitAcpiThrottleDomain @ 0x140033B14 (InitAcpiThrottleDomain.c)
 * Callees:
 *     WPP_RECORDER_SF_s @ 0x1400032E0 (WPP_RECORDER_SF_s.c)
 *     WPP_RECORDER_SF_ @ 0x140003440 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x140004618 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_Ds @ 0x14000A0C4 (WPP_RECORDER_SF_Ds.c)
 *     GetCoordinationType @ 0x140032168 (GetCoordinationType.c)
 */

void __fastcall Display_xSD(unsigned int *a1, const char *a2)
{
  const char *v2; // rdi
  unsigned int i; // edi
  const char *CoordinationType; // rax
  __int64 v6; // r8
  __int64 v7; // rdx
  int v8; // [rsp+20h] [rbp-38h]

  if ( a1 )
  {
    v2 = a2;
    if ( a2 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LOBYTE(a2) = 5;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            (_DWORD)a2,
            2,
            120,
            (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_s(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              5u,
              2u,
              0x79u,
              (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids,
              v2);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              WPP_RECORDER_SF_D(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                5u,
                2u,
                0x7Au,
                (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
              && LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              LOBYTE(a2) = 5;
              WPP_RECORDER_SF_(
                WPP_GLOBAL_Control->DeviceExtension,
                (_DWORD)a2,
                2,
                123,
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
            WPP_RECORDER_SF_D(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              5u,
              2u,
              0x7Cu,
              (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              WPP_RECORDER_SF_D(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                5u,
                2u,
                0x7Du,
                (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                WPP_RECORDER_SF_D(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  5u,
                  2u,
                  0x7Eu,
                  (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                  WPP_RECORDER_SF_D(
                    (__int64)WPP_GLOBAL_Control->DeviceExtension,
                    5u,
                    2u,
                    0x7Fu,
                    (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids);
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                  {
                    CoordinationType = (const char *)GetCoordinationType(a1[5 * i + 4]);
                    WPP_RECORDER_SF_Ds(*(_QWORD *)(v6 + 64), v7, v6, 0x80u, v8, v7, CoordinationType);
                  }
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                      WPP_RECORDER_SF_D(
                        (__int64)WPP_GLOBAL_Control->DeviceExtension,
                        5u,
                        2u,
                        0x81u,
                        (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids);
                    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    {
                      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                      {
                        LOBYTE(a2) = 5;
                        WPP_RECORDER_SF_(
                          WPP_GLOBAL_Control->DeviceExtension,
                          (_DWORD)a2,
                          2,
                          130,
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
