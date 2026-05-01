/*
 * XREFs of ??$Start@I@RemoveSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@SA?AV01@$$QEAI@Z @ 0x180184C20
 * Callers:
 *     ?ReconcileSessionIdleTaskCompletion@WindowWrapperBase@@AEAAXXZ @ 0x18043D5E0 (-ReconcileSessionIdleTaskCompletion@WindowWrapperBase@@AEAAXXZ.c)
 * Callees:
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180069F90 (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?StartActivity@RemoveSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAAXK@Z @ 0x180185058 (-StartActivity@RemoveSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAAXK@Z.c)
 */

// Hidden C++ exception states: #wind=1
ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion *__fastcall ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion::Start<unsigned int>(
        ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion *this,
        unsigned int *a2)
{
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    this,
    (__int64)"RemoveSessionIdleTaskCompletion");
  *(_QWORD *)this = &ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion::`vftable';
  ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion::StartActivity(this, *a2);
  return this;
}
