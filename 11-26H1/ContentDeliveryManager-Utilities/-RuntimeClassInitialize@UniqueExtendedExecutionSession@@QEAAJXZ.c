/*
 * XREFs of ?RuntimeClassInitialize@UniqueExtendedExecutionSession@@QEAAJXZ @ 0x180090858
 * Callers:
 *     ??$MakeAndInitialize@VUniqueExtendedExecutionSession@@UIInspectable@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@@Z @ 0x18008DF18 (--$MakeAndInitialize@VUniqueExtendedExecutionSession@@UIInspectable@@$$V@Details@WRL@Microsoft@@.c)
 * Callees:
 *     memcmp_0 @ 0x180021E99 (memcmp_0.c)
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180029CB0 (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002E084 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A530 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E0D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18006BAE0 (-reset@-$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$Callback@U?$ITypedEventHandler@PEAUIInspectable@@PEAVExtendedExecutionRevokedEventArgs@ExtendedExecution@ApplicationModel@Windows@@@Foundation@Windows@@V_lambda_798ec8630cdce9ee98b03af562801a4a_@@@WRL@Microsoft@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAUIInspectable@@PEAVExtendedExecutionRevokedEventArgs@ExtendedExecution@ApplicationModel@Windows@@@Foundation@Windows@@@01@$$QEAV_lambda_798ec8630cdce9ee98b03af562801a4a_@@@Z @ 0x18008DC38 (--$Callback@U-$ITypedEventHandler@PEAUIInspectable@@PEAVExtendedExecutionRevokedEventArgs@Extend.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@W4ExtendedExecutionResult@ExtendedExecution@ApplicationModel@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@W4ExtendedExecutionResult@ExtendedExecution@ApplicationModel@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x18008E150 (--$WaitForCompletion@PEAU-$IAsyncOperation@W4ExtendedExecutionResult@ExtendedExecution@Applicati.c)
 *     ??0_lambda_798ec8630cdce9ee98b03af562801a4a_@@QEAA@AEBQEAVUniqueExtendedExecutionSession@@AEBQ81@EAAJPEAUIInspectable@@PEAUIExtendedExecutionRevokedEventArgs@ExtendedExecution@ApplicationModel@Windows@@@Z@Z @ 0x18008E388 (--0_lambda_798ec8630cdce9ee98b03af562801a4a_@@QEAA@AEBQEAVUniqueExtendedExecutionSession@@AEBQ81.c)
 *     ??0?$ActivityBase@VCDMUtilsUnlockLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18008E3A4 (--0-$ActivityBase@VCDMUtilsUnlockLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ??1ExtendedExecutionRequested@CDMUtilsUnlockTelemetry@@QEAA@XZ @ 0x18008EB94 (--1ExtendedExecutionRequested@CDMUtilsUnlockTelemetry@@QEAA@XZ.c)
 *     ?CloseSession@UniqueExtendedExecutionSession@@AEAAX_N@Z @ 0x18008EEE0 (-CloseSession@UniqueExtendedExecutionSession@@AEAAX_N@Z.c)
 *     ?StartActivity@ExtendedExecutionRequested@CDMUtilsUnlockTelemetry@@QEAAXXZ @ 0x180090D58 (-StartActivity@ExtendedExecutionRequested@CDMUtilsUnlockTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VCDMUtilsUnlockLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180090E40 (-Stop@-$ActivityBase@VCDMUtilsUnlockLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall UniqueExtendedExecutionSession::RuntimeClassInitialize(struct IUnknown *this)
{
  struct IUnknown *v2; // rsi
  int v3; // ebx
  unsigned __int64 v4; // r9
  __int64 v5; // rdx
  int v6; // eax
  struct IUnknownVtbl *lpVtbl; // rdi
  __int64 (__fastcall *v8)(struct IUnknownVtbl *, __int64); // rbx
  __int64 v9; // rax
  __int64 v10; // rbx
  int v11; // eax
  int v12; // edi
  struct IUnknownVtbl *v13; // rcx
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rax
  int v15; // eax
  DWORD v16; // edx
  int v17; // r8d
  __int64 (__fastcall ***v18)(_QWORD, GUID *, __int64 *); // rdi
  int v19; // eax
  int v21[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 (__fastcall ***v22)(_QWORD, GUID *, __int64 *); // [rsp+28h] [rbp-D8h] BYREF
  __int128 v23; // [rsp+30h] [rbp-D0h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v25; // [rsp+58h] [rbp-A8h]
  _QWORD v26[42]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+D8h]

  wil::ActivityBase<CDMUtilsUnlockLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CDMUtilsUnlockLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v26);
  v26[0] = &CDMUtilsUnlockTelemetry::ExtendedExecutionRequested::`vftable';
  CDMUtilsUnlockTelemetry::ExtendedExecutionRequested::StartActivity((CDMUtilsUnlockTelemetry::ExtendedExecutionRequested *)v26);
  v2 = this + 8;
  wil::com_ptr_t<IInspectable,wil::err_exception_policy>::reset((__int64 *)&this[8]);
  v25 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.ApplicationModel.ExtendedExecution.ExtendedExecutionSession",
    0x44u,
    0x43u);
  this[8].lpVtbl = 0LL;
  *(_QWORD *)v21 = 0LL;
  v3 = RoActivateInstance(v25, v21);
  if ( v3 >= 0 )
  {
    if ( !memcmp_0(&GUID_af908a2d_118b_48f1_9308_0c4fc41e200f, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, 0x10uLL) )
    {
      v2->lpVtbl = *(struct IUnknownVtbl **)v21;
    }
    else
    {
      v3 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, struct IUnknown *))v21)(
             *(_QWORD *)v21,
             &GUID_af908a2d_118b_48f1_9308_0c4fc41e200f,
             this + 8);
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v21 + 16LL))(*(_QWORD *)v21);
    }
  }
  if ( v3 < 0 )
  {
    v4 = (unsigned int)v3;
    v5 = 125LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\unlockactionhelper.cpp",
      (const char *)v4);
LABEL_29:
    CDMUtilsUnlockTelemetry::ExtendedExecutionRequested::~ExtendedExecutionRequested((CDMUtilsUnlockTelemetry::ExtendedExecutionRequested *)v26);
    return (unsigned int)v3;
  }
  v6 = (*((__int64 (__fastcall **)(struct IUnknownVtbl *, _QWORD))v2->lpVtbl->QueryInterface + 7))(v2->lpVtbl, 0LL);
  v3 = v6;
  if ( v6 < 0 )
  {
    v5 = 126LL;
LABEL_9:
    v4 = (unsigned int)v6;
    goto LABEL_10;
  }
  lpVtbl = v2->lpVtbl;
  v8 = (__int64 (__fastcall *)(struct IUnknownVtbl *, __int64))*((_QWORD *)v2->lpVtbl->QueryInterface + 9);
  v25 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"UnlockActionHelper", 0x13u, 0x12u);
  v6 = v8(lpVtbl, v25);
  v3 = v6;
  if ( v6 < 0 )
  {
    v5 = 127LL;
    goto LABEL_9;
  }
  *(_QWORD *)&v23 = UniqueExtendedExecutionSession::OnSessionRevoked;
  DWORD2(v23) = 0;
  *(_QWORD *)v21 = this;
  v9 = _lambda_798ec8630cdce9ee98b03af562801a4a_::_lambda_798ec8630cdce9ee98b03af562801a4a_(
         (__int64)&hstringHeader,
         v21,
         &v23);
  Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionRevokedEventArgs *>,_lambda_798ec8630cdce9ee98b03af562801a4a_>(
    (__int64 *)&v23,
    v9);
  v10 = v23;
  v11 = (*((__int64 (__fastcall **)(struct IUnknownVtbl *, _QWORD, struct IUnknown *))v2->lpVtbl->QueryInterface + 12))(
          v2->lpVtbl,
          v23,
          this + 9);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x82,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\unlockactionhelper.cpp",
      (const char *)(unsigned int)v11);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
LABEL_28:
    v3 = v12;
    goto LABEL_29;
  }
  v22 = 0LL;
  v13 = v2->lpVtbl;
  QueryInterface = v2->lpVtbl->QueryInterface;
  v22 = 0LL;
  v15 = (*((__int64 (__fastcall **)(struct IUnknownVtbl *, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))QueryInterface
         + 14))(
          v13,
          &v22);
  v12 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x85,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\unlockactionhelper.cpp",
      (const char *)(unsigned int)v15);
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v22);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    goto LABEL_28;
  }
  v18 = v22;
  v21[0] = 0;
  v19 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<enum Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionResult> *>(
          v22,
          v16,
          v17);
  if ( v19 >= 0 )
    v19 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), int *))(*v18)[8])(v18, v21);
  if ( v19 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      1819LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/winrt.h",
      (const char *)(unsigned int)v19,
      v21[0]);
  if ( v21[0] )
  {
    UniqueExtendedExecutionSession::CloseSession(this, 0);
    v12 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8A,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\unlockactionhelper.cpp",
      (const char *)0x8000FFFFLL);
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v22);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    goto LABEL_28;
  }
  wil::ActivityBase<CDMUtilsUnlockLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v26);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v22);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  CDMUtilsUnlockTelemetry::ExtendedExecutionRequested::~ExtendedExecutionRequested((CDMUtilsUnlockTelemetry::ExtendedExecutionRequested *)v26);
  return 0LL;
}
