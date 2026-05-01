/*
 * XREFs of ?GetTitlebarConfiguration@ApplicationViewOperation@@UEAAJPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x18018BAA0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall ApplicationViewOperation::GetTitlebarConfiguration(
        ApplicationViewOperation *this,
        struct IApplicationViewTitlebarConfiguration **a2)
{
  struct IApplicationViewTitlebarConfiguration **v2; // rbx

  v2 = (struct IApplicationViewTitlebarConfiguration **)((char *)this + 184);
  *a2 = 0LL;
  if ( !*((_QWORD *)this + 23) )
    return 2147943568LL;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)this + 23);
  *a2 = *v2;
  return 0LL;
}
