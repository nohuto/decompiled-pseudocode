/*
 * XREFs of ??$MakeAndInitialize@VCShellSnapComponent@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180214B5C
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VCShellSnapComponent@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18022FA00 (-CreateInstance@-$SimpleClassFactory@VCShellSnapComponent@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180034A34 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?RuntimeClassInitialize@CShellSnapComponent@@QEAAJXZ @ 0x180214C14 (-RuntimeClassInitialize@CShellSnapComponent@@QEAAJXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0CShellSnapComponent@@QEAA@XZ @ 0x180579898 (--0CShellSnapComponent@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CShellSnapComponent,IUnknown,>(_QWORD *a1)
{
  void *v2; // rax
  CShellSnapComponent *v4; // rdi
  int v5; // ebx
  void *v6; // [rsp+40h] [rbp+8h] BYREF
  void *v7; // [rsp+48h] [rbp+10h]
  void *v8; // [rsp+50h] [rbp+18h]

  *a1 = 0LL;
  v2 = operator new(0x760uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v2;
  v7 = v2;
  if ( !v2 )
    return 2147942414LL;
  v8 = v2;
  v4 = CShellSnapComponent::CShellSnapComponent((CShellSnapComponent *)v2);
  v6 = 0LL;
  v5 = CShellSnapComponent::RuntimeClassInitialize(v4);
  if ( v5 >= 0 )
  {
    v5 = (**(__int64 (__fastcall ***)(CShellSnapComponent *, GUID *, _QWORD *))v4)(
           v4,
           &GUID_00000000_0000_0000_c000_000000000046,
           a1);
    (*(void (__fastcall **)(CShellSnapComponent *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  else
  {
    if ( v4 )
      (*(void (__fastcall **)(CShellSnapComponent *))(*(_QWORD *)v4 + 16LL))(v4);
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v6);
  }
  return (unsigned int)v5;
}
