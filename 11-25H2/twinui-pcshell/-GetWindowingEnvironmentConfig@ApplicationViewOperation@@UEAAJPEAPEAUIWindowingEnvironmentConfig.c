/*
 * XREFs of ?GetWindowingEnvironmentConfig@ApplicationViewOperation@@UEAAJPEAPEAUIWindowingEnvironmentConfig@@@Z @ 0x180193710
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall ApplicationViewOperation::GetWindowingEnvironmentConfig(
        ApplicationViewOperation *this,
        struct IWindowingEnvironmentConfig **a2)
{
  struct IWindowingEnvironmentConfig **v2; // rbx

  *a2 = 0LL;
  v2 = (struct IWindowingEnvironmentConfig **)((char *)this + 176);
  if ( !*((_QWORD *)this + 22) )
    return 2147943568LL;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)this + 22);
  *a2 = *v2;
  return 0LL;
}
