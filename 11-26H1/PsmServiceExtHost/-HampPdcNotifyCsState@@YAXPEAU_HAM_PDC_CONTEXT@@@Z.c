/*
 * XREFs of ?HampPdcNotifyCsState@@YAXPEAU_HAM_PDC_CONTEXT@@@Z @ 0x180019C64
 * Callers:
 *     ?HampPdcPlmPhaseNotificationCallback@@YAJPEAXK@Z @ 0x18001B490 (-HampPdcPlmPhaseNotificationCallback@@YAJPEAXK@Z.c)
 *     ?HampPdcExitPlmPhase@@YAXPEAU_HAM_PDC_CONTEXT@@@Z @ 0x18006C8F0 (-HampPdcExitPlmPhase@@YAXPEAU_HAM_PDC_CONTEXT@@@Z.c)
 * Callees:
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800094B0 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampManagerReleaseLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18000CBD8 (-HampManagerReleaseLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerAcquireLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18000CC30 (-HampManagerAcquireLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180017D00 (-HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180018CB0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?ArManagerUpdateCsState@@YAXPEAT_HAM_PDC_STATE_UPDATE@@@Z @ 0x18001B5E8 (-ArManagerUpdateCsState@@YAXPEAT_HAM_PDC_STATE_UPDATE@@@Z.c)
 *     ?HampManagerGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x18003CB1C (-HampManagerGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ?HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERARCHY_DEPTH@@PEAU1@@Z @ 0x18003CBCC (-HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERAR.c)
 */

void __fastcall HampPdcNotifyCsState(struct _HOST_ACTIVITY_MANAGER **a1)
{
  struct _HOST_ACTIVITY_MANAGER *v2; // rcx
  struct _RM_HAM_ACTIVITY_HOST *i; // rax
  struct _RM_HAM_ACTIVITY_HOST *v4; // rbx
  bool v5; // [rsp+30h] [rbp+8h] BYREF

  HampManagerAcquireLockShared(*a1);
  v2 = *a1;
  v5 = *((_DWORD *)a1 + 21) != 0;
  HampManagerReleaseLockShared(v2);
  ArManagerUpdateCsState((union _HAM_PDC_STATE_UPDATE *)&v5);
  for ( i = (struct _RM_HAM_ACTIVITY_HOST *)HampHostEnumerateHostsInNode((char *)*a1 + 352, 0LL, 0LL);
        ;
        i = HampManagerGetNextHost(v4) )
  {
    v4 = i;
    if ( !i )
      break;
    HampHostAcquireLockExclusiveEx(i, 0);
    HampHostCheckQueueStateWorker(v4, 0);
    HampHostReleaseLockExclusive(v4);
  }
}
