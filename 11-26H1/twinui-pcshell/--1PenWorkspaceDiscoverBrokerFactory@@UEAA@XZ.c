/*
 * XREFs of ??1PenWorkspaceDiscoverBrokerFactory@@UEAA@XZ @ 0x1803E7AF8
 * Callers:
 *     ??_EPenWorkspaceDiscoverBrokerFactory@@UEAAPEAXI@Z @ 0x1803E7D40 (--_EPenWorkspaceDiscoverBrokerFactory@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x1800AD1FC (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall PenWorkspaceDiscoverBrokerFactory::~PenWorkspaceDiscoverBrokerFactory(
        PenWorkspaceDiscoverBrokerFactory *this)
{
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)this + 3);
  *((_DWORD *)this + 5) = -1073741823;
}
