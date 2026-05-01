/*
 * XREFs of ??$MakeAndInitialize@VRetailDemoExperienceManagerFactory@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVRetailDemoExperienceManagerFactory@@@Z @ 0x1801F0890
 * Callers:
 *     ??$CreateClassFactory@VRetailDemoExperienceManagerFactory@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x1801F07C0 (--$CreateClassFactory@VRetailDemoExperienceManagerFactory@@@Details@WRL@Microsoft@@YAJPEAIPEBUCr.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180034A34 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??0RetailDemoExperienceManagerFactory@@QEAA@XZ @ 0x180177600 (--0RetailDemoExperienceManagerFactory@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<RetailDemoExperienceManagerFactory,RetailDemoExperienceManagerFactory,>(
        RetailDemoExperienceManagerFactory **a1)
{
  unsigned int v2; // ebx
  void *v3; // rax
  RetailDemoExperienceManagerFactory *v4; // rax
  RetailDemoExperienceManagerFactory *v5; // rdi
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  *a1 = 0LL;
  v3 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v3;
  if ( v3 )
  {
    v4 = RetailDemoExperienceManagerFactory::RetailDemoExperienceManagerFactory((RetailDemoExperienceManagerFactory *)v3);
    v5 = v4;
    v7 = 0LL;
    if ( v4 )
      (*(void (__fastcall **)(RetailDemoExperienceManagerFactory *))(*(_QWORD *)v4 + 8LL))(v4);
    *a1 = v5;
    if ( v5 )
      (*(void (__fastcall **)(RetailDemoExperienceManagerFactory *))(*(_QWORD *)v5 + 16LL))(v5);
  }
  else
  {
    v2 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v7);
  return v2;
}
