/*
 * XREFs of ?WindowSnapStateChanged@InteractionTracker@SnapInteraction@@UEAAJPEAUIApplicationView@@W4WINDOW_SNAP_STATE@@@Z @ 0x1805869C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??1?$com_ptr@UISnapComponent@@@winrt@@QEAA@XZ @ 0x180066C0C (--1-$com_ptr@UISnapComponent@@@winrt@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180142B80 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?FindRecord@InteractionTracker@SnapInteraction@@AEAA?AV?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@AEBU?$com_ptr@UIApplicationView@@@winrt@@@Z @ 0x18018D714 (-FindRecord@InteractionTracker@SnapInteraction@@AEAA-AV-$shared_ptr@VInteractionRecord@SnapInter.c)
 *     ?IsSnapped@InteractionRecord@SnapInteraction@@QEAAX_N@Z @ 0x1801D3F7C (-IsSnapped@InteractionRecord@SnapInteraction@@QEAAX_N@Z.c)
 *     ?OnViewSnapped@InteractionTracker@SnapInteraction@@AEAAXAEBU?$com_ptr@UIApplicationView@@@winrt@@@Z @ 0x180586688 (-OnViewSnapped@InteractionTracker@SnapInteraction@@AEAAXAEBU-$com_ptr@UIApplicationView@@@winrt@.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall SnapInteraction::InteractionTracker::WindowSnapStateChanged(RTL_SRWLOCK *a1, __int64 a2, int a3)
{
  const char *v6; // r9
  __int64 result; // rax
  SnapInteraction::InteractionRecord *v8; // [rsp+20h] [rbp-28h] BYREF
  std::_Ref_count_base *v9; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF
  RTL_SRWLOCK *v13; // [rsp+68h] [rbp+20h] BYREF

  v11 = 0LL;
  if ( a2 )
  {
    winrt::com_ptr<ISnapComponent>::~com_ptr<ISnapComponent>(&v11);
    v11 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v11);
  }
  try
  {
    if ( a3 )
    {
      if ( a3 == 1 )
        SnapInteraction::InteractionTracker::OnViewSnapped(a1 - 1, &v11);
    }
    else
    {
      wil::AcquireSRWLockExclusive(&v13, a1 + 12);
      SnapInteraction::InteractionTracker::FindRecord((__int64)&a1[-1], &v8, &v11);
      if ( v8 )
        SnapInteraction::InteractionRecord::IsSnapped((RTL_SRWLOCK *)v8, 0);
      if ( v9 )
        std::_Ref_count_base::_Decref(v9);
      CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v13);
    }
    winrt::com_ptr<ISnapComponent>::~com_ptr<ISnapComponent>(&v11);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xF1,
                           (int)"pcshell\\twinui\\snapcomponent\\lib\\interactiontracker.cpp",
                           v6);
  }
  return result;
}
