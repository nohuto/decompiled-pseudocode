/*
 * XREFs of ??$Start@I@AddSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@SA?AV01@$$QEAI@Z @ 0x1802AC448
 * Callers:
 *     ?ReconcileSessionIdleTaskCompletion@WindowWrapperBase@@AEAAXXZ @ 0x180431230 (-ReconcileSessionIdleTaskCompletion@WindowWrapperBase@@AEAAXXZ.c)
 * Callees:
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18006F5C0 (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Para_ea_18006F5C0.c)
 *     ?StartActivity@AddSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAAXK@Z @ 0x180111E30 (-StartActivity@AddSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAAXK@Z.c)
 */

// Hidden C++ exception states: #wind=1
ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion *__fastcall ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion::Start<unsigned int>(
        ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion *this,
        int *a2)
{
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    this,
    (__int64)"AddSessionIdleTaskCompletion");
  *(_QWORD *)this = &ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion::`vftable';
  ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion::StartActivity(this, *a2);
  return this;
}
