/*
 * XREFs of ?GetLastActivatedApp@CAppTransitionManager@@UEAAJPEAPEAUIApplicationView@@@Z @ 0x1804D0180
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall CAppTransitionManager::GetLastActivatedApp(
        CAppTransitionManager *this,
        struct IApplicationView **a2)
{
  struct IApplicationView **v2; // rbx

  v2 = (struct IApplicationView **)((char *)this + 120);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)this + 15);
  *a2 = *v2;
  return 0LL;
}
