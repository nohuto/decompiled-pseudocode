/*
 * XREFs of ?PersistMuteState@CMuteSoftware@@AEAAXXZ @ 0x1801091B4
 * Callers:
 *     ?ProviderFinalRelease@CMuteSoftware@@UEAAXXZ @ 0x1801093F0 (-ProviderFinalRelease@CMuteSoftware@@UEAAXXZ.c)
 *     std::_Func_impl_no_alloc__lambda_9b74c3d0faed76deb923d29084677877__void_::_Do_call @ 0x180109780 (std--_Func_impl_no_alloc__lambda_9b74c3d0faed76deb923d29084677877__void_--_Do_call.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005759C (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     WPP_SF_S @ 0x180082A54 (WPP_SF_S.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BCFBC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_Sl @ 0x1801097A0 (WPP_SF_Sl.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CMuteSoftware::PersistMuteState(CMuteSoftware *this)
{
  HRESULT (__stdcall *GetDevice)(IMMDeviceEnumerator *, LPCWSTR, IMMDevice **); // rbx
  int v3; // eax
  __int64 v4; // rax
  int v5; // eax
  int v6; // r8d
  PROPVARIANT pvar[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v8; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v10; // [rsp+70h] [rbp+20h] BYREF
  __int64 *v11; // [rsp+78h] [rbp+28h] BYREF

  if ( _InterlockedExchange((volatile __int32 *)this + 24, 0) )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x18u,
        (__int64)&WPP_896a03467a023f83569b8c3d81c0998d_Traceguids,
        *((const wchar_t **)this + 4));
    }
    v11 = 0LL;
    GetDevice = g_DeviceEnumerator->lpVtbl->GetDevice;
    wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v11);
    v3 = ((__int64 (__fastcall *)(struct IMMDeviceEnumerator *, _QWORD, __int64 **))GetDevice)(
           g_DeviceEnumerator,
           *((_QWORD *)this + 4),
           &v11);
    if ( v3 >= 0 )
    {
      v10 = 0LL;
      v4 = *v11;
      v10 = 0LL;
      v5 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64 *))(v4 + 32))(v11, 1LL, &v10);
      if ( v5 >= 0 )
      {
        *(_OWORD *)pvar = 0LL;
        v8 = 0LL;
        LOWORD(pvar[0]) = 11;
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_Sl(*((_QWORD *)WPP_GLOBAL_Control + 2), 25, v6, *((_QWORD *)this + 4), *((_DWORD *)this + 6));
        }
        if ( *((_DWORD *)this + 6) )
          LOWORD(pvar[1]) = -1;
        else
          LOWORD(pvar[1]) = 0;
        (*(void (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v10 + 48LL))(
          v10,
          &PKEY_APO_MasterMute,
          pvar);
        PropVariantClear(pvar);
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          762LL,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\mutecontrol.cpp",
          (const char *)(unsigned int)v5);
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v10);
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        759LL,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\mutecontrol.cpp",
        (const char *)(unsigned int)v3);
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v11);
  }
}
