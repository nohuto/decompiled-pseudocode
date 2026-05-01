/*
 * XREFs of ?SetTransparent@AccessibilityExperienceManager@@UEAAJH@Z @ 0x18048D8B0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$00@@U3@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$00@@5AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18000A07C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$00@@U3@U-$_tlgWrapperByV.c)
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     CreationThreadDispatcher::RunAsync__lambda_c3975a5b4ee2ba5280707fbe38be1371___ @ 0x18048AD68 (CreationThreadDispatcher--RunAsync__lambda_c3975a5b4ee2ba5280707fbe38be1371___.c)
 *     ?Provider@GazeUITraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18048D374 (-Provider@GazeUITraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_EyeControllerApp_2602@@@details@wil@@QEAA_NXZ @ 0x18048EBB8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_EyeControllerApp_2602@@@details@w.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AccessibilityExperienceManager::SetTransparent(AccessibilityExperienceManager *this, int a2)
{
  int v4; // edi
  __int64 v5; // rcx
  __int64 *v6; // rbx
  bool v7; // r14
  bool v8; // r15
  const struct _tlgProvider_t *v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  char IsEnabled; // al
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, __int64 *); // r14
  int v15; // eax
  unsigned int v16; // ebx
  __int64 v17; // rdx
  int v18; // eax
  LONG WindowLongW; // r8d
  unsigned int v20; // eax
  LONG v21; // r8d
  __int64 v23; // [rsp+50h] [rbp-20h] BYREF
  const char *v24; // [rsp+58h] [rbp-18h] BYREF
  int v25[4]; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]
  HWND hWnd; // [rsp+B0h] [rbp+40h] BYREF
  bool v28; // [rsp+C0h] [rbp+50h]
  int v29; // [rsp+C8h] [rbp+58h]

  v4 = -2147467259;
  v23 = 0LL;
  v6 = (__int64 *)((char *)this + 232);
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_EyeControllerApp_2602>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_EyeControllerApp_2602>::GetImpl'::`2'::impl) )
  {
    v7 = *v6 != 0;
    v8 = *((_QWORD *)this + 33) != 0LL;
    v9 = GazeUITraceLogging::Provider(v5);
    if ( *(_DWORD *)v9 > 5u )
    {
      v29 = a2;
      LOBYTE(hWnd) = v8;
      v28 = v7;
      v24 = "AccessibilityExperienceManager::SetTransparent - Triggered";
      *(_QWORD *)v25 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
        (__int64)v9,
        (__int64)&unk_180811215,
        v10,
        v11,
        (__int64)v25,
        &v24);
    }
  }
  if ( !*v6 )
    goto LABEL_17;
  hWnd = 0LL;
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_EyeControllerApp_2602>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_EyeControllerApp_2602>::GetImpl'::`2'::impl);
  v13 = *v6;
  v14 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 32LL);
  if ( !IsEnabled )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
    v18 = v14(v13, &v23);
    if ( v18 < 0
      || (v18 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v23 + 24LL))(v23, &hWnd), v4 = v18, v18 < 0) )
    {
      v16 = v18;
      goto LABEL_18;
    }
LABEL_14:
    WindowLongW = GetWindowLongW(hWnd, -20);
    v20 = WindowLongW & 0xFFF7FFDF;
    v21 = WindowLongW | 0x80020;
    if ( !a2 )
      v21 = v20;
    SetWindowLongW(hWnd, -20, v21);
    *(_QWORD *)v25 = (char *)this - 144;
    v25[2] = a2;
    CreationThreadDispatcher::RunAsync__lambda_c3975a5b4ee2ba5280707fbe38be1371___(*((_QWORD *)this + 18), v25);
LABEL_17:
    v16 = v4;
    goto LABEL_18;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
  v15 = v14(v13, &v23);
  v16 = v15;
  if ( v15 >= 0 )
  {
    v15 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v23 + 24LL))(v23, &hWnd);
    v16 = v15;
    if ( v15 < 0 )
    {
      v17 = 471LL;
      goto LABEL_10;
    }
    goto LABEL_14;
  }
  v17 = 470LL;
LABEL_10:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v17,
    (int)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
    (const char *)(unsigned int)v15);
LABEL_18:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
  return v16;
}
