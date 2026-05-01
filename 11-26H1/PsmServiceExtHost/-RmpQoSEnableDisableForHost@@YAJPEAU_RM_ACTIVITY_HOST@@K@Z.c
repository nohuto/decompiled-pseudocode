/*
 * XREFs of ?RmpQoSEnableDisableForHost@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180045A94
 * Callers:
 *     ?RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@K@Z @ 0x180044DD0 (-RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS.c)
 * Callees:
 *     CempListEntryIsNull @ 0x180014218 (CempListEntryIsNull.c)
 *     ?RmpQoSSetForHost@@YAJPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180045B40 (-RmpQoSSetForHost@@YAJPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpQoSCheckHostsSetTimer@@YAXPEAU_RM_QOS_CONTEXT@@_K@Z @ 0x180046130 (-RmpQoSCheckHostsSetTimer@@YAXPEAU_RM_QOS_CONTEXT@@_K@Z.c)
 *     ?RmpQoSEnableWatchdogForHost@@YAXPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@_K@Z @ 0x180046274 (-RmpQoSEnableWatchdogForHost@@YAXPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@_K@Z.c)
 *     ?RmpQoSDisableWatchdogForHost@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800462E4 (-RmpQoSDisableWatchdogForHost@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall RmpQoSEnableDisableForHost(struct _RM_ACTIVITY_HOST *a1, unsigned int a2)
{
  __int64 v2; // rbp
  struct _RM_QOS_CONTEXT *v4; // rbp
  int v6; // eax
  unsigned int v7; // esi
  unsigned __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)a1 + 6);
  v9 = 0LL;
  v4 = (struct _RM_QOS_CONTEXT *)(v2 + 176);
  RtlQueryUnbiasedInterruptTime(&v9);
  v6 = RmpQoSSetForHost(v4, a1, a2);
  v7 = v6;
  if ( !a2 )
  {
    if ( !(unsigned int)CempListEntryIsNull((_QWORD *)a1 + 158) )
      RmpQoSDisableWatchdogForHost(a1);
    goto LABEL_4;
  }
  if ( v6 >= 0 )
  {
    RmpQoSEnableWatchdogForHost(v4, a1, v9);
LABEL_4:
    RmpQoSCheckHostsSetTimer(v4, v9);
  }
  return v7;
}
