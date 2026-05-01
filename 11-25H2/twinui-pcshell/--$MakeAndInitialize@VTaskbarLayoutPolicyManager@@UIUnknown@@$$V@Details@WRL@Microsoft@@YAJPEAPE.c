/*
 * XREFs of ??$MakeAndInitialize@VTaskbarLayoutPolicyManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1801F5398
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VTaskbarLayoutPolicyManager@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18031D510 (-CreateInstance@-$SimpleClassFactory@VTaskbarLayoutPolicyManager@@$0A@@WRL@Microsoft@@UEAAJPEAUI.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180034A34 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?RuntimeClassInitialize@TaskbarLayoutPolicyManager@@QEAAJXZ @ 0x1801F5454 (-RuntimeClassInitialize@TaskbarLayoutPolicyManager@@QEAAJXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0TaskbarLayoutPolicyManager@@QEAA@XZ @ 0x18031D188 (--0TaskbarLayoutPolicyManager@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<TaskbarLayoutPolicyManager,IUnknown,>(_QWORD *a1)
{
  void *v2; // rax
  int v3; // ebx
  TaskbarLayoutPolicyManager *v4; // rdi
  void *v6; // [rsp+30h] [rbp+8h] BYREF
  TaskbarLayoutPolicyManager *v7; // [rsp+38h] [rbp+10h] BYREF

  *a1 = 0LL;
  v2 = operator new(0xA0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v2;
  v7 = (TaskbarLayoutPolicyManager *)v2;
  if ( v2 )
  {
    v4 = TaskbarLayoutPolicyManager::TaskbarLayoutPolicyManager((TaskbarLayoutPolicyManager *)v2);
    v7 = v4;
    v6 = 0LL;
    v3 = TaskbarLayoutPolicyManager::RuntimeClassInitialize(v4);
    if ( v3 >= 0 )
    {
      v3 = (**(__int64 (__fastcall ***)(TaskbarLayoutPolicyManager *, GUID *, _QWORD *))v4)(
             v4,
             &GUID_00000000_0000_0000_c000_000000000046,
             a1);
      (*(void (__fastcall **)(TaskbarLayoutPolicyManager *))(*(_QWORD *)v4 + 16LL))(v4);
      return (unsigned int)v3;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v7);
  }
  else
  {
    v3 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v6);
  return (unsigned int)v3;
}
