/*
 * XREFs of ??$MakeAndInitialize@VWindowArrangementView@@V1@$$V@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@@012@@Z @ 0x180505660
 * Callers:
 *     ?WindowArrangementView_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x18050A72C (-WindowArrangementView_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180034A34 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0WindowArrangementView@@QEAA@XZ @ 0x180505A9C (--0WindowArrangementView@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEBAXXZ @ 0x180507DB0 (-InternalAddRef@-$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ @ 0x180507DD4 (-InternalRelease@-$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<WindowArrangementView,WindowArrangementView,>(_QWORD *a1)
{
  unsigned int v2; // edi
  void *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  WindowArrangementView *v7; // [rsp+30h] [rbp+8h] BYREF
  void *v8; // [rsp+38h] [rbp+10h] BYREF

  ((void (*)(void))Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease)();
  v2 = 0;
  *a1 = 0LL;
  v3 = operator new(0x290uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v3;
  if ( v3 )
  {
    v7 = WindowArrangementView::WindowArrangementView((WindowArrangementView *)v3);
    v8 = 0LL;
    Microsoft::WRL::ComPtr<WindowArrangementView>::InternalAddRef(&v7, v4, v7);
    *a1 = v5;
    Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease(&v7);
  }
  else
  {
    v2 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v8);
  return v2;
}
