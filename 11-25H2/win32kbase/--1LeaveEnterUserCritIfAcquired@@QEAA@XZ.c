/*
 * XREFs of ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x14002A038
 * Callers:
 *     ?DispBrokerChangeDisplaySettings@@YAJU_LUID@@IPEAU_devicemodeW@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@_NAEAW4_DXGK_DIAG_CDS_STAGE@@@Z @ 0x140029D18 (-DispBrokerChangeDisplaySettings@@YAJU_LUID@@IPEAU_devicemodeW@@IPEAU_DXGK_DISPLAY_SCENARIO_CONT.c)
 *     ??$SyncMessage@$07@DispBrokerClient@DispBroker@@QEAAJPEAU?$AlpcRequest@$07@1@PEA_KPEAU?$AlpcReply@$07@1@@Z @ 0x140029F44 (--$SyncMessage@$07@DispBrokerClient@DispBroker@@QEAAJPEAU-$AlpcRequest@$07@1@PEA_KPEAU-$AlpcRepl.c)
 *     ?Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ @ 0x140153980 (-Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ.c)
 *     ?DispBrokerSetDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@IIQEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@_N@Z @ 0x1401ABC94 (-DispBrokerSetDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@IIQEAU_DXGK_DISPLAY_SCENA.c)
 * Callees:
 *     EnterSharedCrit @ 0x14008A250 (EnterSharedCrit.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1401617E4 (DestroySharedUserCritDeferredUnlockList.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 */

void __fastcall LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired(LeaveEnterUserCritIfAcquired *this)
{
  unsigned int v2; // esi
  __int64 UserSessionState; // rbx
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rax

  if ( *(_DWORD *)this )
  {
    if ( *(_DWORD *)this == 1 )
    {
      EnterSharedCrit(0LL, *((unsigned int *)this + 1));
      return;
    }
    if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
    {
      v2 = *((_DWORD *)this + 1);
      UserSessionState = W32GetUserSessionState();
      if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
      {
        v5 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
               UserSessionState,
               0LL,
               v2,
               _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
      }
      else
      {
        LOBYTE(v4) = 1;
        v5 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(UserSessionState, v4);
      }
      v6 = v5;
      *(_QWORD *)(UserSessionState + 24) = v5;
      if ( !(unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
      {
        if ( !v6 )
          return;
        if ( v2 )
          goto LABEL_19;
        goto LABEL_17;
      }
    }
    else
    {
      UserSessionState = W32GetUserSessionState();
      if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
      {
        v8 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
               UserSessionState,
               0LL,
               0LL,
               _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
      }
      else
      {
        LOBYTE(v7) = 1;
        v8 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(UserSessionState, v7);
      }
      v6 = v8;
      *(_QWORD *)(UserSessionState + 24) = v8;
      if ( !(unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
      {
        if ( !v6 )
          return;
LABEL_17:
        *(_BYTE *)(v6 + 1708) = 1;
LABEL_19:
        DestroySharedUserCritDeferredUnlockList(UserSessionState + 19688);
        DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 19744);
        DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 19728);
        return;
      }
    }
    if ( !v6 )
      return;
    goto LABEL_19;
  }
}
