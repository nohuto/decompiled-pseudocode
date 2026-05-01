/*
 * XREFs of ??$MakeAndInitialize@V?$SimpleClassFactory@VPeopleBarJumpViewExperienceManagerFactory@@$0A@@WRL@Microsoft@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$SimpleClassFactory@VPeopleBarJumpViewExperienceManagerFactory@@$0A@@12@@Z @ 0x180176F1C
 * Callers:
 *     ??$CreateClassFactory@V?$SimpleClassFactory@VPeopleBarJumpViewExperienceManagerFactory@@$0A@@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180176E50 (--$CreateClassFactory@V-$SimpleClassFactory@VPeopleBarJumpViewExperienceManagerFactory@@$0A@@WRL.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180034A34 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??0?$SimpleClassFactory@VPeopleBarJumpViewExperienceManagerFactory@@$0A@@WRL@Microsoft@@QEAA@XZ @ 0x18017749C (--0-$SimpleClassFactory@VPeopleBarJumpViewExperienceManagerFactory@@$0A@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::SimpleClassFactory<PeopleBarJumpViewExperienceManagerFactory,0>,Microsoft::WRL::SimpleClassFactory<PeopleBarJumpViewExperienceManagerFactory,0>,>(
        __int64 *a1)
{
  void *v2; // rax
  __int64 v4; // rax
  __int64 v5; // rbx
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v2 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v2;
  if ( v2 )
  {
    v4 = Microsoft::WRL::SimpleClassFactory<PeopleBarJumpViewExperienceManagerFactory,0>::SimpleClassFactory<PeopleBarJumpViewExperienceManagerFactory,0>(v2);
    v5 = v4;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    *a1 = v5;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    return 0LL;
  }
  else
  {
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v6);
    return 2147942414LL;
  }
}
