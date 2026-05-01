/*
 * XREFs of ??$MakeAndInitialize@VApplicationViewOperation@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVApplicationViewOperation@@@Z @ 0x1804DCC24
 * Callers:
 *     ??$MakeAndInitializeOrThrow@VApplicationViewOperation@@$$V@wil@@YA?AV?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@XZ @ 0x1804DCDC8 (--$MakeAndInitializeOrThrow@VApplicationViewOperation@@$$V@wil@@YA-AV-$ComPtr@VApplicationViewOp.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180034A34 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ @ 0x18011691C (-InternalRelease@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0ApplicationViewOperation@@QEAA@XZ @ 0x180116CEC (--0ApplicationViewOperation@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@QEAAXPEAVApplicationViewOperation@@@Z @ 0x1802112B0 (-Attach@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@QEAAXPEAVApplicationViewOperation@@@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?InternalAddRef@?$ComPtr@VStateChangedEventArgsImpl@@@WRL@Microsoft@@IEBAXXZ @ 0x1803240D4 (-InternalAddRef@-$ComPtr@VStateChangedEventArgsImpl@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ApplicationViewOperation,ApplicationViewOperation,>(
        _QWORD *a1)
{
  unsigned int v2; // ebx
  void *v3; // rax
  ApplicationViewOperation *v4; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  void *v7; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  *a1 = 0LL;
  v3 = operator new(0xF0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v3;
  if ( v3 )
  {
    v4 = ApplicationViewOperation::ApplicationViewOperation((ApplicationViewOperation *)v3);
    v6 = 0LL;
    Microsoft::WRL::ComPtr<ApplicationViewOperation>::Attach(&v6, (__int64)v4);
    v7 = 0LL;
    Microsoft::WRL::ComPtr<StateChangedEventArgsImpl>::InternalAddRef(&v6);
    *a1 = v6;
    Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease(&v6);
  }
  else
  {
    v2 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v7);
  return v2;
}
