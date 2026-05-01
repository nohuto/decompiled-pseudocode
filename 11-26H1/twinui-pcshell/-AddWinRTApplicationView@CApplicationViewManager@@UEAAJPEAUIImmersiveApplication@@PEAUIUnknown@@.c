/*
 * XREFs of ?AddWinRTApplicationView@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@PEAUIUnknown@@@Z @ 0x1800893D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_AddApplicationView@CApplicationViewManager@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x18008799C (-_AddApplicationView@CApplicationViewManager@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 *     ??0CWinRTApplicationView@@QEAA@PEAUIImmersiveApplication@@@Z @ 0x180089508 (--0CWinRTApplicationView@@QEAA@PEAUIImmersiveApplication@@@Z.c)
 *     ?RuntimeClassInitialize@CWinRTApplicationView@@QEAAJXZ @ 0x180089660 (-RuntimeClassInitialize@CWinRTApplicationView@@QEAAJXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWinRTApplicationView@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180092960 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApp_ea_180092960.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationViewManager::AddWinRTApplicationView(
        RTL_SRWLOCK *this,
        struct IImmersiveApplication *a2,
        struct IUnknown *a3)
{
  CWinRTApplicationView *v6; // rbx
  CWinRTApplicationView *v7; // rax
  CWinRTApplicationView *v8; // rdi
  int v10; // eax
  unsigned int v11; // esi
  CWinRTApplicationView *v12; // rcx
  int v13; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v6 = 0LL;
  v7 = (CWinRTApplicationView *)operator new(0xF0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
  {
    v6 = CWinRTApplicationView::CWinRTApplicationView(v7, a2);
    v8 = v6;
  }
  else
  {
    v8 = 0LL;
  }
  if ( !v8 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x212,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
  v10 = CWinRTApplicationView::RuntimeClassInitialize(v6);
  v11 = v10;
  if ( v10 >= 0 )
  {
    AcquireSRWLockExclusive(this + 49);
    v13 = CApplicationViewManager::_AddApplicationView((CApplicationViewManager *)&this[-17], v6, a3);
    v11 = v13;
    if ( v13 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x216,
        (int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v13);
    if ( this != (RTL_SRWLOCK *)-392LL )
      ReleaseSRWLockExclusive(this + 49);
    if ( !v6 )
      return v11;
    v12 = v6;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x213,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v10);
    v12 = v8;
  }
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::Release(v12);
  return v11;
}
