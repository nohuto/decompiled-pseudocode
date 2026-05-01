/*
 * XREFs of ?RemovePendingView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x18040D308
 * Callers:
 *     ?HandleViewReady@PeoplePaneViewManager@@AEAAJHAEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x18040BC78 (-HandleViewReady@PeoplePaneViewManager@@AEAAJHAEAV-$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x18020E5D4 (--4-$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 */

__int64 __fastcall PeoplePaneViewManager::RemovePendingView(PeoplePaneViewManager *this, struct IApplicationView *a2)
{
  char *v2; // rdi
  char *v4; // rbp
  struct IApplicationView *v6; // rbx
  char *v7; // rbx
  struct IApplicationView *v9; // [rsp+40h] [rbp+8h] BYREF

  v2 = (char *)*((_QWORD *)this + 21);
  v4 = (char *)*((_QWORD *)this + 22);
  while ( v2 != v4 )
  {
    v9 = *(struct IApplicationView **)v2;
    v6 = v9;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v9);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v9);
    if ( v6 == a2 )
      break;
    v2 += 8;
  }
  v7 = (char *)*((_QWORD *)this + 22);
  if ( v2 == v7 )
    return 2147942487LL;
  while ( 1 )
  {
    v2 += 8;
    if ( v2 == v7 )
      break;
    Microsoft::WRL::ComPtr<WeakReference::IWeakReference>::operator=((__int64 *)v2 - 1, v2);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(*((_QWORD *)this + 22) - 8LL));
  *((_QWORD *)this + 22) -= 8LL;
  return 0LL;
}
