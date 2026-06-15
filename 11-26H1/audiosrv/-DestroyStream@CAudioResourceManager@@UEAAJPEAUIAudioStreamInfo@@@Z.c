/*
 * XREFs of ?DestroyStream@CAudioResourceManager@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x1800C6FB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180016090 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?QueueRecurringItem@CSerialWorkQueue@@QEAAJKKV?$function@$$A6AXXZ@std@@AEAV?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@3@@Z @ 0x18001B6E0 (-QueueRecurringItem@CSerialWorkQueue@@QEAAJKKV-$function@$$A6AXXZ@std@@AEAV-$unique_ptr@U_Recurr.c)
 *     ??1?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D260 (--1-$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x18001D6C8 (--0-$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x18001DBC0 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?GetSerialWorkQueue@@YAAEAVCSerialWorkQueue@@XZ @ 0x180040624 (-GetSerialWorkQueue@@YAAEAVCSerialWorkQueue@@XZ.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005759C (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18005A59C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate.c)
 *     ?reset@?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005D98C (-reset@-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BCFBC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CAudioResourceManager::DestroyStream(CAudioResourceManager *this, struct IAudioStreamInfo *a2)
{
  __int64 v4; // rax
  int (__fastcall *v5)(struct IAudioStreamInfo *, __int64 *); // rbx
  _DWORD *v6; // rbx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 (__fastcall *v9)(struct IAudioStreamInfo *, __int64 *); // rbx
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, __int64 *); // rdi
  int v14; // eax
  unsigned int v15; // r14d
  __int64 v16; // rax
  const unsigned __int16 *v17; // rax
  RTL_SRWLOCK *v18; // rcx
  struct CEndpointStore *v19; // rbx
  bool v20; // di
  volatile signed __int32 *v21; // rax
  __int64 v22; // r8
  __int64 v23; // r10
  int v24; // eax
  const char *v25; // r9
  struct CEndpointStore *v27; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+48h] [rbp-A0h] BYREF
  __int64 v29; // [rsp+50h] [rbp-98h] BYREF
  int v30[2]; // [rsp+58h] [rbp-90h] BYREF
  char *v31; // [rsp+60h] [rbp-88h]
  volatile signed __int32 *v32; // [rsp+68h] [rbp-80h] BYREF
  bool v33; // [rsp+70h] [rbp-78h]
  _QWORD v34[3]; // [rsp+80h] [rbp-68h] BYREF
  bool v35; // [rsp+98h] [rbp-50h]
  _QWORD *v36; // [rsp+B8h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]
  unsigned int v38; // [rsp+F8h] [rbp+10h] BYREF
  __int64 v39; // [rsp+100h] [rbp+18h] BYREF
  __int64 v40; // [rsp+108h] [rbp+20h] BYREF

  v29 = 0LL;
  v4 = *(_QWORD *)a2;
  v28 = 0LL;
  if ( (*(int (__fastcall **)(struct IAudioStreamInfo *, __int64 *))(v4 + 32))(a2, &v28) >= 0 )
  {
    if ( v28 )
    {
      v5 = *(int (__fastcall **)(struct IAudioStreamInfo *, __int64 *))(*(_QWORD *)a2 + 24LL);
      wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::reset(&v29);
      if ( v5(a2, &v29) >= 0 )
      {
        if ( v28 )
        {
          v6 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
          if ( *v6 > 4u )
          {
            v38 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v29 + 40LL))(v29);
            v27 = (struct CEndpointStore *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 64LL))(v28);
            *(_QWORD *)v30 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 80LL))(a2);
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
              (__int64)v6,
              byte_1801A37F1,
              v7,
              v8,
              (__int64)v30,
              (const wchar_t **)&v27,
              (__int64)&v38);
          }
        }
      }
    }
  }
  v40 = 0LL;
  v9 = *(__int64 (__fastcall **)(struct IAudioStreamInfo *, __int64 *))(*(_QWORD *)a2 + 128LL);
  wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(&v40);
  v10 = v9(a2, &v40);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v39 = 0LL;
    v12 = v40;
    v13 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v40 + 64LL);
    wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(&v39);
    v14 = v13(v12, &v39);
    v11 = v14;
    if ( v14 >= 0 )
    {
      v15 = (*(__int64 (__fastcall **)(__int64, struct IAudioStreamInfo *))(*(_QWORD *)v40 + 32LL))(v40, a2);
      v38 = v15;
      if ( (*(unsigned __int8 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 136LL))(a2)
        || (*(unsigned __int8 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 144LL))(a2) )
      {
        v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v39 + 152LL))(v39);
        AudioPolicyManagerExtension_OnPreMatchFormatStateChange(v16, 0LL);
      }
      if ( (*(unsigned __int8 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 144LL))(a2)
        || (*(unsigned __int8 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 136LL))(a2)
        || (*(unsigned __int8 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 152LL))(a2) )
      {
        try
        {
          v27 = 0LL;
          v17 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v39 + 152LL))(v39);
          if ( (int)CEndpointStoreCache::GetEndpointStore(v18, v17, &v27) >= 0 )
          {
            v19 = v27;
            if ( v27 )
            {
              EnterCriticalSection((LPCRITICAL_SECTION)((char *)v27 + 48));
              *(_QWORD *)v30 = (char *)v19 + 48;
              v20 = (*(unsigned __int8 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 144LL))(a2)
                 || (*(unsigned __int8 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 136LL))(a2);
              GetSerialWorkQueue();
              v31 = (char *)this - 8;
              wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::com_ptr_t<CEndpointStore,wil::err_returncode_policy>(
                &v32,
                (volatile int *)&v27);
              v33 = v20;
              v34[0] = off_180175098;
              v34[1] = v31;
              v21 = v32;
              v32 = 0LL;
              v34[2] = v21;
              v35 = v20;
              v36 = v34;
              v24 = CSerialWorkQueue::QueueRecurringItem(
                      v23,
                      g_TimeoutRevertAudioPumpFormatAndPeriodInMs,
                      v22,
                      v34,
                      (char *)v19 + 88);
              if ( v24 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  1985LL,
                  (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                  (const char *)(unsigned int)v24);
              wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>(&v32);
              wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>((struct _RTL_CRITICAL_SECTION **)v30);
            }
          }
          wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((volatile signed __int32 **)&v27);
        }
        catch ( ... )
        {
          wil::details::in1diag3::Log_CaughtException(
            retaddr,
            (void *)0x7C4,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
            v25);
          v15 = v38;
        }
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v39);
      v11 = v15;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7A6,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v14);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v39);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7A2,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v10);
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v40);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v29);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v28);
  return v11;
}
