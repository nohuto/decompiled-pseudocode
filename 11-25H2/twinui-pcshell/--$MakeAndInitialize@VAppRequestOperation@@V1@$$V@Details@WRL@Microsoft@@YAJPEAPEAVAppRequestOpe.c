/*
 * XREFs of ??$MakeAndInitialize@VAppRequestOperation@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVAppRequestOperation@@@Z @ 0x18023DA84
 * Callers:
 *     ?RequestCloseAsync@WindowWrapperBase@@UEAAJPEAPEAU?$IAsyncOperation@W4AppRequestHandledResult@ViewManagerInterop@Shell@Internal@Windows@@@Foundation@Windows@@@Z @ 0x1804316B0 (-RequestCloseAsync@WindowWrapperBase@@UEAAJPEAPEAU-$IAsyncOperation@W4AppRequestHandledResult@Vi.c)
 *     ?RequestCloseAsync@UwpWindowWrapperBase@@UEAAJPEAPEAU?$IAsyncOperation@W4AppRequestHandledResult@ViewManagerInterop@Shell@Internal@Windows@@@Foundation@Windows@@@Z @ 0x18043AB20 (-RequestCloseAsync@UwpWindowWrapperBase@@UEAAJPEAPEAU-$IAsyncOperation@W4AppRequestHandledResult.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180034A34 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0AppRequestOperation@@QEAA@XZ @ 0x18042C950 (--0AppRequestOperation@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<AppRequestOperation,AppRequestOperation,>(
        AppRequestOperation **a1)
{
  void *v2; // rax
  AppRequestOperation *v4; // rbx
  void *v5; // [rsp+30h] [rbp+8h] BYREF
  AppRequestOperation *v6; // [rsp+38h] [rbp+10h]

  *a1 = 0LL;
  v2 = operator new(0xB0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v2;
  if ( !v2 )
    return 2147942414LL;
  v4 = AppRequestOperation::AppRequestOperation((AppRequestOperation *)v2);
  v6 = v4;
  v5 = 0LL;
  (*(void (__fastcall **)(__int64))(*((_QWORD *)v4 + 2) + 104LL))((__int64)v4 + 16);
  if ( v4 )
    (*(void (__fastcall **)(AppRequestOperation *))(*(_QWORD *)v4 + 8LL))(v4);
  *a1 = v4;
  if ( v4 )
    (*(void (__fastcall **)(AppRequestOperation *))(*(_QWORD *)v4 + 16LL))(v4);
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v5);
  return 0LL;
}
