/*
 * XREFs of ?WindowShowEnterpriseIndicatorChanged@CApplicationViewManager@@UEAAJPEAUHWND__@@@Z @ 0x18030D450
 * Callers:
 *     <none>
 * Callees:
 *     ?GetViewForHwnd@CApplicationViewManager@@UEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x180039390 (-GetViewForHwnd@CApplicationViewManager@@UEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18003AFF0 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationViewManager::WindowShowEnterpriseIndicatorChanged(
        CApplicationViewManager *this,
        HWND a2)
{
  RTL_SRWLOCK *v3; // rdi
  int ViewForHwnd; // ebx
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IApplicationView *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0LL;
  v3 = (RTL_SRWLOCK *)((char *)this - 48);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v8);
  ViewForHwnd = CApplicationViewManager::GetViewForHwnd(v3, a2, &v8);
  if ( ViewForHwnd >= 0 )
  {
    v5 = CApplicationViewManager::RaiseApplicationViewChanged(
           (__int64)v3,
           (int (__fastcall ***)(_QWORD, GUID *, LPMALLOC *))v8,
           0x13u,
           0LL);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x343,
        (int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v5);
    ViewForHwnd = 0;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v8);
  return (unsigned int)ViewForHwnd;
}
