/*
 * XREFs of Display_xSD @ 0x14002D380
 * Callers:
 *     InitAcpiPerfDomain @ 0x140037724 (InitAcpiPerfDomain.c)
 *     InitAcpiThrottleDomain @ 0x140037978 (InitAcpiThrottleDomain.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003760 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x140003880 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_s @ 0x140006208 (WPP_RECORDER_SF_s.c)
 *     WPP_RECORDER_SF_Ds @ 0x140007750 (WPP_RECORDER_SF_Ds.c)
 *     GetCoordinationType @ 0x14002DA7C (GetCoordinationType.c)
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
            {
              LOBYTE(a2) = 5;
              WPP_RECORDER_SF_d(
                WPP_GLOBAL_Control->DeviceExtension,
                (_DWORD)a2,
                2,
                122,
                (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids,
                *a1);
            }
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
          {
            LOBYTE(a2) = 5;
            WPP_RECORDER_SF_d(
              WPP_GLOBAL_Control->DeviceExtension,
              (_DWORD)a2,
              2,
              124,
              (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids,
              i);
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              LOBYTE(a2) = 5;
              WPP_RECORDER_SF_d(
                WPP_GLOBAL_Control->DeviceExtension,
                (_DWORD)a2,
                2,
                125,
                (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids,
                a1[5 * i + 1]);
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              {
                LOBYTE(a2) = 5;
                WPP_RECORDER_SF_d(
                  WPP_GLOBAL_Control->DeviceExtension,
                  (_DWORD)a2,
                  2,
                  126,
                  (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids,
                  a1[5 * i + 2]);
              }
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                {
                  LOBYTE(a2) = 5;
                  WPP_RECORDER_SF_d(
                    WPP_GLOBAL_Control->DeviceExtension,
                    (_DWORD)a2,
                    2,
                    127,
                    (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids,
                    a1[5 * i + 3]);
                }
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
                    {
                      LOBYTE(a2) = 5;
                      WPP_RECORDER_SF_d(
                        WPP_GLOBAL_Control->DeviceExtension,
                        (_DWORD)a2,
                        2,
                        129,
                        (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids,
                        a1[5 * i + 5]);
                    }
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
