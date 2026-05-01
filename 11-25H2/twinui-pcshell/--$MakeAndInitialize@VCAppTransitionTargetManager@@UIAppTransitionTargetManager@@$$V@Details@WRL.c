/*
 * XREFs of ??$MakeAndInitialize@VCAppTransitionTargetManager@@UIAppTransitionTargetManager@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIAppTransitionTargetManager@@@Z @ 0x1804D211C
 * Callers:
 *     CAppTransitionTargetManager_CreateInstance @ 0x1804D4314 (CAppTransitionTargetManager_CreateInstance.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180034A34 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0CAppTransitionTargetManager@@QEAA@XZ @ 0x1804D2448 (--0CAppTransitionTargetManager@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CAppTransitionTargetManager,IAppTransitionTargetManager,>(
        _QWORD *a1)
{
  void *v2; // rax
  unsigned int v3; // edi
  CAppTransitionTargetManager *v4; // rax
  CAppTransitionTargetManager *v5; // rbx
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v2 = operator new(0x70uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v2;
  if ( v2 )
  {
    v4 = CAppTransitionTargetManager::CAppTransitionTargetManager((CAppTransitionTargetManager *)v2);
    v7 = 0LL;
    v5 = v4;
    v3 = (**(__int64 (__fastcall ***)(CAppTransitionTargetManager *, GUID *, _QWORD *))v4)(
           v4,
           &GUID_60f78ac1_5edd_4b6d_9d29_b2300ef43343,
           a1);
    (*(void (__fastcall **)(CAppTransitionTargetManager *))(*(_QWORD *)v5 + 16LL))(v5);
  }
  else
  {
    v3 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v7);
  return v3;
}
