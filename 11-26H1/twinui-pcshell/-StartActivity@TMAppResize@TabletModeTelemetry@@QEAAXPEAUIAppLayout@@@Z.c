/*
 * XREFs of ?StartActivity@TMAppResize@TabletModeTelemetry@@QEAAXPEAUIAppLayout@@@Z @ 0x18052E7E8
 * Callers:
 *     ?Show@AppResizeView@@UEAAJAEBUtagPOINT@@@Z @ 0x18052E630 (-Show@AppResizeView@@UEAAJAEBUtagPOINT@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800186C4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z @ 0x180043BF8 (-_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z.c)
 *     ?zInternalStart@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18007B020 (-zInternalStart@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflector.c)
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18007B218 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180089CE8 (_tlgKeywordOn.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TabletModeTelemetry::TMAppResize::StartActivity(
        TabletModeTelemetry::TMAppResize *this,
        struct IAppLayout *a2)
{
  int v4; // ebx
  int v5; // edi
  int v6; // eax
  int (__fastcall *v7)(struct IAppLayout *, _QWORD, GUID *, __int64 *); // rbx
  __int64 v8; // rcx
  const struct _tlgProvider_t *v9; // rax
  __int64 v10; // rbx
  __int64 v11; // r8
  const GUID *v12; // rcx
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF
  DWORD CurrentThreadId; // [rsp+68h] [rbp+10h] BYREF
  __int64 v15; // [rsp+70h] [rbp+18h] BYREF

  v4 = (*(__int64 (__fastcall **)(struct IAppLayout *, __int64))(*(_QWORD *)a2 + 80LL))(a2, 1LL);
  v5 = 4;
  v6 = (*(__int64 (__fastcall **)(struct IAppLayout *, __int64))(*(_QWORD *)a2 + 80LL))(a2, 4LL);
  if ( v4 == 1 )
  {
    if ( v6 )
    {
      v5 = 3;
      v13 = 0LL;
      v7 = *(int (__fastcall **)(struct IAppLayout *, _QWORD, GUID *, __int64 *))(*(_QWORD *)a2 + 96LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
      if ( v7(a2, 0LL, &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, &v13) >= 0
        && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v13 + 24LL))(v13) == 1 )
      {
        v5 = 2;
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
    }
    else
    {
      v5 = 1;
    }
  }
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart((__int64)this);
  v9 = WindowManagementLogging::Provider(v8);
  v10 = (__int64)v9;
  if ( *(_DWORD *)v9 > 5u && tlgKeywordOn((__int64)v9, 0x400000000000LL) )
  {
    LODWORD(v13) = v5;
    CurrentThreadId = GetCurrentThreadId();
    v15 = 0LL;
    v11 = *((_QWORD *)this + 34);
    if ( !*(_BYTE *)(v11 + 4) || _tlgGuidIsZero((const struct _GUID *)(v11 + 24)) )
      v12 = 0LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v10,
      byte_18081C273,
      (const GUID *)(v11 + 8),
      v12,
      (__int64)&v15,
      (__int64)&CurrentThreadId,
      (__int64)&v13);
  }
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,2197815296,_TlgReflectorTag_Param0IsProviderType>::EnsureWatchingCurrentThread((__int64)this);
}
