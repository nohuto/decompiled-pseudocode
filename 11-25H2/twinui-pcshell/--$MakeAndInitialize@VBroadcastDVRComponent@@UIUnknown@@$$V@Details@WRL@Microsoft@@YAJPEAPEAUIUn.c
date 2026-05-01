/*
 * XREFs of ??$MakeAndInitialize@VBroadcastDVRComponent@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1801E83E8
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VBroadcastDVRComponent@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1801E8330 (-CreateInstance@-$SimpleClassFactory@VBroadcastDVRComponent@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnkno.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180034A34 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?RuntimeClassInitialize@BroadcastDVRComponent@@QEAAJXZ @ 0x1802C8B78 (-RuntimeClassInitialize@BroadcastDVRComponent@@QEAAJXZ.c)
 *     ??0BroadcastDVRComponent@@QEAA@XZ @ 0x1802CFD4C (--0BroadcastDVRComponent@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<BroadcastDVRComponent,IUnknown,>(_QWORD *a1)
{
  void *v2; // rax
  BroadcastDVRComponent *v4; // rdi
  int v5; // ebx
  void *v6; // [rsp+40h] [rbp+8h] BYREF
  BroadcastDVRComponent *v7; // [rsp+48h] [rbp+10h]
  void *v8; // [rsp+50h] [rbp+18h]

  *a1 = 0LL;
  v2 = operator new(0x238uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v2;
  v7 = (BroadcastDVRComponent *)v2;
  if ( !v2 )
    return 2147942414LL;
  v8 = v2;
  v4 = BroadcastDVRComponent::BroadcastDVRComponent((BroadcastDVRComponent *)v2);
  v7 = v4;
  v6 = 0LL;
  v5 = BroadcastDVRComponent::RuntimeClassInitialize(v4);
  if ( v5 >= 0 )
  {
    v5 = (**(__int64 (__fastcall ***)(BroadcastDVRComponent *, GUID *, _QWORD *))v4)(
           v4,
           &GUID_00000000_0000_0000_c000_000000000046,
           a1);
    (*(void (__fastcall **)(BroadcastDVRComponent *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  else
  {
    if ( v4 )
      (*(void (__fastcall **)(BroadcastDVRComponent *))(*(_QWORD *)v4 + 16LL))(v4);
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v6);
  }
  return (unsigned int)v5;
}
