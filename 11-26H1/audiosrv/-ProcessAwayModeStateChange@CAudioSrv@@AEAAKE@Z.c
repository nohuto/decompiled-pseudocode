/*
 * XREFs of ?ProcessAwayModeStateChange@CAudioSrv@@AEAAKE@Z @ 0x1800D9A90
 * Callers:
 *     ?PowerSettingChanged@CAudioSrv@@UEAAK_J@Z @ 0x1800D9810 (-PowerSettingChanged@CAudioSrv@@UEAAK_J@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001A8D8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_S @ 0x180082A54 (WPP_SF_S.c)
 *     WPP_SF_d @ 0x1800CCA44 (WPP_SF_d.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CAudioSrv::ProcessAwayModeStateChange(CAudioSrv *this, unsigned __int8 a2)
{
  unsigned int v2; // r12d
  int v3; // r9d
  struct IVolumeProvider *v4; // r13
  unsigned int i; // r14d
  unsigned int v6; // esi
  _UNKNOWN **v7; // rcx
  int v8; // eax
  int v9; // eax
  __int64 v11; // [rsp+30h] [rbp-38h] BYREF
  __int64 v12; // [rsp+38h] [rbp-30h] BYREF
  __int64 v13; // [rsp+40h] [rbp-28h] BYREF
  PROPVARIANT pvar[2]; // [rsp+48h] [rbp-20h] BYREF
  __int64 v15; // [rsp+58h] [rbp-10h]
  unsigned int v16; // [rsp+B0h] [rbp+48h] BYREF
  int v17; // [rsp+B8h] [rbp+50h] BYREF
  LPVOID pv; // [rsp+C0h] [rbp+58h] BYREF
  __int64 v19; // [rsp+C8h] [rbp+60h] BYREF

  v2 = a2;
  v13 = 0LL;
  v16 = 0;
  v3 = *((_DWORD *)this + 24);
  if ( a2 == v3 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x21u,
        (__int64)&WPP_126de3733680384bb8fabd64a7dcaca6_Traceguids,
        v3);
    }
  }
  else
  {
    *((_DWORD *)this + 24) = a2;
    v4 = g_pVolumeProvider;
    if ( ((int (__fastcall *)(struct IMMDeviceEnumerator *, _QWORD, __int64, __int64 *))g_DeviceEnumerator->lpVtbl->EnumAudioEndpoints)(
           g_DeviceEnumerator,
           0LL,
           1LL,
           &v13) >= 0
      && (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v13 + 24LL))(v13, &v16) >= 0 )
    {
      for ( i = 0; i < v16; ++i )
      {
        v12 = 0LL;
        v11 = 0LL;
        *(_OWORD *)pvar = 0LL;
        v15 = 0LL;
        v19 = 0LL;
        v6 = v2;
        if ( (*(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v13 + 32LL))(v13, i, &v19) >= 0 )
        {
          pv = 0LL;
          if ( (*(int (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v19 + 40LL))(v19, &pv) < 0
            || (*(int (__fastcall **)(struct IVolumeProvider *, LPVOID, __int64 *))(*(_QWORD *)v4 + 40LL))(v4, pv, &v12) < 0 )
          {
            CoTaskMemFree(pv);
            pv = 0LL;
          }
          else
          {
            if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
              && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF_S(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                0x22u,
                (__int64)&WPP_126de3733680384bb8fabd64a7dcaca6_Traceguids,
                (const wchar_t *)pv);
            }
            CoTaskMemFree(pv);
            if ( (*(int (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v19 + 32LL))(v19, 2LL, &v11) >= 0 )
            {
              *(_OWORD *)pvar = 0LL;
              v15 = 0LL;
              if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v11 + 40LL))(
                     v11,
                     &PKEY_Endpoint_Flags,
                     pvar) < 0
                || LOWORD(pvar[0]) != 19 && LOWORD(pvar[0]) )
              {
                PropVariantClear(pvar);
              }
              else
              {
                v17 = 0;
                if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v12 + 152LL))(v12, &v17) >= 0 )
                {
                  v7 = (_UNKNOWN **)WPP_GLOBAL_Control;
                  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
                    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
                    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                  {
                    WPP_SF_d(
                      *((_QWORD *)WPP_GLOBAL_Control + 2),
                      0x23u,
                      (__int64)&WPP_126de3733680384bb8fabd64a7dcaca6_Traceguids,
                      v17);
                    v7 = (_UNKNOWN **)WPP_GLOBAL_Control;
                  }
                  if ( (_BYTE)v2 )
                  {
                    LOWORD(pvar[0]) = 19;
                    if ( v17 )
                      LODWORD(pvar[1]) |= 4u;
                    else
                      LODWORD(pvar[1]) &= ~4u;
                    v8 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v11 + 48LL))(
                           v11,
                           &PKEY_Endpoint_Flags,
                           pvar);
                    if ( v8 < 0 )
                      AudSrvTraceLoggingErrorHelper("CAudioSrv::ProcessAwayModeStateChange", 1460, v8);
                  }
                  else
                  {
                    v6 = (LODWORD(pvar[1]) >> 2) & 1;
                    if ( v7 != &WPP_GLOBAL_Control && (*((_BYTE *)v7 + 28) & 0x10) != 0 && *((_BYTE *)v7 + 25) >= 4u )
                      WPP_SF_d(
                        (__int64)v7[2],
                        0x24u,
                        (__int64)&WPP_126de3733680384bb8fabd64a7dcaca6_Traceguids,
                        (LODWORD(pvar[1]) >> 2) & 1);
                  }
                  PropVariantClear(pvar);
                  if ( v17 != v6 )
                  {
                    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, void *, _QWORD))(*(_QWORD *)v12 + 144LL))(
                           v12,
                           v6,
                           &EVENTCONTEXT_POWEREVENT,
                           0LL);
                    if ( v9 < 0 )
                      AudSrvTraceLoggingErrorHelper("CAudioSrv::ProcessAwayModeStateChange", 1483, v9);
                  }
                }
              }
            }
          }
        }
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v19);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v11);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v12);
      }
    }
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v13);
  return 0LL;
}
