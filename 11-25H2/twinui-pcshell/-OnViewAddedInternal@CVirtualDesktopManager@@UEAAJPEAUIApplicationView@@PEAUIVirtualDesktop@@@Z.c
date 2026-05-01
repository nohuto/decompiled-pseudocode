/*
 * XREFs of ?OnViewAddedInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x1801BEEA0
 * Callers:
 *     ?OnViewAddedInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@@Z @ 0x18026A3C0 (-OnViewAddedInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0_lambda_2b94c938c284b16eb776d16960094630_@@QEAA@PEAV?$shared_ptr@VPinRequestContext@@@std@@AEAV?$shared_ptr@VPinOperationContext@@@2@AEA_N@Z @ 0x1802961C4 (--0_lambda_2b94c938c284b16eb776d16960094630_@@QEAA@PEAV-$shared_ptr@VPinRequestContext@@@std@@AE.c)
 *     CVirtualDesktopManager::_OnViewAdded__lambda_34ee246322c155ae103acce2d12cb4c3___ @ 0x18052CEB0 (CVirtualDesktopManager--_OnViewAdded__lambda_34ee246322c155ae103acce2d12cb4c3___.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVirtualDesktopManager::OnViewAddedInternal(
        CVirtualDesktopManager *this,
        struct IApplicationView *a2,
        struct IVirtualDesktop *a3)
{
  unsigned int v4; // ebx
  __int64 v6; // rdx
  _BYTE v7[40]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IApplicationView *v9; // [rsp+58h] [rbp+10h] BYREF
  struct IVirtualDesktop *v10; // [rsp+60h] [rbp+18h] BYREF

  v10 = a3;
  v9 = a2;
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, struct IVirtualDesktop *))(**((_QWORD **)this + 12) + 32LL))(
          *((_QWORD *)this + 12),
          a3) )
  {
    v4 = -2147024809;
    v6 = 1304LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)v4);
    return v4;
  }
  _lambda_2b94c938c284b16eb776d16960094630_::_lambda_2b94c938c284b16eb776d16960094630_(v7, (char *)this - 8, &v9, &v10);
  v4 = CVirtualDesktopManager::_OnViewAdded__lambda_34ee246322c155ae103acce2d12cb4c3___(
         (CVirtualDesktopManager *)((char *)this - 8),
         v9);
  if ( (v4 & 0x80000000) != 0 )
  {
    v6 = 1310LL;
    goto LABEL_6;
  }
  return v4;
}
