/*
 * XREFs of ?Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0AEA_N@Z @ 0x18005F424
 * Callers:
 *     ?RestartMonitorIfAppropriate@CaptureMonitor@CMonitorManager@@QEAAJXZ @ 0x18005F134 (-RestartMonitorIfAppropriate@CaptureMonitor@CMonitorManager@@QEAAJXZ.c)
 *     ?Initialize@CaptureMonitor@CMonitorManager@@QEAAJPEAUICapabilityUsageSession@Management@CapabilityAccess@Internal@Windows@@@Z @ 0x18011E32C (-Initialize@CaptureMonitor@CMonitorManager@@QEAAJPEAUICapabilityUsageSession@Management@Capabili.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180060E5C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x18006110C (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     WPP_SF_qq @ 0x1800B01F8 (WPP_SF_qq.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x1800CC908 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800CCA44 (WPP_SF_d.c)
 *     WPP_SF_dd @ 0x1800CFC30 (WPP_SF_dd.c)
 *     WPP_SF_q @ 0x1800CFD20 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1800CFEB4 (WPP_SF_qD.c)
 *     ??$MakeAndInitialize@VCMonitorNotification@CMonitor@@V12@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAV2@@Details@WRL@Microsoft@@YAJPEAPEAVCMonitorNotification@CMonitor@@$$QEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@$$QEAPEAV4@@Z @ 0x180120B70 (--$MakeAndInitialize@VCMonitorNotification@CMonitor@@V12@W4__MIDL___MIDL_itf_mmdeviceapi_0000_00.c)
 *     ??0?$CComQIPtr@UIAudioClient2@@$1?_GUID_726778cd_f60a_4eda_82de_e47610cd78aa@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x180120CAC (--0-$CComQIPtr@UIAudioClient2@@$1-_GUID_726778cd_f60a_4eda_82de_e47610cd78aa@@3U__s_GUID@@B@ATL@.c)
 *     ??0?$CComQIPtr@UIAudioClientInternal@@$1?_GUID_59ea7369_26c3_4eb9_a3bb_4f7d9b0b6ccb@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x180120CEC (--0-$CComQIPtr@UIAudioClientInternal@@$1-_GUID_59ea7369_26c3_4eb9_a3bb_4f7d9b0b6ccb@@3U__s_GUID@.c)
 *     ?MuteInputLineControls@CMonitor@@CAJPEAUIMMDevice@@0@Z @ 0x180121520 (-MuteInputLineControls@CMonitor@@CAJPEAUIMMDevice@@0@Z.c)
 *     ?SetSessionTitleAndIcon@CMonitor@@AEAAJPEAUIMMDevice@@@Z @ 0x18012207C (-SetSessionTitleAndIcon@CMonitor@@AEAAJPEAUIMMDevice@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall CMonitor::Initialize(GUID *this, struct IMMDevice *a2, struct IMMDevice *a3, bool *a4)
{
  bool *v4; // r15
  _QWORD *v8; // rcx
  PTP_WORK ThreadpoolWork; // rax
  signed int LastError; // eax
  int v12; // ebx
  unsigned __int8 *Data4; // r12
  GUID *v14; // r13
  int v15; // eax
  void (__fastcall ***v16)(_QWORD, GUID *, __int64 *); // r9
  __int64 v17; // rcx
  __int64 v18; // [rsp+30h] [rbp-59h] BYREF
  __int64 v19; // [rsp+38h] [rbp-51h] BYREF
  bool *v20; // [rsp+40h] [rbp-49h]
  __int64 v21; // [rsp+48h] [rbp-41h] BYREF
  int v22; // [rsp+50h] [rbp-39h] BYREF
  GUID *v23; // [rsp+58h] [rbp-31h] BYREF
  __int64 v24; // [rsp+60h] [rbp-29h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+68h] [rbp-21h] BYREF
  char v26; // [rsp+70h] [rbp-19h]
  _BYTE pvar[28]; // [rsp+78h] [rbp-11h] BYREF
  int v28; // [rsp+94h] [rbp+Bh]

  v4 = a4;
  v20 = a4;
  v21 = 0LL;
  v22 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)&this[2];
  v26 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v8 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, &WPP_755387bd23fa3df5d8dd9259737f5712_Traceguids, this);
    v8 = WPP_GLOBAL_Control;
  }
  if ( !*(_DWORD *)this[4].Data4 || *(_DWORD *)this[4].Data4 == 6 )
  {
    *v4 = 1;
    *(_DWORD *)this[4].Data4 = 1;
    ThreadpoolWork = CreateThreadpoolWork(CMonitor::TerminateMonitorInWorkerThread, this, 0LL);
    *(_QWORD *)this[12].Data4 = ThreadpoolWork;
    if ( !ThreadpoolWork )
    {
      LastError = GetLastError();
      v12 = LastError;
      if ( LastError > 0 )
        v12 = (unsigned __int16)LastError | 0x80070000;
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          12LL,
          &WPP_755387bd23fa3df5d8dd9259737f5712_Traceguids,
          (unsigned int)v12);
      }
      if ( v12 >= 0 )
        goto LABEL_63;
      goto LABEL_58;
    }
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 13LL, &WPP_755387bd23fa3df5d8dd9259737f5712_Traceguids, this);
    }
    v12 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
            a2,
            &GUID_1be09788_6894_4089_8586_9a2a6c265ac5,
            &v21);
    if ( v12 >= 0 )
    {
      v12 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v21 + 24LL))(v21, &v22);
      if ( v12 >= 0 )
      {
        Data4 = this[6].Data4;
        v12 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64))a2->lpVtbl->Activate)(
                a2,
                &IID_IAudioClient,
                1LL);
        if ( v12 >= 0 )
        {
          v14 = this + 10;
          v12 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64))a3->lpVtbl->Activate)(
                  a3,
                  &IID_IAudioClient,
                  1LL);
          if ( v12 >= 0 )
          {
            ATL::CComQIPtr<IAudioClient2,&__s_GUID const _GUID_726778cd_f60a_4eda_82de_e47610cd78aa>::CComQIPtr<IAudioClient2,&__s_GUID const _GUID_726778cd_f60a_4eda_82de_e47610cd78aa>(
              &v19,
              *(_QWORD *)Data4);
            if ( !v19 )
              goto LABEL_40;
            memset(&pvar[4], 0, 24);
            v28 = 0;
            *(_DWORD *)pvar = 32;
            *(_DWORD *)&pvar[8] = *(_DWORD *)&this[5].Data2;
            *(_DWORD *)&pvar[20] = *(_DWORD *)this[5].Data4 != 0;
            v12 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v19 + 128LL))(v19, pvar);
            if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
              && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
            {
              WPP_SF_dd(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, &WPP_755387bd23fa3df5d8dd9259737f5712_Traceguids);
            }
            if ( v12 >= 0 )
            {
LABEL_40:
              ATL::CComQIPtr<IAudioClient2,&__s_GUID const _GUID_726778cd_f60a_4eda_82de_e47610cd78aa>::CComQIPtr<IAudioClient2,&__s_GUID const _GUID_726778cd_f60a_4eda_82de_e47610cd78aa>(
                &v18,
                *(_QWORD *)&v14->Data1);
              if ( !v18 )
                goto LABEL_47;
              memset(&pvar[4], 0, 24);
              v28 = 0;
              *(_DWORD *)pvar = 32;
              *(_DWORD *)&pvar[8] = this[5].Data1;
              v12 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v18 + 128LL))(v18, pvar);
              if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
                && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
                && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
              {
                WPP_SF_dd(*((_QWORD *)WPP_GLOBAL_Control + 2), 15LL, &WPP_755387bd23fa3df5d8dd9259737f5712_Traceguids);
              }
              if ( v12 >= 0 )
              {
LABEL_47:
                wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v18);
                wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v19);
                *v4 = 0;
                v15 = CMonitor::MuteInputLineControls(a2, a3);
                if ( v15 < 0
                  && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
                  && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
                  && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
                {
                  WPP_SF_d(
                    *((_QWORD *)WPP_GLOBAL_Control + 2),
                    16LL,
                    &WPP_755387bd23fa3df5d8dd9259737f5712_Traceguids,
                    (unsigned int)v15);
                }
                v12 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *))a2->lpVtbl->GetId)(a2, &this[6]);
                if ( v12 >= 0 )
                {
                  v12 = ((__int64 (__fastcall *)(struct IMMDevice *, unsigned __int8 *))a3->lpVtbl->GetId)(
                          a3,
                          this[9].Data4);
                  if ( v12 >= 0 )
                  {
                    v12 = (*(__int64 (__fastcall **)(_QWORD, GUID *))(**(_QWORD **)Data4 + 64LL))(
                            *(_QWORD *)Data4,
                            this + 7);
                    if ( v12 >= 0 )
                    {
                      v18 = 0LL;
                      v12 = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, __int64 *))a2->lpVtbl->OpenPropertyStore)(
                              a2,
                              0LL,
                              &v18);
                      if ( v12 < 0 )
                        goto LABEL_56;
                      memset(pvar, 0, 24);
                      v12 = (*(__int64 (__fastcall **)(__int64, void *, _BYTE *))(*(_QWORD *)v18 + 40LL))(
                              v18,
                              &PKEY_MonitorPauseOnBattery,
                              pvar);
                      if ( v12 < 0 )
                        goto LABEL_56;
                      if ( *(_WORD *)pvar == 11 )
                        this[4].Data4[5] = *(_WORD *)&pvar[8] == 0xFFFF;
                      PropVariantClear((PROPVARIANT *)pvar);
                      memset(pvar, 0, 24);
                      v12 = (*(__int64 (__fastcall **)(__int64, const PROPERTYKEY *, _BYTE *))(*(_QWORD *)v18 + 40LL))(
                              v18,
                              &PKEY_AudioEndpoint_GUID,
                              pvar);
                      if ( v12 < 0
                        || *(_WORD *)pvar == 31 && (v12 = CLSIDFromString(*(LPCOLESTR *)&pvar[8], this + 8), v12 < 0) )
                      {
LABEL_56:
                        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v18);
                      }
                      else
                      {
                        PropVariantClear((PROPVARIANT *)pvar);
                        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v18);
                        v24 = 0LL;
                        ATL::CComQIPtr<IAudioClientInternal,&__s_GUID const _GUID_59ea7369_26c3_4eb9_a3bb_4f7d9b0b6ccb>::CComQIPtr<IAudioClientInternal,&__s_GUID const _GUID_59ea7369_26c3_4eb9_a3bb_4f7d9b0b6ccb>(
                          &v19,
                          *(_QWORD *)Data4);
                        v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v19 + 48LL))(
                                v19,
                                *(_QWORD *)&this[7].Data1,
                                0LL,
                                &v24);
                        if ( v12 < 0
                          || (v12 = (*(__int64 (__fastcall **)(_QWORD, GUID *, unsigned __int8 *))(**(_QWORD **)Data4
                                                                                                 + 112LL))(
                                      *(_QWORD *)Data4,
                                      &GUID_f4b1a599_7266_4319_a8ca_e70acb11e8cd,
                                      this[7].Data4),
                              v12 < 0)
                          || (v23 = this,
                              LODWORD(v18) = 1,
                              v12 = Microsoft::WRL::Details::MakeAndInitialize<CMonitor::CMonitorNotification,CMonitor::CMonitorNotification,enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001,CMonitor *>(
                                      &this[9],
                                      &v18,
                                      &v23),
                              v12 < 0)
                          || (wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v19),
                              ATL::CComQIPtr<IAudioClientInternal,&__s_GUID const _GUID_59ea7369_26c3_4eb9_a3bb_4f7d9b0b6ccb>::CComQIPtr<IAudioClientInternal,&__s_GUID const _GUID_59ea7369_26c3_4eb9_a3bb_4f7d9b0b6ccb>(
                                &v19,
                                *(_QWORD *)&v14->Data1),
                              v12 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64))(*(_QWORD *)v19 + 56LL))(
                                      v19,
                                      this + 8,
                                      v24),
                              v12 < 0) )
                        {
                          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v19);
                        }
                        else
                        {
                          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v19);
                          v12 = (*(__int64 (__fastcall **)(_QWORD, GUID *, unsigned __int8 *))(**(_QWORD **)&this[10].Data1
                                                                                             + 112LL))(
                                  *(_QWORD *)&this[10].Data1,
                                  &GUID_f4b1a599_7266_4319_a8ca_e70acb11e8cd,
                                  this[10].Data4);
                          if ( v12 >= 0 )
                          {
                            v16 = *(void (__fastcall ****)(_QWORD, GUID *, __int64 *))this[10].Data4;
                            v17 = 0LL;
                            v19 = 0LL;
                            if ( v16 )
                            {
                              (**v16)(v16, &GUID_1167b081_0746_45f0_9ecd_97cc50de3a1f, &v19);
                              v17 = v19;
                            }
                            v18 = 0LL;
                            memset(pvar, 0, 24);
                            v12 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v17 + 168LL))(v17, &v18);
                            if ( v12 < 0
                              || (strcpy(pvar, "\v"),
                                  *(_WORD *)&pvar[8] = -1,
                                  v12 = (*(__int64 (__fastcall **)(__int64, void *, _BYTE *))(*(_QWORD *)v18 + 48LL))(
                                          v18,
                                          &PKEY_AudioSession_IsCaptureMonitorSession,
                                          pvar),
                                  v12 < 0)
                              || (memset(pvar, 0, 24),
                                  *(_WORD *)pvar = 31,
                                  *(_QWORD *)&pvar[8] = *(_QWORD *)&this[6].Data1,
                                  v12 = (*(__int64 (__fastcall **)(__int64, void *, _BYTE *))(*(_QWORD *)v18 + 48LL))(
                                          v18,
                                          &PKEY_AudioSession_CaptureMonitorEndpointId,
                                          pvar),
                                  v12 < 0) )
                            {
                              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v18);
                              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v19);
                            }
                            else
                            {
                              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v18);
                              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v19);
                              v23 = this;
                              LODWORD(v18) = 0;
                              v12 = Microsoft::WRL::Details::MakeAndInitialize<CMonitor::CMonitorNotification,CMonitor::CMonitorNotification,enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001,CMonitor *>(
                                      &this[11],
                                      &v18,
                                      &v23);
                              if ( v12 >= 0 )
                              {
                                v12 = CMonitor::SetSessionTitleAndIcon((CMonitor *)this, a2);
                                if ( v12 >= 0 )
                                {
                                  v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)this[7].Data4 + 80LL))(
                                          *(_QWORD *)this[7].Data4,
                                          *(_QWORD *)&this[9].Data1);
                                  if ( v12 >= 0 )
                                  {
                                    v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)this[10].Data4 + 80LL))(
                                            *(_QWORD *)this[10].Data4,
                                            *(_QWORD *)&this[11].Data1);
                                    if ( v12 >= 0 )
                                    {
                                      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
                                        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
                                        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                                      {
                                        WPP_SF_(
                                          *((_QWORD *)WPP_GLOBAL_Control + 2),
                                          17LL,
                                          &WPP_755387bd23fa3df5d8dd9259737f5712_Traceguids);
                                      }
                                      *(_DWORD *)this[4].Data4 = 2;
                                      this[4].Data4[4] = 0;
                                      goto LABEL_63;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    v4 = v20;
                  }
                }
                goto LABEL_58;
              }
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v18);
            }
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v19);
          }
        }
      }
    }
LABEL_58:
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_qD(*((_QWORD *)WPP_GLOBAL_Control + 2), 18LL, &WPP_755387bd23fa3df5d8dd9259737f5712_Traceguids, this, v12);
    }
    this[4].Data4[4] = 1;
    *(_DWORD *)this[4].Data4 = *v4 ? 7 : 0;
LABEL_63:
    ATL::CCritSecLock::~CCritSecLock((ATL::CCritSecLock *)&lpCriticalSection);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v21);
    return (unsigned int)v12;
  }
  if ( v8 != &WPP_GLOBAL_Control && (*((_DWORD *)v8 + 7) & 0x800000) != 0 && *((_BYTE *)v8 + 25) >= 2u )
    WPP_SF_(v8[2], 11LL, &WPP_755387bd23fa3df5d8dd9259737f5712_Traceguids);
  *v4 = 0;
  if ( v26 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  return 2147500037LL;
}
