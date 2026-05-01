/*
 * XREFs of ??$MakeAndInitialize@VPenWorkspaceDiscoverBrokerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180099B38
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VPenWorkspaceDiscoverBrokerFactory@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180099A90 (-CreateInstance@-$SimpleClassFactory@VPenWorkspaceDiscoverBrokerFactory@@$0A@@WRL@Microsoft@@UEA.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180034A34 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?RuntimeClassInitialize@PenWorkspaceDiscoverBrokerFactory@@QEAAJXZ @ 0x180099BF8 (-RuntimeClassInitialize@PenWorkspaceDiscoverBrokerFactory@@QEAAJXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0PenWorkspaceDiscoverBrokerFactory@@QEAA@XZ @ 0x1803DE828 (--0PenWorkspaceDiscoverBrokerFactory@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<PenWorkspaceDiscoverBrokerFactory,IUnknown,>(_QWORD *a1)
{
  void *v2; // rax
  PenWorkspaceDiscoverBrokerFactory *v4; // rdi
  int v5; // ebx
  void *v6; // [rsp+30h] [rbp+8h] BYREF
  PenWorkspaceDiscoverBrokerFactory *v7; // [rsp+38h] [rbp+10h]

  *a1 = 0LL;
  v2 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v2;
  if ( !v2 )
    return 2147942414LL;
  v4 = PenWorkspaceDiscoverBrokerFactory::PenWorkspaceDiscoverBrokerFactory((PenWorkspaceDiscoverBrokerFactory *)v2);
  v7 = v4;
  v6 = 0LL;
  v5 = PenWorkspaceDiscoverBrokerFactory::RuntimeClassInitialize(v4);
  if ( v5 >= 0 )
  {
    v5 = (**(__int64 (__fastcall ***)(PenWorkspaceDiscoverBrokerFactory *, GUID *, _QWORD *))v4)(
           v4,
           &GUID_00000000_0000_0000_c000_000000000046,
           a1);
    (*(void (__fastcall **)(PenWorkspaceDiscoverBrokerFactory *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  else
  {
    if ( v4 )
      (*(void (__fastcall **)(PenWorkspaceDiscoverBrokerFactory *))(*(_QWORD *)v4 + 16LL))(v4);
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v6);
  }
  return (unsigned int)v5;
}
