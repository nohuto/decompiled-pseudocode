/*
 * XREFs of ?HandleDefaultDeviceChanges@CaptureMonitor@CMonitorManager@@QEAAJXZ @ 0x18011D81C
 * Callers:
 *     ?DoHandleDefaultDeviceChanged@CMonitorManager@@AEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEBG@Z @ 0x1800601A8 (-DoHandleDefaultDeviceChanged@CMonitorManager@@AEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_00.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800160F8 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180053ED0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     WPP_SF_d @ 0x1800CCA44 (WPP_SF_d.c)
 *     ?Initialize@CaptureMonitor@CMonitorManager@@QEAAJPEAUICapabilityUsageSession@Management@CapabilityAccess@Internal@Windows@@@Z @ 0x18011E32C (-Initialize@CaptureMonitor@CMonitorManager@@QEAAJPEAUICapabilityUsageSession@Management@Capabili.c)
 *     ?UninitializeSynchronously@CaptureMonitor@CMonitorManager@@QEAAXXZ @ 0x1801202A0 (-UninitializeSynchronously@CaptureMonitor@CMonitorManager@@QEAAXXZ.c)
 *     ?Start@CMonitor@@QEAAJXZ @ 0x1801221D8 (-Start@CMonitor@@QEAAJXZ.c)
 *     ?Stop@CMonitor@@QEAAXXZ @ 0x18012253C (-Stop@CMonitor@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CMonitorManager::CaptureMonitor::HandleDefaultDeviceChanges(CMonitorManager::CaptureMonitor *this)
{
  int v2; // r14d
  char *v3; // r15
  __int64 v4; // rbx
  int (__fastcall *v5)(__int64, void **); // rdi
  _QWORD *v6; // rcx
  __int64 v7; // rbx
  int (__fastcall *v8)(__int64, void **); // rdi
  _QWORD *v9; // rcx
  _QWORD *v10; // rcx
  unsigned __int16 v11; // dx
  void *v13; // [rsp+70h] [rbp+38h] BYREF
  void *v14; // [rsp+78h] [rbp+40h] BYREF
  __int64 v15; // [rsp+80h] [rbp+48h] BYREF
  __int64 v16; // [rsp+88h] [rbp+50h] BYREF

  v2 = 0;
  v16 = 0LL;
  v15 = 0LL;
  v14 = 0LL;
  v13 = 0LL;
  v3 = (char *)this + 200;
  if ( !*((_QWORD *)this + 9) )
  {
    if ( (*(int (__fastcall **)(_QWORD, __int64, _QWORD, __int64 *))(**(_QWORD **)(*(_QWORD *)v3 + 64LL) + 32LL))(
           *(_QWORD *)(*(_QWORD *)v3 + 64LL),
           1LL,
           0LL,
           &v16) < 0 )
      goto LABEL_25;
    v4 = v16;
    v5 = *(int (__fastcall **)(__int64, void **))(*(_QWORD *)v16 + 40LL);
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      &v14,
      0LL);
    if ( v5(v4, &v14) < 0 )
      goto LABEL_25;
    v6 = (_QWORD *)((char *)this + 136);
    if ( *((_QWORD *)this + 20) > 7uLL )
      v6 = (_QWORD *)*v6;
    if ( (unsigned int)_o__wcsnicmp(v6, v14, *((_QWORD *)this + 19)) )
      goto LABEL_13;
  }
  if ( !*((_QWORD *)this + 13)
    && (*(int (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64 *))(**(_QWORD **)(*(_QWORD *)v3 + 64LL) + 32LL))(
         *(_QWORD *)(*(_QWORD *)v3 + 64LL),
         0LL,
         0LL,
         &v15) >= 0 )
  {
    v7 = v15;
    v8 = *(int (__fastcall **)(__int64, void **))(*(_QWORD *)v15 + 40LL);
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      &v13,
      0LL);
    if ( v8(v7, &v13) >= 0 )
    {
      v9 = (_QWORD *)((char *)this + 168);
      if ( *((_QWORD *)this + 24) > 7uLL )
        v9 = (_QWORD *)*v9;
      if ( (unsigned int)_o__wcsnicmp(v9, v13, *((_QWORD *)this + 23)) )
      {
LABEL_13:
        CMonitor::Stop(*((CMonitor **)this + 26));
        CMonitorManager::CaptureMonitor::UninitializeSynchronously(this);
        v2 = CMonitorManager::CaptureMonitor::Initialize(this, 0LL);
        if ( v2 >= 0 )
        {
          if ( *((_BYTE *)this + 49) )
          {
            v2 = CMonitor::Start(*((CMonitor **)this + 26));
            if ( v2 < 0 )
            {
              v10 = WPP_GLOBAL_Control;
              if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
                && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
                && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
              {
                v11 = 65;
                goto LABEL_24;
              }
            }
          }
        }
        else
        {
          v10 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
          {
            v11 = 64;
LABEL_24:
            WPP_SF_d(v10[2], v11, (__int64)&WPP_72c9fd82aa603dc17c55ee7407a1fef9_Traceguids, v2);
          }
        }
      }
    }
  }
LABEL_25:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v13);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v14);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v15);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v16);
  return (unsigned int)v2;
}
