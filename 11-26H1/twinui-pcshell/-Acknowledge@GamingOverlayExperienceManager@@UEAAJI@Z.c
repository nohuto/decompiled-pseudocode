/*
 * XREFs of ?Acknowledge@GamingOverlayExperienceManager@@UEAAJI@Z @ 0x180345420
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x180034ACC (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x1800CA6B4 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?event_is_signaled@wil@@YA_NPEAX@Z @ 0x180331744 (-event_is_signaled@wil@@YA_NPEAX@Z.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@IV?$shared_ptr@ULaunchForResultsQueuedOperationData@GamingOverlayExperienceManager@@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@ULaunchForResultsQueuedOperationData@GamingOverlayExperienceManager@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$shared_ptr@ULaunchForResultsQueuedOperationData@GamingOverlayExperienceManager@@@std@@@std@@@std@@@std@@@2@AEBI@Z @ 0x18035948C (-find@-$_Tree@V-$_Tmap_traits@IV-$shared_ptr@ULaunchForResultsQueuedOperationData@GamingOverlayE.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::Acknowledge(RTL_SRWLOCK *this, int a2)
{
  unsigned int v3; // ebx
  _QWORD *v4; // rdx
  void *v5; // rdx
  std::_Ref_count_base *v6; // rbx
  __int64 v7; // rdx
  void *v8; // rdx
  void *v9; // rdx
  std::_Ref_count_base *v11[2]; // [rsp+20h] [rbp-20h] BYREF
  RTL_SRWLOCK *v12[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  int v14; // [rsp+58h] [rbp+18h] BYREF

  v14 = a2;
  if ( a2 )
  {
    v12[0] = 0LL;
    wil::AcquireSRWLockExclusive(v12, this + 63);
    v11[0] = 0LL;
    std::_Tree<std::_Tmap_traits<unsigned int,std::shared_ptr<GamingOverlayExperienceManager::LaunchForResultsQueuedOperationData>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::shared_ptr<GamingOverlayExperienceManager::LaunchForResultsQueuedOperationData>>>,0>>::find(
      &this[65],
      v11,
      &v14);
    if ( v11[0] == this[65].Ptr )
    {
      v3 = -2147467260;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x104B,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
        (const char *)0x80004004LL);
    }
    else
    {
      v4 = (_QWORD *)((char *)v11[0] + 40);
      *(_OWORD *)v11 = 0LL;
      std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(v11, v4);
      v6 = v11[0];
      if ( v11[0] )
      {
        if ( wil::event_is_signaled(*(HANDLE *)v11[0], v5) )
        {
          v3 = -2147019873;
          v7 = 4177LL;
        }
        else
        {
          if ( !wil::event_is_signaled(*((HANDLE *)v6 + 1), v8) )
          {
            wil::details::SetEvent(*(wil::details **)v6, v9);
            if ( v11[1] )
              std::_Ref_count_base::_Decref(v11[1]);
            v3 = 0;
            goto LABEL_16;
          }
          v3 = -2147019873;
          v7 = 4178LL;
        }
      }
      else
      {
        v3 = -2147418113;
        v7 = 4174LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
        (const char *)v3);
      if ( v11[1] )
        std::_Ref_count_base::_Decref(v11[1]);
    }
LABEL_16:
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(v12);
    return v3;
  }
  v3 = -2147024809;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1042,
    (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
    (const char *)0x80070057LL);
  return v3;
}
