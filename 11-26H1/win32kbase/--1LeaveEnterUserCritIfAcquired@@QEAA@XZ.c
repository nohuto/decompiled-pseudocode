/*
 * XREFs of ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x14007DA94
 * Callers:
 *     ?Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ @ 0x14005FB50 (-Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ.c)
 *     ?DispBrokerQueryDisplayConfig@@YAJIIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@_N@Z @ 0x14007D67C (-DispBrokerQueryDisplayConfig@@YAJIIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG.c)
 *     ?DispBrokerSetDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@IIQEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@_N@Z @ 0x14018B1F4 (-DispBrokerSetDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@IIQEAU_DXGK_DISPLAY_SCENA.c)
 *     ?DispBrokerChangeDisplaySettings@@YAJU_LUID@@IPEAU_devicemodeW@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@_NAEAW4_DXGK_DIAG_CDS_STAGE@@@Z @ 0x1401981C0 (-DispBrokerChangeDisplaySettings@@YAJU_LUID@@IPEAU_devicemodeW@@IPEAU_DXGK_DISPLAY_SCENARIO_CONT.c)
 * Callees:
 *     EnterSharedCrit @ 0x14003D800 (EnterSharedCrit.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 */

void __fastcall LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired(
        LeaveEnterUserCritIfAcquired *this,
        int a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // ebx
  __int64 UserSessionState; // rdi
  __int64 v6; // rax

  if ( *(_DWORD *)this )
  {
    v4 = *((_DWORD *)this + 1);
    if ( *(_DWORD *)this == 1 )
    {
      EnterSharedCrit(0LL, v4, a3, a4);
    }
    else
    {
      UserSessionState = W32GetUserSessionState((_DWORD)this, a2, a3);
      v6 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
             UserSessionState,
             0LL,
             v4,
             _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
      *(_QWORD *)(UserSessionState + 24) = v6;
      if ( v6 )
      {
        DestroySharedUserCritDeferredUnlockList(UserSessionState + 19720);
        DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 19776);
        DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 19760);
      }
    }
  }
}
