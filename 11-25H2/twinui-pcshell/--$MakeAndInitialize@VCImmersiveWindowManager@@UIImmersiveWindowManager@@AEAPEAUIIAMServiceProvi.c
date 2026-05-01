/*
 * XREFs of ??$MakeAndInitialize@VCImmersiveWindowManager@@UIImmersiveWindowManager@@AEAPEAUIIAMServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIImmersiveWindowManager@@AEAPEAUIIAMServiceProvider@@@Z @ 0x18023F9D0
 * Callers:
 *     ?s_CreateInstance@CImmersiveWindowManager@@SAJPEAUIIAMServiceProvider@@AEBU_GUID@@PEAPEAX@Z @ 0x1802B9FE8 (-s_CreateInstance@CImmersiveWindowManager@@SAJPEAUIIAMServiceProvider@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180034A34 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?RuntimeClassInitialize@CImmersiveWindowManager@@QEAAJPEAUIIAMServiceProvider@@@Z @ 0x180203958 (-RuntimeClassInitialize@CImmersiveWindowManager@@QEAAJPEAUIIAMServiceProvider@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0CImmersiveWindowManager@@QEAA@XZ @ 0x1802EF8A8 (--0CImmersiveWindowManager@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CImmersiveWindowManager,IImmersiveWindowManager,IIAMServiceProvider * &>(
        _QWORD *a1,
        struct IIAMServiceProvider **a2)
{
  void *v4; // rax
  CImmersiveWindowManager *v6; // rdi
  int v7; // ebx
  void *v8; // [rsp+30h] [rbp+8h] BYREF
  CImmersiveWindowManager *v9; // [rsp+40h] [rbp+18h]

  *a1 = 0LL;
  v4 = operator new(0x108uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v4;
  if ( !v4 )
    return 2147942414LL;
  v6 = CImmersiveWindowManager::CImmersiveWindowManager((CImmersiveWindowManager *)v4);
  v9 = v6;
  v8 = 0LL;
  v7 = CImmersiveWindowManager::RuntimeClassInitialize(v6, *a2);
  if ( v7 >= 0 )
  {
    v7 = (**(__int64 (__fastcall ***)(CImmersiveWindowManager *, GUID *, _QWORD *))v6)(
           v6,
           &GUID_611aa8fe_b694_4129_86af_2c2553fff785,
           a1);
    (*(void (__fastcall **)(CImmersiveWindowManager *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  else if ( v6 )
  {
    (*(void (__fastcall **)(CImmersiveWindowManager *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v8);
  return (unsigned int)v7;
}
