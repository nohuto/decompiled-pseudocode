/*
 * XREFs of ?RmpSystemResourceTimerDelete@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAX@Z @ 0x180064220
 * Callers:
 *     ?HampHostCleanup@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18005EED8 (-HampHostCleanup@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpSystemResourceTimerDelete(struct _RM_HAM_ACTIVITY_HOST *a1, void *a2)
{
  __int64 v2; // r8

  v2 = 48LL;
  if ( a1 )
    v2 = (__int64)a1 - 8;
  (*(void (__fastcall **)(void *))(*(_QWORD *)(*(_QWORD *)v2 + 40LL) + 176LL))(a2);
}
