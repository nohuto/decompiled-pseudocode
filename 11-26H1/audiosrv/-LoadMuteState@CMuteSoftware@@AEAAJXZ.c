/*
 * XREFs of ?LoadMuteState@CMuteSoftware@@AEAAJXZ @ 0x180108E10
 * Callers:
 *     ?GetLevelData@CMuteSoftware@@MEAAJXZ @ 0x180108D90 (-GetLevelData@CMuteSoftware@@MEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001A8D8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_S @ 0x180082A54 (WPP_SF_S.c)
 *     WPP_SF_Sd @ 0x1800CF92C (WPP_SF_Sd.c)
 *     WPP_SF_Sl @ 0x1801097A0 (WPP_SF_Sl.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CMuteSoftware::LoadMuteState(CMuteSoftware *this)
{
  int v2; // ebx
  int v3; // r8d
  BOOL v4; // eax
  PROPVARIANT pvar[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v7; // [rsp+40h] [rbp-10h]
  __int64 v8; // [rsp+70h] [rbp+20h] BYREF
  __int64 v9; // [rsp+78h] [rbp+28h] BYREF

  v9 = 0LL;
  v8 = 0LL;
  v2 = ((__int64 (__fastcall *)(struct IMMDeviceEnumerator *, _QWORD, __int64 *))g_DeviceEnumerator->lpVtbl->GetDevice)(
         g_DeviceEnumerator,
         *((_QWORD *)this + 4),
         &v9);
  if ( v2 >= 0 )
  {
    v2 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v9 + 32LL))(v9, 0LL, &v8);
    if ( v2 >= 0 )
    {
      *(_OWORD *)pvar = 0LL;
      v7 = 0LL;
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_S(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x15u,
          (__int64)&WPP_896a03467a023f83569b8c3d81c0998d_Traceguids,
          *((const wchar_t **)this + 4));
      }
      v2 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v8 + 40LL))(
             v8,
             &PKEY_APO_MasterMute,
             pvar);
      if ( v2 >= 0 && LOWORD(pvar[0]) == 11 )
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_Sd(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0x16u,
            (__int64)&WPP_896a03467a023f83569b8c3d81c0998d_Traceguids,
            *((const wchar_t **)this + 4));
        }
        v4 = LOWORD(pvar[1]) == 0xFFFF;
        *((_DWORD *)this + 6) = v4;
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_Sl(*((_QWORD *)WPP_GLOBAL_Control + 2), 23, v3, *((_QWORD *)this + 4), v4);
        }
      }
      PropVariantClear(pvar);
      if ( v2 < 0 )
        AudSrvTraceLoggingErrorHelper("CMuteSoftware::LoadMuteState", 743, v2);
    }
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v8);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v9);
  return (unsigned int)v2;
}
