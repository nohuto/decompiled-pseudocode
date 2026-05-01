/*
 * XREFs of ?StartActivity@FSMSetSystemOverlaysMode@FullScreenManagerTelemetry@@QEAAXPEAUIImmersiveApplication@@W4FULL_SCREEN_OVERLAYS@@@Z @ 0x180324398
 * Callers:
 *     ?SetSystemOverlaysMode@CFullScreenManager@@UEAAJPEAUIImmersiveApplication@@W4FULL_SCREEN_OVERLAYS@@@Z @ 0x180323DD0 (-SetSystemOverlaysMode@CFullScreenManager@@UEAAJPEAUIImmersiveApplication@@W4FULL_SCREEN_OVERLAY.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@4@Z @ 0x180001C50 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U2@@-$_tlgWriteTempl.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z @ 0x180043BF8 (-_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180045690 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x1800714CC (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18007B218 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180089CE8 (_tlgKeywordOn.c)
 *     ?LockExclusive@?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18021E35C (-LockExclusive@-$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgRefl.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall FullScreenManagerTelemetry::FSMSetSystemOverlaysMode::StartActivity(__int64 a1, __int64 a2, int a3)
{
  void (__fastcall *v6)(__int64, __int64 *); // rbx
  __int64 v7; // rbx
  __int64 v8; // rcx
  const struct _tlgProvider_t *v9; // rax
  __int64 v10; // rcx
  const struct _tlgProvider_t *v11; // rax
  __int64 v12; // rbx
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // [rsp+40h] [rbp-20h] BYREF
  __int64 v16; // [rsp+48h] [rbp-18h] BYREF
  __int64 v17; // [rsp+50h] [rbp-10h]
  __int64 v18; // [rsp+58h] [rbp-8h]
  RTL_SRWLOCK *v19; // [rsp+90h] [rbp+30h] BYREF
  DWORD CurrentThreadId; // [rsp+98h] [rbp+38h] BYREF
  __int64 v21; // [rsp+A8h] [rbp+48h] BYREF

  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v6 = *(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 32LL);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v16);
  v17 = -1LL;
  v18 = -1LL;
  v6(a2, &v16);
  wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &v19);
  v7 = *(_QWORD *)(a1 + 272);
  v9 = WindowManagementLogging::Provider(v8);
  if ( *(_DWORD *)v9 > 5u && tlgKeywordOn((__int64)v9, 0x200000000000LL) )
    EventActivityIdControl(3u, (LPGUID)(v7 + 8));
  else
    *(_OWORD *)(v7 + 8) = 0LL;
  *(_DWORD *)v7 = 1;
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v19);
  v11 = WindowManagementLogging::Provider(v10);
  v12 = (__int64)v11;
  if ( *(_DWORD *)v11 > 5u && tlgKeywordOn((__int64)v11, 0x200000000000LL) )
  {
    LODWORD(v19) = a3;
    v21 = v16;
    CurrentThreadId = GetCurrentThreadId();
    v15 = 0x1000000LL;
    v13 = *(_QWORD *)(a1 + 272);
    if ( !*(_BYTE *)(v13 + 4) || _tlgGuidIsZero((const struct _GUID *)(v13 + 24)) )
      v14 = 0LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
      v12,
      (__int64)&unk_1807E99FE,
      v13 + 8,
      v14,
      (__int64)&v15,
      (__int64)&CurrentThreadId,
      &v21);
  }
  if ( !*(_DWORD *)(a1 + 312) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 288));
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v16);
}
