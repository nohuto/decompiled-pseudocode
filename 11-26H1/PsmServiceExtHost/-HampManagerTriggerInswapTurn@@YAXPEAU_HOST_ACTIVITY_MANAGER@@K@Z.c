/*
 * XREFs of ?HampManagerTriggerInswapTurn@@YAXPEAU_HOST_ACTIVITY_MANAGER@@K@Z @ 0x180066910
 * Callers:
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000AC00 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall HampManagerTriggerInswapTurn(struct _HOST_ACTIVITY_MANAGER *a1, int a2)
{
  _DWORD *v2; // rcx

  if ( *((struct _HOST_ACTIVITY_MANAGER **)a1 + 118) != (struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 944)
    && (a2 || !*((_DWORD *)a1 + 240)) )
  {
    v2 = (_DWORD *)((char *)a1 + 964);
    ++*v2;
    RtlWakeAddressAll(v2);
  }
}
