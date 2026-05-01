/*
 * XREFs of ?RmpQoSDisableWatchdogForHost@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800462E4
 * Callers:
 *     ?RmpQoSEnableDisableForHost@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180045A94 (-RmpQoSEnableDisableForHost@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpQoSDisableForHostOnTimerExpiry@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18004621C (-RmpQoSDisableForHostOnTimerExpiry@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     CempListEntryRemoveAndClear @ 0x180013890 (CempListEntryRemoveAndClear.c)
 */

void __fastcall RmpQoSDisableWatchdogForHost(struct _RM_ACTIVITY_HOST *a1)
{
  char *v1; // r8

  CempListEntryRemoveAndClear((_QWORD *)a1 + 158);
  RmpObjectRelease(v1);
}
