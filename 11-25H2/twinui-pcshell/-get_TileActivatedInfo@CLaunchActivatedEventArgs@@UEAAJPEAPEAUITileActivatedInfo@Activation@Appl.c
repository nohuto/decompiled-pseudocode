/*
 * XREFs of ?get_TileActivatedInfo@CLaunchActivatedEventArgs@@UEAAJPEAPEAUITileActivatedInfo@Activation@ApplicationModel@Windows@@@Z @ 0x1802D1BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A4EAC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall CLaunchActivatedEventArgs::get_TileActivatedInfo(
        CLaunchActivatedEventArgs *this,
        struct Windows::ApplicationModel::Activation::ITileActivatedInfo **a2)
{
  struct Windows::ApplicationModel::Activation::ITileActivatedInfo **v2; // rbx

  v2 = (struct Windows::ApplicationModel::Activation::ITileActivatedInfo **)((char *)this + 64);
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)this + 8);
  *a2 = *v2;
  return 0LL;
}
