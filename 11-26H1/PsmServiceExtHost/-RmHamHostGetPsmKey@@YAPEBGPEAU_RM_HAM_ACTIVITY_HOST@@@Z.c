/*
 * XREFs of ?RmHamHostGetPsmKey@@YAPEBGPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800684F8
 * Callers:
 *     ?RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1_KW4_HAM_HOST_WAIT_TYPE@@@Z @ 0x18007F970 (-RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1_KW4_HAM_HOST_WAIT_TYPE.c)
 * Callees:
 *     <none>
 */

const unsigned __int16 *__fastcall RmHamHostGetPsmKey(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  return (const unsigned __int16 *)((char *)a1 + 24);
}
