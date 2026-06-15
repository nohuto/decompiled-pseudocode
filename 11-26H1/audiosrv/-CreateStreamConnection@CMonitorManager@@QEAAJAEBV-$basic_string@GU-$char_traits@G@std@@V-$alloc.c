/*
 * XREFs of ?CreateStreamConnection@CMonitorManager@@QEAAJAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0PEAUStreamConnectionSettings@@AEAV?$shared_ptr@VCStreamConnection@@@3@@Z @ 0x18011C528
 * Callers:
 *     ?CreateStreamConnection@CStreamConnectionManagerImpl@@UEAAJAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0PEAUStreamConnectionSettings@@AEAV?$shared_ptr@VCStreamConnection@@@3@@Z @ 0x18011C8A0 (-CreateStreamConnection@CStreamConnectionManagerImpl@@UEAAJAEBV-$basic_string@GU-$char_traits@G@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180011720 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18001E210 (--2@YAPEAX_K@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180057B18 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1?$com_ptr_t@UIAudioPumpDspResourceTrackerToken@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800AE644 (--1-$com_ptr_t@UIAudioPumpDspResourceTrackerToken@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800B0154 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BCFBC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800CF800 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$?0$0DD@@StringReference@Internal@Windows@@QEAA@AEAY0DD@$$CBG@Z @ 0x1800D15A8 (--$-0$0DD@@StringReference@Internal@Windows@@QEAA@AEAY0DD@$$CBG@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800DBBD0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0CStreamConnectionImpl@CMonitorManager@@QEAA@V?$ComPtr@VCMonitorManager@@@WRL@Microsoft@@V?$ComPtr@VCaptureMonitor@CMonitorManager@@@34@@Z @ 0x18011B790 (--0CStreamConnectionImpl@CMonitorManager@@QEAA@V-$ComPtr@VCMonitorManager@@@WRL@Microsoft@@V-$Co.c)
 *     ??1?$_Temporary_owner@VCStreamConnectionImpl@CMonitorManager@@@std@@QEAA@XZ @ 0x18011BA9C (--1-$_Temporary_owner@VCStreamConnectionImpl@CMonitorManager@@@std@@QEAA@XZ.c)
 *     ?CreateMonitor@CMonitorManager@@AEAAJPEBG0PEAUStreamConnectionSettings@@_NPEAUICapabilityUsageSession@Management@CapabilityAccess@Internal@Windows@@PEAPEAVCaptureMonitor@1@@Z @ 0x18011C364 (-CreateMonitor@CMonitorManager@@AEAAJPEBG0PEAUStreamConnectionSettings@@_NPEAUICapabilityUsageSe.c)
 *     ?GetCapabilityUsageSession@@YAJPEAPEAUICapabilityUsageSession@Management@CapabilityAccess@Internal@Windows@@@Z @ 0x18011D254 (-GetCapabilityUsageSession@@YAJPEAPEAUICapabilityUsageSession@Management@CapabilityAccess@Intern.c)
 *     ?HasMicrophoneAccess@@YAJPEA_N@Z @ 0x18011DA44 (-HasMicrophoneAccess@@YAJPEA_N@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CMonitorManager::CreateStreamConnection(
        CMonitorManager *this,
        unsigned __int16 *a2,
        unsigned __int16 *a3,
        struct StreamConnectionSettings *a4,
        __int64 *a5)
{
  std::_Ref_count_base *v9; // rcx
  unsigned int v10; // eax
  const unsigned __int16 *v11; // rdx
  __int64 result; // rax
  HSTRING *v13; // rax
  HRESULT ActivationFactory; // eax
  unsigned int v15; // ebx
  __int64 v16; // rdx
  int v17; // eax
  int CapabilityUsageSession; // eax
  int v19; // eax
  CMonitorManager::CStreamConnectionImpl *v20; // rbx
  const char *v21; // r9
  struct CMonitorManager::CaptureMonitor *v22; // rcx
  __int64 v23; // rdi
  _DWORD *v24; // rax
  unsigned int v25; // edx
  _DWORD *v26; // rbx
  std::_Ref_count_base *v27; // rcx
  const char *v28; // r9
  DWORD dwAuthnLevel; // [rsp+20h] [rbp-A8h]
  bool v30; // [rsp+40h] [rbp-88h] BYREF
  IUnknown *pProxy; // [rsp+48h] [rbp-80h] BYREF
  CMonitorManager::CStreamConnectionImpl *v32; // [rsp+50h] [rbp-78h] BYREF
  struct CMonitorManager::CaptureMonitor *v33; // [rsp+58h] [rbp-70h] BYREF
  struct CMonitorManager::CaptureMonitor *v34; // [rsp+60h] [rbp-68h] BYREF
  HSTRING string; // [rsp+68h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  *a5 = 0LL;
  v9 = (std::_Ref_count_base *)a5[1];
  a5[1] = 0LL;
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  v30 = 0;
  v10 = RpcImpersonateClient(0LL);
  if ( v10 )
    return wil::details::in1diag3::Return_Win32(
             retaddr,
             (void *)0xEF,
             (__int64)"avcore\\audiocore\\capturemonitor\\monitormanager.cpp",
             (const char *)v10);
  BYTE1(v33) = 1;
  pProxy = 0LL;
  v13 = Windows::Internal::StringReference::StringReference(&string, (const unsigned __int16 (*)[51])v11);
  ActivationFactory = RoGetActivationFactory(*v13, &GUID_518f3880_4e5c_4524_ab03_cd01336b2178, &pProxy);
  v15 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v16 = 245LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (int)"avcore\\audiocore\\capturemonitor\\monitormanager.cpp",
      (const char *)(unsigned int)ActivationFactory);
    wil::com_ptr_t<IAudioPumpDspResourceTrackerToken,wil::err_returncode_policy>::~com_ptr_t<IAudioPumpDspResourceTrackerToken,wil::err_returncode_policy>((__int64 *)&pProxy);
    RpcRevertToSelf();
    return v15;
  }
  ActivationFactory = CoSetProxyBlanket(
                        pProxy,
                        0xFFFFFFFF,
                        0xFFFFFFFF,
                        (OLECHAR *)0xFFFFFFFFFFFFFFFFLL,
                        0,
                        3u,
                        (RPC_AUTH_IDENTITY_HANDLE)0xFFFFFFFFFFFFFFFFLL,
                        0x40u);
  v15 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v16 = 254LL;
    goto LABEL_9;
  }
  v17 = HasMicrophoneAccess(&v30);
  if ( v17 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      256LL,
      (__int64)"avcore\\audiocore\\capturemonitor\\monitormanager.cpp",
      (const char *)(unsigned int)v17);
  wil::com_ptr_t<IAudioPumpDspResourceTrackerToken,wil::err_returncode_policy>::~com_ptr_t<IAudioPumpDspResourceTrackerToken,wil::err_returncode_policy>((__int64 *)&pProxy);
  RpcRevertToSelf();
  if ( !v30 )
    return 2289827958LL;
  pProxy = 0LL;
  CapabilityUsageSession = GetCapabilityUsageSession((struct Windows::Internal::CapabilityAccess::Management::ICapabilityUsageSession **)&pProxy);
  v15 = CapabilityUsageSession;
  if ( CapabilityUsageSession < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x107,
      (int)"avcore\\audiocore\\capturemonitor\\monitormanager.cpp",
      (const char *)(unsigned int)CapabilityUsageSession);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&pProxy);
    return v15;
  }
  v33 = 0LL;
  if ( *((_QWORD *)a3 + 3) > 7uLL )
    a3 = *(unsigned __int16 **)a3;
  if ( *((_QWORD *)a2 + 3) > 7uLL )
    a2 = *(unsigned __int16 **)a2;
  try
  {
    v19 = CMonitorManager::CreateMonitor(
            this,
            a2,
            a3,
            a4,
            1,
            (struct Windows::Internal::CapabilityAccess::Management::ICapabilityUsageSession *)pProxy,
            &v33);
    if ( v19 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        268LL,
        (__int64)"avcore\\audiocore\\capturemonitor\\monitormanager.cpp",
        (const char *)(unsigned int)v19,
        dwAuthnLevel);
    v20 = (CMonitorManager::CStreamConnectionImpl *)operator new[](
                                                      0x28uLL,
                                                      (const struct std::nothrow_t *)&std::nothrow);
    v32 = v20;
    if ( v20 )
    {
      v22 = v33;
      v33 = 0LL;
      v34 = v22;
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v34);
      v32 = this;
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v32);
      v23 = CMonitorManager::CStreamConnectionImpl::CStreamConnectionImpl((__int64)v20, (__int64 *)&v32, &v34);
    }
    else
    {
      v23 = 0LL;
    }
    if ( !v23 )
      wil::details::in1diag3::_Throw_NullAlloc(
        retaddr,
        270LL,
        (__int64)"avcore\\audiocore\\capturemonitor\\monitormanager.cpp",
        v21);
    v24 = operator new(0x18uLL);
    v26 = v24;
    if ( v24 )
    {
      v24[2] = 1;
      v24[3] = 1;
      *(_QWORD *)v24 = &std::_Ref_count<CMonitorManager::CStreamConnectionImpl>::`vftable';
      *((_QWORD *)v24 + 2) = v23;
    }
    else
    {
      v26 = 0LL;
    }
    v32 = 0LL;
    std::_Temporary_owner<CMonitorManager::CStreamConnectionImpl>::~_Temporary_owner<CMonitorManager::CStreamConnectionImpl>(
      &v32,
      v25);
    *a5 = v23;
    v27 = (std::_Ref_count_base *)a5[1];
    a5[1] = (__int64)v26;
    if ( v27 )
      std::_Ref_count_base::_Decref(v27);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v33);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&pProxy);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v33) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x112,
                     (int)"avcore\\audiocore\\capturemonitor\\monitormanager.cpp",
                     v28);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&pProxy);
    return (unsigned int)v33;
  }
  return result;
}
