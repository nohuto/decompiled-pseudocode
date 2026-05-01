/*
 * XREFs of ??$MakeAndInitialize@VRecentAppsCache@Discover@PenWorkspace@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAVRecentAppsCache@Discover@PenWorkspace@@@Z @ 0x180099FB4
 * Callers:
 *     ?RuntimeClassInitialize@PenWorkspaceDiscoverBroker@@QEAAJXZ @ 0x180099D70 (-RuntimeClassInitialize@PenWorkspaceDiscoverBroker@@QEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18002BEFC (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180034A34 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??0RecentAppsCache@Discover@PenWorkspace@@QEAA@XZ @ 0x18009A06C (--0RecentAppsCache@Discover@PenWorkspace@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@RecentAppsCache@Discover@PenWorkspace@@QEAAJXZ @ 0x18009A1C0 (-RuntimeClassInitialize@RecentAppsCache@Discover@PenWorkspace@@QEAAJXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<PenWorkspace::Discover::RecentAppsCache,PenWorkspace::Discover::RecentAppsCache,>(
        PenWorkspace::Discover::RecentAppsCache **a1)
{
  void *v2; // rax
  PenWorkspace::Discover::RecentAppsCache *v3; // rbx
  int v4; // edi
  void *v6; // [rsp+40h] [rbp+8h] BYREF
  PenWorkspace::Discover::RecentAppsCache *v7; // [rsp+48h] [rbp+10h] BYREF
  void *v8; // [rsp+50h] [rbp+18h]

  *a1 = 0LL;
  v2 = operator new(0xE8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v2;
  v7 = (PenWorkspace::Discover::RecentAppsCache *)v2;
  if ( !v2 )
  {
    v4 = -2147024882;
LABEL_10:
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v6);
    return (unsigned int)v4;
  }
  v8 = v2;
  v3 = (PenWorkspace::Discover::RecentAppsCache *)PenWorkspace::Discover::RecentAppsCache::RecentAppsCache((PenWorkspace::Discover::RecentAppsCache *)v2);
  v7 = v3;
  v6 = 0LL;
  v4 = PenWorkspace::Discover::RecentAppsCache::RuntimeClassInitialize(v3);
  if ( v4 < 0 )
  {
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v7);
    goto LABEL_10;
  }
  if ( v3 )
    (*(void (__fastcall **)(PenWorkspace::Discover::RecentAppsCache *))(*(_QWORD *)v3 + 8LL))(v3);
  *a1 = v3;
  if ( v3 )
    (*(void (__fastcall **)(PenWorkspace::Discover::RecentAppsCache *))(*(_QWORD *)v3 + 16LL))(v3);
  return 0LL;
}
