/*
 * XREFs of ?IsSnappableWindow@SnapLayoutHelpers@@YA_NPEAUIApplicationView@@PEAUIImmersiveMonitor@@_NPEAUIVirtualDesktopManagerInternal@@@Z @ 0x18016D234
 * Callers:
 *     ?GetSnappableWindowList@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@CA?AV?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@XZ @ 0x18026AEAC (-GetSnappableWindowList@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Win.c)
 *     ?_ShouldShowViewInSnapAssist@CSnapAssistControllerBase@@IEAA_NPEAUIImmersiveMonitor@@PEAUIApplicationView@@AEBV?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@PEAUIAppLayout@@@Z @ 0x1805A8D50 (-_ShouldShowViewInSnapAssist@CSnapAssistControllerBase@@IEAA_NPEAUIImmersiveMonitor@@PEAUIApplic.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CanMaximizeView@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x18006F08C (-CanMaximizeView@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?CanResizeView@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x18016D3F0 (-CanResizeView@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?IsViewShownInSwitchers@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x18016D508 (-IsViewShownInSwitchers@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?HasRootSwitchableOwner@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x18067FEAC (-HasRootSwitchableOwner@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall SnapLayoutHelpers::IsSnappableWindow(
        SnapLayoutHelpers *this,
        struct IApplicationView *a2,
        struct IImmersiveMonitor *a3,
        __int64 *a4)
{
  char v4; // di
  struct IApplicationView *v6; // rdx
  int v7; // eax
  int v8; // eax
  struct IApplicationView *v9; // rdx
  __int64 v11; // rax
  int v12; // eax
  __int64 v13[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]
  struct IApplicationView *v15; // [rsp+48h] [rbp+18h] BYREF
  int v16; // [rsp+58h] [rbp+28h] BYREF

  v15 = a2;
  v4 = (char)a3;
  v13[0] = 0LL;
  if ( a4 )
  {
    v11 = *a4;
    v13[0] = 0LL;
    v12 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v11 + 48))(a4, v13);
    if ( v12 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xA2C,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\snaplayouthelpers.cpp",
        (const char *)(unsigned int)v12);
      goto LABEL_14;
    }
  }
  if ( !ApplicationViewHelpers::CanResizeView(this, a2)
    || !ApplicationViewHelpers::CanMaximizeView(
          (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))this,
          v6) )
  {
    goto LABEL_14;
  }
  LODWORD(v15) = 0;
  if ( v13[0] )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, SnapLayoutHelpers *, struct IApplicationView **))(*(_QWORD *)v13[0] + 24LL))(
           v13[0],
           this,
           &v15);
    if ( v7 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xA3B,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\snaplayouthelpers.cpp",
        (const char *)(unsigned int)v7);
    }
    else if ( !(_DWORD)v15 )
    {
      goto LABEL_14;
    }
  }
  v16 = 0;
  v8 = (*(__int64 (__fastcall **)(SnapLayoutHelpers *, int *))(*(_QWORD *)this + 240LL))(this, &v16);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xA43,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snaplayouthelpers.cpp",
      (const char *)(unsigned int)v8);
  }
  else if ( !v16 )
  {
    goto LABEL_14;
  }
  if ( v4 && ApplicationViewHelpers::HasRootSwitchableOwner((struct IUnknown *)this, v9) )
  {
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v13);
    return 0;
  }
  if ( !ApplicationViewHelpers::IsViewShownInSwitchers(this, v9) )
  {
LABEL_14:
    if ( v13[0] )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13[0] + 16LL))(v13[0]);
    return 0;
  }
  if ( v13[0] )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13[0] + 16LL))(v13[0]);
  return 1;
}
