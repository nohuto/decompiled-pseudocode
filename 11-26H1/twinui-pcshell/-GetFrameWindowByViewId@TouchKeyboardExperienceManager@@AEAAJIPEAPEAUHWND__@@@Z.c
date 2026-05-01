/*
 * XREFs of ?GetFrameWindowByViewId@TouchKeyboardExperienceManager@@AEAAJIPEAPEAUHWND__@@@Z @ 0x18046DDDC
 * Callers:
 *     ?GetViewRect@TouchKeyboardExperienceManager@@AEAAJIPEAUtagRECT@@@Z @ 0x18046E1C4 (-GetViewRect@TouchKeyboardExperienceManager@@AEAAJIPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV?$shared_ptr@UKBViewInfo@@@std@@@Z @ 0x1801451A4 (-FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV-$shared_ptr@UKBViewInfo@@@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TouchKeyboardExperienceManager::GetFrameWindowByViewId(RTL_SRWLOCK *this, int a2, HWND *a3)
{
  int ViewInfo; // eax
  int v5; // ebx
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64, __int64 *); // rbx
  __int64 v9; // rdx
  std::_Ref_count_base *v10[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]
  __int64 v12; // [rsp+58h] [rbp+28h] BYREF

  *(_OWORD *)v10 = 0LL;
  ViewInfo = TouchKeyboardExperienceManager::FindViewInfo(this, a2, v10);
  v5 = ViewInfo;
  if ( ViewInfo < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15D9,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)ViewInfo);
LABEL_3:
    if ( v10[1] )
      std::_Ref_count_base::_Decref(v10[1]);
    return (unsigned int)v5;
  }
  v12 = 0LL;
  v7 = *((_QWORD *)v10[0] + 1);
  v8 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 32LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
  v5 = v8(v7, &v12);
  if ( v5 < 0 )
  {
    v9 = 5596LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
    goto LABEL_3;
  }
  v5 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v12 + 24LL))(v12, a3);
  if ( v5 < 0 )
  {
    v9 = 5598LL;
    goto LABEL_8;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
  if ( v10[1] )
    std::_Ref_count_base::_Decref(v10[1]);
  return 0LL;
}
