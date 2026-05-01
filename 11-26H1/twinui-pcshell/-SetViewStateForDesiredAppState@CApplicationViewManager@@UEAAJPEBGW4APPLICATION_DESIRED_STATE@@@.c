/*
 * XREFs of ?SetViewStateForDesiredAppState@CApplicationViewManager@@UEAAJPEBGW4APPLICATION_DESIRED_STATE@@@Z @ 0x180308EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetApplicationViewsById@CApplicationViewManager@@AEAAJPEBG_K_NPEAPEAUIObjectArray@@@Z @ 0x180131878 (-GetApplicationViewsById@CApplicationViewManager@@AEAAJPEBG_K_NPEAPEAUIObjectArray@@@Z.c)
 *     ?SetAppStateForViews@CApplicationViewManager@@AEAAJPEAUIObjectArray@@W4APPLICATION_DESIRED_STATE@@@Z @ 0x180308D14 (-SetAppStateForViews@CApplicationViewManager@@AEAAJPEAUIObjectArray@@W4APPLICATION_DESIRED_STATE.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationViewManager::SetViewStateForDesiredAppState(
        __int64 a1,
        const unsigned __int16 *a2,
        int a3)
{
  RTL_SRWLOCK *v5; // rdi
  int ApplicationViewsById; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IObjectArray *v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = 0LL;
  v5 = (RTL_SRWLOCK *)(a1 - 192);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v10);
  ApplicationViewsById = CApplicationViewManager::GetApplicationViewsById(v5, a2, -1LL, 0, &v10);
  v7 = ApplicationViewsById;
  if ( ApplicationViewsById >= 0 )
    v7 = CApplicationViewManager::SetAppStateForViews((__int64)v5, (__int64)v10, a3);
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x34B,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)ApplicationViewsById);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v10);
  return v7;
}
