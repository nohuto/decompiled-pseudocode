/*
 * XREFs of ?AsyncInvokeWithApplicationViewSerialization@CApplicationManager@@UEAAJPEAUIAsyncCallback@@@Z @ 0x1801DA100
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ComPtr@UISecondaryTileFactory@StartScreen@UI@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180064C74 (--1-$ComPtr@UISecondaryTileFactory@StartScreen@UI@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 *     CDelayIAMOperations::AddOperation__lambda_36ac732e4dc79f438aaac687fe092223___ @ 0x1802DB980 (CDelayIAMOperations--AddOperation__lambda_36ac732e4dc79f438aaac687fe092223___.c)
 *     _lambda_e1cc468f42f502bf01f54fa0c50a937b_::_lambda_e1cc468f42f502bf01f54fa0c50a937b_ @ 0x1802DCF28 (_lambda_e1cc468f42f502bf01f54fa0c50a937b_--_lambda_e1cc468f42f502bf01f54fa0c50a937b_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationManager::AsyncInvokeWithApplicationViewSerialization(
        CApplicationManager *this,
        struct IAsyncCallback *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IAsyncCallback *v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IAsyncCallback *))(*(_QWORD *)a2 + 8LL))(a2);
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v4 = *((_QWORD *)this + 61);
  v5 = lambda_e1cc468f42f502bf01f54fa0c50a937b_::_lambda_e1cc468f42f502bf01f54fa0c50a937b_(&v9, &v8);
  LODWORD(v4) = CDelayIAMOperations::AddOperation__lambda_36ac732e4dc79f438aaac687fe092223___(v4, v5);
  Microsoft::WRL::ComPtr<Windows::UI::StartScreen::ISecondaryTileFactory>::~ComPtr<Windows::UI::StartScreen::ISecondaryTileFactory>(&v9);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( (_DWORD)v4 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct IAsyncCallback *))(*(_QWORD *)a2 + 16LL))(a2);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1310,
      (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)0x8007000ELL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v8);
    return 2147942414LL;
  }
}
