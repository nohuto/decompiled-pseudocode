/*
 * XREFs of ?_DismissView@AccessibilityExperienceManager@@AEAAJPEAUAccessibilityViewInfo@@@Z @ 0x180252228
 * Callers:
 *     _lambda_19713afaab0e793c65926cb0aea68e27_::operator() @ 0x18048BF9C (_lambda_19713afaab0e793c65926cb0aea68e27_--operator().c)
 *     ?_OnViewEvent@AccessibilityExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x18048E880 (-_OnViewEvent@AccessibilityExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Int.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@@Z @ 0x180009DF0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Provider@GazeUITraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18048D374 (-Provider@GazeUITraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AccessibilityExperienceManager::_DismissView(
        AccessibilityExperienceManager *this,
        struct AccessibilityViewInfo *a2)
{
  const struct _tlgProvider_t *v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // eax
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v11; // rdi
  int (__fastcall *v12)(__int64, GUID *, GUID *, const char **); // rbx
  int v13; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  const char *v15; // [rsp+58h] [rbp+10h] BYREF
  __int64 v16; // [rsp+60h] [rbp+18h] BYREF

  v4 = GazeUITraceLogging::Provider();
  if ( *(_DWORD *)v4 > 5u )
  {
    v15 = "AccessibilityExperienceManager::_DismissView";
    v16 = 0x1000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>>(
      (__int64)v4,
      (__int64)&unk_180810F59,
      v5,
      v6,
      (__int64)&v16,
      &v15);
  }
  if ( *((_QWORD *)a2 + 1) )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 50) + 32LL))(*((_QWORD *)this + 50));
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x262,
        (int)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
        (const char *)(unsigned int)v7);
  }
  if ( *(_QWORD *)a2 )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)a2 + 344LL))(*(_QWORD *)a2, 0LL);
    v9 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x267,
        (int)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
        (const char *)(unsigned int)v8);
      return v9;
    }
    v15 = 0LL;
    v11 = *((_QWORD *)this + 33);
    v12 = *(int (__fastcall **)(__int64, GUID *, GUID *, const char **))(*(_QWORD *)v11 + 24LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v15);
    if ( v12(v11, &IID_ITouchKeyboardExperienceManager, &GUID_9516d866_ca0f_40ca_8997_efa618b50f99, &v15) >= 0 )
    {
      v13 = (*(__int64 (__fastcall **)(const char *))(*(_QWORD *)v15 + 48LL))(v15);
      v9 = v13;
      if ( v13 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x26C,
          (int)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
          (const char *)(unsigned int)v13);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v15);
        return v9;
      }
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v15);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)a2 + 1);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)a2);
  return 0LL;
}
