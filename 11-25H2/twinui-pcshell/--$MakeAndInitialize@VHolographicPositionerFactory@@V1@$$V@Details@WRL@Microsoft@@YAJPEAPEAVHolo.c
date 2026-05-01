/*
 * XREFs of ??$MakeAndInitialize@VHolographicPositionerFactory@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVHolographicPositionerFactory@@@Z @ 0x18020347C
 * Callers:
 *     ??$CreateClassFactory@VHolographicPositionerFactory@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x1802033B0 (--$CreateClassFactory@VHolographicPositionerFactory@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorM.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180034A34 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0HolographicPositionerFactory@@QEAA@XZ @ 0x1803F71F4 (--0HolographicPositionerFactory@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<HolographicPositionerFactory,HolographicPositionerFactory,>(
        HolographicPositionerFactory **a1)
{
  void *v2; // rax
  HolographicPositionerFactory *v4; // rax
  HolographicPositionerFactory *v5; // rbx
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v2 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v2;
  if ( v2 )
  {
    v4 = HolographicPositionerFactory::HolographicPositionerFactory((HolographicPositionerFactory *)v2);
    v5 = v4;
    if ( v4 )
      (*(void (__fastcall **)(HolographicPositionerFactory *))(*(_QWORD *)v4 + 8LL))(v4);
    *a1 = v5;
    if ( v5 )
      (*(void (__fastcall **)(HolographicPositionerFactory *))(*(_QWORD *)v5 + 16LL))(v5);
    return 0LL;
  }
  else
  {
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v6);
    return 2147942414LL;
  }
}
