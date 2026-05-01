/*
 * XREFs of ??$Start@$$V@ConnectToWindowManager@ViewManagerInteropTraceLogging@@SA?AV01@XZ @ 0x1802AD5C0
 * Callers:
 *     ?WaitForWindowManagerConnection@WindowManagerBridge@@UEAAJXZ @ 0x180420800 (-WaitForWindowManagerConnection@WindowManagerBridge@@UEAAJXZ.c)
 * Callees:
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18006F5C0 (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Para_ea_18006F5C0.c)
 *     ?StartActivity@ConnectToWindowManager@ViewManagerInteropTraceLogging@@QEAAXXZ @ 0x1802AD5F8 (-StartActivity@ConnectToWindowManager@ViewManagerInteropTraceLogging@@QEAAXXZ.c)
 */

ViewManagerInteropTraceLogging::ConnectToWindowManager *__fastcall ViewManagerInteropTraceLogging::ConnectToWindowManager::Start<>(
        ViewManagerInteropTraceLogging::ConnectToWindowManager *this)
{
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    this,
    (__int64)"ConnectToWindowManager");
  *(_QWORD *)this = &ViewManagerInteropTraceLogging::ConnectToWindowManager::`vftable';
  ViewManagerInteropTraceLogging::ConnectToWindowManager::StartActivity(this);
  return this;
}
