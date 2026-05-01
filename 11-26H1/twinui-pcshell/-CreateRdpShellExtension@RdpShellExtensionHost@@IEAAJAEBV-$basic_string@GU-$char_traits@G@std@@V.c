/*
 * XREFs of ?CreateRdpShellExtension@RdpShellExtensionHost@@IEAAJAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180673F2C
 * Callers:
 *     ?ProcessAllRdpShellExtensions@RdpShellExtensionHost@@IEAAJXZ @ 0x180674490 (-ProcessAllRdpShellExtensions@RdpShellExtensionHost@@IEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x18016F55C (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?InternalRelease@?$ComPtr@UIUpdateViewValueSet@@@WRL@Microsoft@@IEAAKXZ @ 0x180297034 (-InternalRelease@-$ComPtr@UIUpdateViewValueSet@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802C6380 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_TP_WORK@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolWork@$01@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180401CD8 (--1-$unique_storage@U-$resource_policy@PEAU_TP_WORK@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThreadPoolW.c)
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@@std@@@std@@AEAAPEAV?$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x180673244 (--$_Emplace_reallocate@AEBV-$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UIR.c)
 *     ?Provider@RdpShellExtensionHostTelemetry@@SAPEBU_tlgProvider_t@@XZ @ 0x180674A5C (-Provider@RdpShellExtensionHostTelemetry@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?push_back@?$vector@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_TP_WORK@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolWork@$01@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@V?$allocator@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_TP_WORK@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolWork@$01@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@std@@@std@@QEAAX$$QEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_TP_WORK@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolWork@$01@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180675130 (-push_back@-$vector@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_TP_WORK@@P6AXPEAU1.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall RdpShellExtensionHost::CreateRdpShellExtension(__int64 a1, const WCHAR *a2)
{
  const WCHAR *v4; // rcx
  int v5; // eax
  unsigned int v6; // edi
  __int64 result; // rax
  struct _TP_WORK *ThreadpoolWork; // rax
  const char *v9; // r9
  unsigned int LastError; // ebx
  PVOID *v11; // rdx
  PVOID v12; // rcx
  const struct _tlgProvider_t *v13; // rax
  __int64 v14; // r9
  const char *v15; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  PVOID pv; // [rsp+58h] [rbp+10h] BYREF
  struct _TP_WORK *v18; // [rsp+60h] [rbp+18h] BYREF
  const WCHAR *v19; // [rsp+68h] [rbp+20h] BYREF

  pv = 0LL;
  Microsoft::WRL::ComPtr<IUpdateViewValueSet>::InternalRelease((__int64 *)&pv);
  v4 = a2;
  if ( *((_QWORD *)a2 + 3) > 7uLL )
    v4 = *(const WCHAR **)a2;
  v5 = SHExtCoCreateInstanceString(v4, 0LL, 1LL, &GUID_9b5f3d30_cec8_4526_8ebd_99856b0a30ce, &pv);
  v6 = v5;
  if ( v5 >= 0 )
  {
    ThreadpoolWork = CreateThreadpoolWork(
                       (PTP_WORK_CALLBACK)lambda_60171be431ab7e306603b28a1d6e78d6_::_lambda_invoker_cdecl_,
                       pv,
                       (PTP_CALLBACK_ENVIRON)(a1 + 104));
    v18 = ThreadpoolWork;
    if ( ThreadpoolWork )
    {
      SubmitThreadpoolWork(ThreadpoolWork);
      try
      {
        v11 = *(PVOID **)(a1 + 184);
        if ( v11 == *(PVOID **)(a1 + 192) )
        {
          std::vector<Microsoft::WRL::ComPtr<IRdpShellExtension>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IRdpShellExtension> const &>(
            (_QWORD *)(a1 + 176),
            (__int64)v11,
            (__int64 *)&pv);
        }
        else
        {
          v12 = pv;
          *v11 = pv;
          if ( v12 )
            (*(void (__fastcall **)(PVOID))(*(_QWORD *)v12 + 8LL))(v12);
          *(_QWORD *)(a1 + 184) += 8LL;
        }
        std::vector<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_TP_WORK *,void (*)(_TP_WORK *),&public: static void wil::details::DestroyThreadPoolWork<2>::Destroy(_TP_WORK *),wistd::integral_constant<unsigned __int64,0>,_TP_WORK *,_TP_WORK *,0,std::nullptr_t>>>>::push_back(
          a1 + 200,
          &v18);
        v13 = RdpShellExtensionHostTelemetry::Provider();
        if ( *(_DWORD *)v13 > 4u )
        {
          if ( *((_QWORD *)a2 + 3) > 7uLL )
            a2 = *(const WCHAR **)a2;
          v19 = a2;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
            (__int64)v13,
            byte_18082EA2E,
            0LL,
            v14,
            &v19);
        }
        wil::details::unique_storage<wil::details::resource_policy<_TP_WORK *,void (*)(_TP_WORK *),&public: static void wil::details::DestroyThreadPoolWork<2>::Destroy(_TP_WORK *),wistd::integral_constant<unsigned __int64,0>,_TP_WORK *,_TP_WORK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_TP_WORK *,void (*)(_TP_WORK *),&public: static void wil::details::DestroyThreadPoolWork<2>::Destroy(_TP_WORK *),wistd::integral_constant<unsigned __int64,0>,_TP_WORK *,_TP_WORK *,0,std::nullptr_t>>(&v18);
        Microsoft::WRL::ComPtr<IUpdateViewValueSet>::InternalRelease((__int64 *)&pv);
        result = 0LL;
      }
      catch ( ... )
      {
        return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                               retaddr,
                               (void *)0xA5,
                               (int)"pcshell\\twinui\\rdpshellextensionhost\\lib\\rdpshellextensionhost.cpp",
                               v15);
      }
    }
    else
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x98,
                    (__int64)"pcshell\\twinui\\rdpshellextensionhost\\lib\\rdpshellextensionhost.cpp",
                    v9);
      wil::details::unique_storage<wil::details::resource_policy<_TP_WORK *,void (*)(_TP_WORK *),&public: static void wil::details::DestroyThreadPoolWork<2>::Destroy(_TP_WORK *),wistd::integral_constant<unsigned __int64,0>,_TP_WORK *,_TP_WORK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_TP_WORK *,void (*)(_TP_WORK *),&public: static void wil::details::DestroyThreadPoolWork<2>::Destroy(_TP_WORK *),wistd::integral_constant<unsigned __int64,0>,_TP_WORK *,_TP_WORK *,0,std::nullptr_t>>(&v18);
      Microsoft::WRL::ComPtr<IUpdateViewValueSet>::InternalRelease((__int64 *)&pv);
      return LastError;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x87,
      (int)"pcshell\\twinui\\rdpshellextensionhost\\lib\\rdpshellextensionhost.cpp",
      (const char *)(unsigned int)v5);
    Microsoft::WRL::ComPtr<IUpdateViewValueSet>::InternalRelease((__int64 *)&pv);
    return v6;
  }
  return result;
}
