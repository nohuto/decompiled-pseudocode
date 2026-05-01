/*
 * XREFs of ??$MakeAndInitialize@VCClassicWindowManager@@UIClassicWindowManagerPrivate@@AEAPEAUIImmersiveSystemModeInternal@@@Details@WRL@Microsoft@@YAJPEAPEAUIClassicWindowManagerPrivate@@AEAPEAUIImmersiveSystemModeInternal@@@Z @ 0x18004D094
 * Callers:
 *     ?s_CreateInstance@CClassicWindowManager@@SAJPEAUIImmersiveSystemModeInternal@@AEBU_GUID@@PEAPEAX@Z @ 0x18004D008 (-s_CreateInstance@CClassicWindowManager@@SAJPEAUIImmersiveSystemModeInternal@@AEBU_GUID@@PEAPEAX.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180034A34 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?RuntimeClassInitialize@CClassicWindowManager@@QEAAJPEAUIImmersiveSystemModeInternal@@@Z @ 0x18004D15C (-RuntimeClassInitialize@CClassicWindowManager@@QEAAJPEAUIImmersiveSystemModeInternal@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0CClassicWindowManager@@QEAA@XZ @ 0x1802F13DC (--0CClassicWindowManager@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CClassicWindowManager,IClassicWindowManagerPrivate,IImmersiveSystemModeInternal * &>(
        _QWORD *a1,
        struct IImmersiveSystemModeInternal **a2)
{
  void *v4; // rax
  CClassicWindowManager *v6; // rdi
  int v7; // ebx
  void *v8; // [rsp+30h] [rbp+8h] BYREF
  CClassicWindowManager *v9; // [rsp+40h] [rbp+18h]

  *a1 = 0LL;
  v4 = operator new(0x120uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v4;
  if ( !v4 )
    return 2147942414LL;
  v6 = CClassicWindowManager::CClassicWindowManager((CClassicWindowManager *)v4);
  v9 = v6;
  v8 = 0LL;
  v7 = CClassicWindowManager::RuntimeClassInitialize(v6, *a2);
  if ( v7 >= 0 )
  {
    v7 = (**(__int64 (__fastcall ***)(CClassicWindowManager *, GUID *, _QWORD *))v6)(
           v6,
           &GUID_226276c7_ca53_498c_b0be_ad1ea9c0ffee,
           a1);
    (*(void (__fastcall **)(CClassicWindowManager *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  else
  {
    if ( v6 )
      (*(void (__fastcall **)(CClassicWindowManager *))(*(_QWORD *)v6 + 16LL))(v6);
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v8);
  }
  return (unsigned int)v7;
}
