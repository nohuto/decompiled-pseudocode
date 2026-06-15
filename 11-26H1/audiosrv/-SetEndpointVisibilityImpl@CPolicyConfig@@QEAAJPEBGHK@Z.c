/*
 * XREFs of ?SetEndpointVisibilityImpl@CPolicyConfig@@QEAAJPEBGHK@Z @ 0x18010C8EC
 * Callers:
 *     ?SetEndpointVisibility@CPolicyConfig@@UEAAJPEBGH@Z @ 0x18008CF40 (-SetEndpointVisibility@CPolicyConfig@@UEAAJPEBGH@Z.c)
 *     PolicyConfigSetEndpointVisibility @ 0x18008CF80 (PolicyConfigSetEndpointVisibility.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D260 (--1-$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x18001DBC0 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     _tlgKeywordOn @ 0x180052CC0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x18005D314 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?OnDeviceStateChanged@DynamicAudioEndpointManager@@QEAAXPEBGK@Z @ 0x18006A558 (-OnDeviceStateChanged@DynamicAudioEndpointManager@@QEAAXPEBGK@Z.c)
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x180073B6C (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPolicyConfig::SetEndpointVisibilityImpl(
        CPolicyConfig *this,
        const unsigned __int16 *a2,
        unsigned int a3,
        int a4)
{
  unsigned int v7; // ebx
  _DWORD *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  HRESULT v12; // eax
  int v13; // eax
  __int64 v14; // rdx
  RTL_SRWLOCK *v15; // rcx
  DynamicAudioEndpointManager *v16; // rcx
  unsigned int v18; // [rsp+40h] [rbp-20h] BYREF
  __int64 v19; // [rsp+48h] [rbp-18h] BYREF
  LPVOID ppv; // [rsp+50h] [rbp-10h] BYREF
  const wchar_t *v21; // [rsp+58h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  CPolicyConfig *v23; // [rsp+80h] [rbp+20h] BYREF
  struct CEndpointStore *v24; // [rsp+88h] [rbp+28h] BYREF

  v23 = this;
  if ( a2 )
  {
    v8 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
    if ( *v8 > 4u && tlgKeywordOn((__int64)v8, 32LL) )
    {
      LODWORD(v24) = a4;
      v18 = a3;
      v21 = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v9,
        byte_1801A7187,
        v10,
        v11,
        &v21,
        (__int64)&v18,
        (__int64)&v24);
    }
    ppv = 0LL;
    v12 = CoCreateInstance(
            &GUID_06cca63e_9941_441b_b004_39f999ada412,
            0LL,
            0x17u,
            &GUID_6ca19947_8747_46ab_879e_349c4dbb88fb,
            &ppv);
    v7 = v12;
    if ( v12 >= 0 )
    {
      v19 = 0LL;
      v13 = ((__int64 (__fastcall *)(struct IMMDeviceEnumerator *, const unsigned __int16 *, __int64 *))g_DeviceEnumerator->lpVtbl->GetDevice)(
              g_DeviceEnumerator,
              a2,
              &v19);
      v7 = v13;
      if ( v13 >= 0 )
      {
        v13 = (*(__int64 (__fastcall **)(LPVOID, __int64, _QWORD))(*(_QWORD *)ppv + 48LL))(ppv, v19, a3);
        v7 = v13;
        if ( v13 >= 0 )
        {
          if ( !a3 )
          {
            v24 = 0LL;
            if ( (int)CEndpointStoreCache::GetEndpointStore(v15, a2, &v24) >= 0 )
              CAudioSessionManager::Disconnect(*((struct _RTL_CRITICAL_SECTION **)v24 + 12), 0, 1);
            wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((volatile signed __int32 **)&v24);
          }
          LODWORD(v23) = 0;
          v13 = (*(__int64 (__fastcall **)(__int64, CPolicyConfig **))(*(_QWORD *)v19 + 48LL))(v19, &v23);
          v7 = v13;
          if ( v13 >= 0 )
          {
            DynamicAudioEndpointManager::OnDeviceStateChanged(v16, a2, (int)v23);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v19);
            v7 = 0;
            goto LABEL_20;
          }
          v14 = 1573LL;
        }
        else
        {
          v14 = 1559LL;
        }
      }
      else
      {
        v14 = 1557LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)(unsigned int)v13);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v19);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x612,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)(unsigned int)v12);
    }
LABEL_20:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&ppv);
    return v7;
  }
  v7 = -2147024809;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x607,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
    (const char *)0x80070057LL);
  return v7;
}
