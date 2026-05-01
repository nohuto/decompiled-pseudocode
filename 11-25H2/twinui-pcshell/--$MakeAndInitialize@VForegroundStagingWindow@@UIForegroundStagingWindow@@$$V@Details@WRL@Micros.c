/*
 * XREFs of ??$MakeAndInitialize@VForegroundStagingWindow@@UIForegroundStagingWindow@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIForegroundStagingWindow@@@Z @ 0x1800F9F88
 * Callers:
 *     ?RuntimeClassInitialize@CMultitaskingViewServiceProvider@@QEAAJXZ @ 0x1800F9BD8 (-RuntimeClassInitialize@CMultitaskingViewServiceProvider@@QEAAJXZ.c)
 *     ?Initialize@ForegroundStaging@@QEAAJXZ @ 0x1800F9F44 (-Initialize@ForegroundStaging@@QEAAJXZ.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180034A34 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?RuntimeClassInitialize@ForegroundStagingWindow@@QEAAJXZ @ 0x1800FA050 (-RuntimeClassInitialize@ForegroundStagingWindow@@QEAAJXZ.c)
 *     ??0ForegroundStagingWindow@@QEAA@XZ @ 0x1800FA164 (--0ForegroundStagingWindow@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ForegroundStagingWindow,IForegroundStagingWindow,>(
        _QWORD *a1)
{
  void *v2; // rax
  ForegroundStagingWindow *v3; // rbx
  int v4; // edi
  void *v6; // [rsp+30h] [rbp+8h] BYREF
  ForegroundStagingWindow *v7; // [rsp+38h] [rbp+10h]

  *a1 = 0LL;
  v2 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v2;
  v7 = (ForegroundStagingWindow *)v2;
  if ( !v2 )
  {
    v4 = -2147024882;
LABEL_8:
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v6);
    return (unsigned int)v4;
  }
  v3 = ForegroundStagingWindow::ForegroundStagingWindow((ForegroundStagingWindow *)v2);
  v7 = v3;
  v6 = 0LL;
  v4 = ForegroundStagingWindow::RuntimeClassInitialize(v3);
  if ( v4 >= 0 )
  {
    v4 = (**(__int64 (__fastcall ***)(ForegroundStagingWindow *, GUID *, _QWORD *))v3)(
           v3,
           &GUID_2e678f79_addb_4142_b6ee_a3c27b456805,
           a1);
    (*(void (__fastcall **)(ForegroundStagingWindow *))(*(_QWORD *)v3 + 16LL))(v3);
    goto LABEL_8;
  }
  if ( v3 )
    (*(void (__fastcall **)(ForegroundStagingWindow *))(*(_QWORD *)v3 + 16LL))(v3);
  return (unsigned int)v4;
}
