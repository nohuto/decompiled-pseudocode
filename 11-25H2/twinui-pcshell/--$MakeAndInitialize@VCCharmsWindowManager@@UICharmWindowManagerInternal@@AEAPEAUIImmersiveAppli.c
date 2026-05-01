/*
 * XREFs of ??$MakeAndInitialize@VCCharmsWindowManager@@UICharmWindowManagerInternal@@AEAPEAUIImmersiveApplicationTransitionHelper@@@Details@WRL@Microsoft@@YAJPEAPEAUICharmWindowManagerInternal@@AEAPEAUIImmersiveApplicationTransitionHelper@@@Z @ 0x180230BA4
 * Callers:
 *     ?_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ @ 0x18004BEB0 (-_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180034A34 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??0CCharmsWindowManager@@QEAA@XZ @ 0x1802B80CC (--0CCharmsWindowManager@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CCharmsWindowManager,ICharmWindowManagerInternal,IImmersiveApplicationTransitionHelper * &>(
        _QWORD *a1,
        __int64 *a2)
{
  void *v4; // rax
  CCharmsWindowManager *v6; // rdi
  __int64 v7; // rbx
  unsigned int v8; // ebx
  void *v9; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v4 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v4;
  if ( v4 )
  {
    v6 = CCharmsWindowManager::CCharmsWindowManager((CCharmsWindowManager *)v4);
    v7 = *a2;
    if ( *((_QWORD *)v6 + 12) != v7 )
    {
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
      v9 = (void *)*((_QWORD *)v6 + 12);
      *((_QWORD *)v6 + 12) = v7;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v9);
    }
    v8 = (**(__int64 (__fastcall ***)(CCharmsWindowManager *, GUID *, _QWORD *))v6)(
           v6,
           &GUID_abda261c_6cda_4269_9160_4a16fbc0ffee,
           a1);
    (*(void (__fastcall **)(CCharmsWindowManager *))(*(_QWORD *)v6 + 16LL))(v6);
    return v8;
  }
  else
  {
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v9);
    return 2147942414LL;
  }
}
