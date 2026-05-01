/*
 * XREFs of ?GetWindowingEnvironmentConfigInternal@CImmersiveApp@@UEAAJPEAPEAUIWindowingEnvironmentConfig@@@Z @ 0x1802FDBA0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall CImmersiveApp::GetWindowingEnvironmentConfigInternal(
        CImmersiveApp *this,
        struct IWindowingEnvironmentConfig **a2)
{
  struct IWindowingEnvironmentConfig **v2; // rbx

  v2 = (struct IWindowingEnvironmentConfig **)((char *)this + 664);
  *a2 = 0LL;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)this + 83);
  *a2 = *v2;
  return 0LL;
}
