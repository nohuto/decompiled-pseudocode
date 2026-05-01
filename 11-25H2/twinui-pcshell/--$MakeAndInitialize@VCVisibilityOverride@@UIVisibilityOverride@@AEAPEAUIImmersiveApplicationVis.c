/*
 * XREFs of ??$MakeAndInitialize@VCVisibilityOverride@@UIVisibilityOverride@@AEAPEAUIImmersiveApplicationVisibilityOverride@@@Details@WRL@Microsoft@@YAJPEAPEAUIVisibilityOverride@@AEAPEAUIImmersiveApplicationVisibilityOverride@@@Z @ 0x1800806C4
 * Callers:
 *     ?s_CreateInstance@CVisibilityOverride@@SAJPEAUIImmersiveApplicationVisibilityOverride@@AEBU_GUID@@PEAPEAX@Z @ 0x1802EEE00 (-s_CreateInstance@CVisibilityOverride@@SAJPEAUIImmersiveApplicationVisibilityOverride@@AEBU_GUID.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180034A34 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??0CVisibilityOverride@@QEAA@XZ @ 0x1800807D0 (--0CVisibilityOverride@@QEAA@XZ.c)
 *     ?_SubscribeToWNF@CVisibilityOverride@@AEAAJXZ @ 0x180080880 (-_SubscribeToWNF@CVisibilityOverride@@AEAAJXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CVisibilityOverride,IVisibilityOverride,IImmersiveApplicationVisibilityOverride * &>(
        _QWORD *a1,
        __int64 *a2)
{
  void *v4; // rax
  int v5; // edi
  CVisibilityOverride *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rcx
  void *v10; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v4 = operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v4;
  if ( !v4 )
  {
    v5 = -2147024882;
LABEL_13:
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v10);
    return (unsigned int)v5;
  }
  v6 = CVisibilityOverride::CVisibilityOverride((CVisibilityOverride *)v4);
  v10 = 0LL;
  v7 = *a2;
  CVisibilityOverride::s_checkOcclusion = GetShellWindow();
  if ( *((_QWORD *)v6 + 10) != v7 )
  {
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    v8 = *((_QWORD *)v6 + 10);
    *((_QWORD *)v6 + 10) = v7;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v5 = CVisibilityOverride::_SubscribeToWNF(v6);
  if ( v5 >= 0 )
  {
    v5 = (**(__int64 (__fastcall ***)(CVisibilityOverride *, GUID *, _QWORD *))v6)(
           v6,
           &GUID_328dedb7_8f68_4e6c_a210_a6c2c37504e8,
           a1);
    (*(void (__fastcall **)(CVisibilityOverride *))(*(_QWORD *)v6 + 16LL))(v6);
    goto LABEL_13;
  }
  if ( v6 )
    (*(void (__fastcall **)(CVisibilityOverride *))(*(_QWORD *)v6 + 16LL))(v6);
  return (unsigned int)v5;
}
