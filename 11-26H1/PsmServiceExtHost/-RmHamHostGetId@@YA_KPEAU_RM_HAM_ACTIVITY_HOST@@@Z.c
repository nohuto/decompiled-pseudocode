/*
 * XREFs of ?RmHamHostGetId@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18005EAB0
 * Callers:
 *     ?RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1_KW4_HAM_HOST_WAIT_TYPE@@@Z @ 0x18007F970 (-RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1_KW4_HAM_HOST_WAIT_TYPE.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RmHamHostGetId(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  __int64 v1; // rax

  v1 = 32LL;
  if ( a1 )
    v1 = (__int64)a1 - 24;
  return *(_QWORD *)v1;
}
