/*
 * XREFs of KiReleaseThreadStateLock @ 0x140305180
 * Callers:
 *     KiInitializeForegroundBoostThread @ 0x140202D64 (KiInitializeForegroundBoostThread.c)
 *     ?KiSetIdealProcessorThread@@YAJPEAU_KTHREAD@@KEPEAKE@Z @ 0x140202DF8 (-KiSetIdealProcessorThread@@YAJPEAU_KTHREAD@@KEPEAKE@Z.c)
 *     ?KiRemoveThreadFromSchedulingGroup@@YAXPEAU_KTHREAD@@EPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1402040B4 (-KiRemoveThreadFromSchedulingGroup@@YAXPEAU_KTHREAD@@EPEAU_SINGLE_LIST_ENTRY@@@Z.c)
 *     KiUpdateProcessThreadQos @ 0x140204184 (KiUpdateProcessThreadQos.c)
 *     KeQueryTotalCycleTimeThread @ 0x14021C500 (KeQueryTotalCycleTimeThread.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x14021FEA0 (KiSendHeteroRescheduleIntRequestHelper.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x1402398D4 (KeSetThreadChargeOnlySchedulingGroup.c)
 *     ?KiAddThreadToSchedulingGroup@@YAXPEAU_KTHREAD@@PEAU_KSCHEDULING_GROUP@@EPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x140239DC0 (-KiAddThreadToSchedulingGroup@@YAXPEAU_KTHREAD@@PEAU_KSCHEDULING_GROUP@@EPEAU_SINGLE_LIST_ENTRY@.c)
 *     KeSetThreadPpmPolicy @ 0x14030F130 (KeSetThreadPpmPolicy.c)
 *     KeUpdateThreadTag @ 0x14030F4C0 (KeUpdateThreadTag.c)
 *     PspRevertContainerImpersonation @ 0x14037F6B0 (PspRevertContainerImpersonation.c)
 *     KeSetThreadSchedulerAssist @ 0x1403C99B8 (KeSetThreadSchedulerAssist.c)
 *     KiUpdateVpBackingThreadPriorityFromTopLevel @ 0x1403C9D80 (KiUpdateVpBackingThreadPriorityFromTopLevel.c)
 *     KiAdjustCoreIsolationReasonThread @ 0x1404CCC84 (KiAdjustCoreIsolationReasonThread.c)
 *     KiAdjustUserIsolationDomainThread @ 0x1404CCE24 (KiAdjustUserIsolationDomainThread.c)
 *     KiApplyForegroundBoostThread @ 0x1405243B4 (KiApplyForegroundBoostThread.c)
 *     KeTryToFreezeThreadStack @ 0x1405EE9D0 (KeTryToFreezeThreadStack.c)
 *     ?KiAbpCrossThreadDelete@LegacyAutoBoost@@YAXPEAXPEAU_KTHREAD@@@Z @ 0x1406003AC (-KiAbpCrossThreadDelete@LegacyAutoBoost@@YAXPEAXPEAU_KTHREAD@@@Z.c)
 *     MiTradeIsolatedThreadStackPage @ 0x1406F82F8 (MiTradeIsolatedThreadStackPage.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x140305020 (KxWaitForLockChainValid.c)
 *     KiWakeAddressAll @ 0x140305268 (KiWakeAddressAll.c)
 */

void __fastcall KiReleaseThreadStateLock(unsigned __int64 a1, __int64 a2, unsigned __int64 *a3)
{
  __int64 v3; // rbx
  __int64 v4; // r9
  unsigned __int64 v5; // rax
  volatile signed __int64 *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  signed __int32 v9[10]; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = a1;
  v3 = a2;
  if ( *(_QWORD *)a2 )
  {
    v4 = *(_QWORD *)(a2 + 8);
    v10 = v4 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( (v4 & 1) != 0 )
    {
      v5 = *(_QWORD *)((v4 & 0xFFFFFFFFFFFFFFFEuLL) + 36504);
      a3 = (unsigned __int64 *)(v5 + 8);
      LODWORD(v5) = *(unsigned __int8 *)v5;
      if ( !(_DWORD)v5 )
      {
LABEL_5:
        *(_QWORD *)(v3 + 8) = 0LL;
        goto LABEL_6;
      }
    }
    else
    {
      a3 = &v10;
      LODWORD(v5) = 1;
    }
    do
    {
      v5 = (unsigned int)(v5 - 1);
      a2 = a3[v5];
      _InterlockedAnd64((volatile signed __int64 *)(a2 + 48), 0LL);
    }
    while ( (_DWORD)v5 );
    goto LABEL_5;
  }
LABEL_6:
  v6 = *(volatile signed __int64 **)(v3 + 16);
  if ( !v6 )
    return;
  if ( (KiVelocityFlags & 0x200000) == 0 )
  {
    _InterlockedAnd64(v6, 0LL);
    return;
  }
  _m_prefetchw((const void *)(v3 + 24));
  v7 = *(_QWORD *)(v3 + 24);
  if ( !v7 )
  {
    if ( v3 + 24 == _InterlockedCompareExchange64(*(volatile signed __int64 **)(v3 + 32), 0LL, v3 + 24) )
      return;
    v7 = KxWaitForLockChainValid((__int64 *)(v3 + 24), a2, (__int64)a3);
  }
  *(_QWORD *)(v3 + 24) = 0LL;
  v8 = *(_QWORD *)(v3 + 32);
  if ( (((unsigned __int8)v8 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v7 + 8), v8)) & 4) != 0 )
  {
    _InterlockedOr(v9, 0);
    KiWakeAddressAll(v7 + 8, v8, a3);
  }
}
