/*
 * XREFs of ??$MakeAndInitialize@V?$SimpleClassFactory@VPenWorkspaceDiscoverBrokerFactory@@$0A@@WRL@Microsoft@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$SimpleClassFactory@VPenWorkspaceDiscoverBrokerFactory@@$0A@@12@@Z @ 0x1802C4414
 * Callers:
 *     ??$CreateClassFactory@V?$SimpleClassFactory@VPenWorkspaceDiscoverBrokerFactory@@$0A@@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180231900 (--$CreateClassFactory@V-$SimpleClassFactory@VPenWorkspaceDiscoverBrokerFactory@@$0A@@WRL@Microso.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180034A34 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??0?$SimpleClassFactory@VPenWorkspaceDiscoverBrokerFactory@@$0A@@WRL@Microsoft@@QEAA@XZ @ 0x18017766C (--0-$SimpleClassFactory@VPenWorkspaceDiscoverBrokerFactory@@$0A@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::SimpleClassFactory<PenWorkspaceDiscoverBrokerFactory,0>,Microsoft::WRL::SimpleClassFactory<PenWorkspaceDiscoverBrokerFactory,0>,>(
        _QWORD *a1)
{
  unsigned int v2; // edi
  void *v3; // rax
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  *a1 = 0LL;
  v3 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v3;
  if ( v3 )
  {
    v4 = Microsoft::WRL::SimpleClassFactory<PenWorkspaceDiscoverBrokerFactory,0>::SimpleClassFactory<PenWorkspaceDiscoverBrokerFactory,0>((__int64)v3);
    v5 = v4;
    v7 = 0LL;
    if ( v4 )
      (*(void (__fastcall **)(_QWORD *))(*v4 + 8LL))(v4);
    *a1 = v5;
    if ( v5 )
      (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
  }
  else
  {
    v2 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v7);
  return v2;
}
