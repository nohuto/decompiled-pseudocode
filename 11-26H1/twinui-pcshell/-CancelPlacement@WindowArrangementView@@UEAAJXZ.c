/*
 * XREFs of ?CancelPlacement@WindowArrangementView@@UEAAJXZ @ 0x1805288C0
 * Callers:
 *     ?TryInvokeBack@WindowArrangementView@@UEAAJXZ @ 0x18052C210 (-TryInvokeBack@WindowArrangementView@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     CDCompBatchAnimationCallback_CreateInstance__lambda_83894a20d7676cc7370719a196cbc3a9___ @ 0x180527464 (CDCompBatchAnimationCallback_CreateInstance__lambda_83894a20d7676cc7370719a196cbc3a9___.c)
 *     _lambda_83894a20d7676cc7370719a196cbc3a9_::operator() @ 0x180528294 (_lambda_83894a20d7676cc7370719a196cbc3a9_--operator().c)
 *     ?EnablePlaceModeDropFeedback@WindowArrangementView@@AEAAJW4EnablePlaceModeDropFeedbackMode@1@PEBUPlaceModeFeedbackTarget@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x180528BD8 (-EnablePlaceModeDropFeedback@WindowArrangementView@@AEAAJW4EnablePlaceModeDropFeedbackMode@1@PEB.c)
 *     ?InternalAddRef@?$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEBAXXZ @ 0x18052A1D0 (-InternalAddRef@-$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ @ 0x18052A1F4 (-InternalRelease@-$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall WindowArrangementView::CancelPlacement(WindowArrangementView *this, __int64 a2, __int64 a3)
{
  WindowArrangementView *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // r8
  int v9; // eax
  unsigned int v10; // edi
  __int64 v11; // rdx
  int v12; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+20h]
  __int64 v15; // [rsp+50h] [rbp+28h] BYREF
  WindowArrangementView *v16; // [rsp+58h] [rbp+30h] BYREF
  WindowArrangementView *v17; // [rsp+60h] [rbp+38h] BYREF
  char *v18; // [rsp+68h] [rbp+40h] BYREF

  v4 = (WindowArrangementView *)((char *)this - 48);
  if ( !*((_BYTE *)this + 268) && !*((_BYTE *)this + 266) )
  {
    v18 = (char *)this - 48;
    Microsoft::WRL::ComPtr<WindowArrangementView>::InternalAddRef(&v18, a2, a3);
    v17 = v4;
    Microsoft::WRL::ComPtr<WindowArrangementView>::InternalAddRef(&v17, v5, v6);
    v15 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
    v16 = v4;
    Microsoft::WRL::ComPtr<WindowArrangementView>::InternalAddRef(&v16, v7, v8);
    v9 = CDCompBatchAnimationCallback_CreateInstance__lambda_83894a20d7676cc7370719a196cbc3a9_((__int64)&v16, &v15);
    v10 = v9;
    if ( v9 < 0 )
    {
      v11 = 554LL;
LABEL_8:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
        (const char *)(unsigned int)v9);
LABEL_11:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
      Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease(&v17);
      Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease(&v18);
      return v10;
    }
    v12 = WindowArrangementView::EnablePlaceModeDropFeedback(v4, 3LL, 0LL, v15);
    if ( v12 >= 0 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 4) + 32LL))(*((_QWORD *)this + 4), 0LL, 0LL);
      *((_BYTE *)this + 268) = 1;
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x22B,
        (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
        (const char *)(unsigned int)v12);
      v9 = lambda_83894a20d7676cc7370719a196cbc3a9_::operator()(&v17);
      v10 = v9;
      if ( v9 < 0 )
      {
        v11 = 562LL;
        goto LABEL_8;
      }
    }
    v10 = 0;
    goto LABEL_11;
  }
  return 0LL;
}
