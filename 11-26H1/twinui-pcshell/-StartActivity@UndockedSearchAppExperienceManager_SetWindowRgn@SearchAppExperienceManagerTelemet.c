/*
 * XREFs of ?StartActivity@UndockedSearchAppExperienceManager_SetWindowRgn@SearchAppExperienceManagerTelemetry@@QEAAXAEBUtagRECT@@00@Z @ 0x18007EC30
 * Callers:
 *     ?SetWindowRegionAsync@CUndockedSearchAppExperienceManagerConfig@@AEBAXPEAUHWND__@@AEBUtagRECT@@AEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x18023ED68 (-SetWindowRegionAsync@CUndockedSearchAppExperienceManagerConfig@@AEBAXPEAUHWND__@@AEBUtagRECT@@A.c)
 * Callees:
 *     ?_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z @ 0x180043BF8 (-_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444444444444@Z @ 0x18007E550 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@.c)
 *     ?zInternalStart@?$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18007EDB8 (-zInternalStart@-$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag.c)
 *     ?Provider@SearchAppLauncherLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800BCA70 (-Provider@SearchAppLauncherLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn::StartActivity(
        SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn *this,
        const struct tagRECT *a2,
        const struct tagRECT *a3,
        const struct tagRECT *a4)
{
  const struct _tlgProvider_t *v8; // r15
  LONG top; // ecx
  LONG bottom; // r10d
  LONG right; // r8d
  LONG v12; // eax
  LONG v13; // ecx
  LONG v14; // eax
  LONG v15; // ecx
  DWORD CurrentThreadId; // eax
  __int64 v17; // r8
  const GUID *v18; // rcx
  LONG v19; // [rsp+98h] [rbp+7h] BYREF
  LONG v20; // [rsp+9Ch] [rbp+Bh] BYREF
  LONG v21; // [rsp+A0h] [rbp+Fh] BYREF
  LONG v22; // [rsp+A4h] [rbp+13h] BYREF
  LONG v23; // [rsp+A8h] [rbp+17h] BYREF
  LONG v24; // [rsp+ACh] [rbp+1Bh] BYREF
  LONG left; // [rsp+B0h] [rbp+1Fh] BYREF
  LONG v26; // [rsp+B4h] [rbp+23h] BYREF
  LONG v27; // [rsp+B8h] [rbp+27h] BYREF
  LONG v28; // [rsp+BCh] [rbp+2Bh] BYREF
  LONG v29; // [rsp+C0h] [rbp+2Fh] BYREF
  DWORD v30; // [rsp+C4h] [rbp+33h] BYREF
  __int64 v31; // [rsp+C8h] [rbp+37h] BYREF
  LONG v32; // [rsp+F8h] [rbp+67h] BYREF

  wil::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v8 = SearchAppLauncherLogging::Provider();
  if ( *(_DWORD *)v8 > 5u )
  {
    top = a4->top;
    bottom = a4->bottom;
    right = a4->right;
    v23 = a3->right;
    v24 = a3->top;
    left = a3->left;
    v26 = a2->bottom;
    v27 = a2->right;
    v12 = a2->top;
    v20 = top;
    v13 = a4->left;
    v28 = v12;
    v14 = a2->left;
    v21 = v13;
    v15 = a3->bottom;
    v29 = v14;
    v32 = bottom;
    v19 = right;
    v22 = v15;
    CurrentThreadId = GetCurrentThreadId();
    v17 = *((_QWORD *)this + 34);
    v30 = CurrentThreadId;
    v31 = 0x1000000LL;
    if ( !*(_BYTE *)(v17 + 4) || _tlgGuidIsZero((const struct _GUID *)(v17 + 24)) )
      v18 = 0LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)v8,
      byte_1807FB67C,
      (const GUID *)(v17 + 8),
      v18,
      (__int64)&v31,
      (__int64)&v30,
      (__int64)&v29,
      (__int64)&v28,
      (__int64)&v27,
      (__int64)&v26,
      (__int64)&left,
      (__int64)&v24,
      (__int64)&v23,
      (__int64)&v22,
      (__int64)&v21,
      (__int64)&v20,
      (__int64)&v19,
      (__int64)&v32);
  }
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,2197815296,_TlgReflectorTag_Param0IsProviderType>::EnsureWatchingCurrentThread((__int64)this);
}
