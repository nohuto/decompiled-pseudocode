/*
 * XREFs of ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x1800A5E00
 * Callers:
 *     ??1AssistantLightManager@Lighting@TwinUI@@QEAA@XZ @ 0x1800A5270 (--1AssistantLightManager@Lighting@TwinUI@@QEAA@XZ.c)
 *     wil::details::RunFeatureDispatch__lambda_203a32cbd1766f67226f85b07542c037__&_ @ 0x1800A5A14 (wil--details--RunFeatureDispatch__lambda_203a32cbd1766f67226f85b07542c037__-_.c)
 *     ?_GetLaunchPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewPosition@@@Z @ 0x180268220 (-_GetLaunchPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewPositi.c)
 * Callees:
 *     <none>
 */

int __fastcall wil::details::RunFunctor(
        wil::details *this,
        struct wil::details::IFunctor *a2,
        struct wil::details::IFunctorHost *a3)
{
  void *retaddr; // [rsp+0h] [rbp+0h]

  if ( wil::details::g_pfnRunFunctorWithExceptionFilter )
    return wil::details::g_pfnRunFunctorWithExceptionFilter(this, a2, retaddr);
  else
    return (**(__int64 (__fastcall ***)(struct wil::details::IFunctor *, wil::details *, struct wil::details::IFunctorHost *))a2)(
             a2,
             this,
             a3);
}
