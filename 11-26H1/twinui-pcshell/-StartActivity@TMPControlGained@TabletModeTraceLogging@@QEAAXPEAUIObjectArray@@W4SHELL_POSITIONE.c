/*
 * XREFs of ?StartActivity@TMPControlGained@TabletModeTraceLogging@@QEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@@Z @ 0x18051C048
 * Callers:
 *     ?ControlGained@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@@Z @ 0x1805168F0 (-ControlGained@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknow.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@4@Z @ 0x180001C50 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U2@@-$_tlgWriteTempl.c)
 *     ?EnsureWatchingCurrentThread@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180015874 (-EnsureWatchingCurrentThread@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDA.c)
 *     ?_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z @ 0x180043BF8 (-_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180046480 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetTelemetryIdForView@ApplicationViewTraceLoggingHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z @ 0x1800705CC (-GetTelemetryIdForView@ApplicationViewTraceLoggingHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x1800714CC (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?zInternalStart@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18007B158 (-zInternalStart@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0.c)
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18007B218 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall TabletModeTraceLogging::TMPControlGained::StartActivity(__int64 a1, __int64 a2)
{
  const WCHAR *v4; // r14
  int (__fastcall *v5)(__int64, _QWORD, GUID *, __int64 *); // rbx
  __int64 *v6; // rax
  unsigned __int16 **v7; // r8
  __int64 v8; // rcx
  const struct _tlgProvider_t *v9; // rbx
  const WCHAR *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rcx
  const WCHAR *v13; // [rsp+40h] [rbp-30h] BYREF
  __int64 v14; // [rsp+48h] [rbp-28h] BYREF
  const WCHAR *v15; // [rsp+50h] [rbp-20h] BYREF
  __int64 v16; // [rsp+58h] [rbp-18h]
  __int64 v17; // [rsp+60h] [rbp-10h]
  DWORD CurrentThreadId; // [rsp+A8h] [rbp+38h] BYREF
  ApplicationViewTraceLoggingHelpers *v19; // [rsp+B8h] [rbp+48h] BYREF

  v4 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v19 = 0LL;
  v5 = *(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)a2 + 32LL);
  v6 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)&v19);
  if ( v5(a2, 0LL, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v6) >= 0 )
  {
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v15);
    v16 = -1LL;
    v17 = -1LL;
    ApplicationViewTraceLoggingHelpers::GetTelemetryIdForView(v19, (struct IApplicationView *)&v15, v7);
    v4 = v15;
  }
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(a1);
  v9 = WindowManagementLogging::Provider(v8);
  if ( *(_DWORD *)v9 > 5u )
  {
    v10 = &pvData;
    if ( v4 )
      v10 = v4;
    v13 = v10;
    CurrentThreadId = GetCurrentThreadId();
    v14 = 0LL;
    v11 = *(_QWORD *)(a1 + 272);
    if ( !*(_BYTE *)(v11 + 4) || _tlgGuidIsZero((const struct _GUID *)(v11 + 24)) )
      v12 = 0LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
      (__int64)v9,
      (__int64)&unk_18081A67D,
      v11 + 8,
      v12,
      (__int64)&v14,
      (__int64)&CurrentThreadId,
      &v13);
  }
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,2197815296,_TlgReflectorTag_Param0IsProviderType>::EnsureWatchingCurrentThread(a1);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v19);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v15);
}
