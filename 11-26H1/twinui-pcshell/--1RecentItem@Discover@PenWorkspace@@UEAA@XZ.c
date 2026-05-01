/*
 * XREFs of ??1RecentItem@Discover@PenWorkspace@@UEAA@XZ @ 0x1803EB6A0
 * Callers:
 *     ??1UTMRecentItem@Discover@PenWorkspace@@UEAA@XZ @ 0x1803EB6E4 (--1UTMRecentItem@Discover@PenWorkspace@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall PenWorkspace::Discover::RecentItem::~RecentItem(PenWorkspace::Discover::RecentItem *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 6);
  if ( v2 )
  {
    *((_QWORD *)this + 6) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  *((_DWORD *)this + 11) = -1073741823;
  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IPenWorkspaceScreenCaptureBroker>::~ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IPenWorkspaceScreenCaptureBroker>((__int64)this);
}
