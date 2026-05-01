/*
 * XREFs of ?HampHostIsResumed@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18006372C
 * Callers:
 *     ?HampActTryStart@@YA?AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z @ 0x18000A750 (-HampActTryStart@@YA-AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000AC00 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18000B680 (-HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 * Callees:
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x18007F90C (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 */

__int64 __fastcall HampHostIsResumed(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  unsigned int v1; // ebx
  int v3; // [rsp+38h] [rbp+10h] BYREF
  int v4; // [rsp+40h] [rbp+18h] BYREF

  v1 = 0;
  v3 = 0;
  v4 = 0;
  RmHamHostGetCurrentState(a1, (union _RM_OPTIMIZATION_STATE *)&v3, (union _RM_OPTIMIZATION_STATE *)&v4);
  if ( (v3 & 0x180) != 0 )
    return 0LL;
  LOBYTE(v1) = (v4 & 0x180) == 0;
  return v1;
}
