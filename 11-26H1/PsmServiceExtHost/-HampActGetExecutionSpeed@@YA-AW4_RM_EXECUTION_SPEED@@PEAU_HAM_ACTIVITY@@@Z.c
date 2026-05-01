/*
 * XREFs of ?HampActGetExecutionSpeed@@YA?AW4_RM_EXECUTION_SPEED@@PEAU_HAM_ACTIVITY@@@Z @ 0x18000FCF0
 * Callers:
 *     ?HampActTryStart@@YA?AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z @ 0x18000A750 (-HampActTryStart@@YA-AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActUpdateProperties@@YAJPEAU_HAM_ACTIVITY@@PEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z @ 0x18000FABC (-HampActUpdateProperties@@YAJPEAU_HAM_ACTIVITY@@PEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z.c)
 *     ?HampHostIsForegroundBoostedOrPending@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003F7F4 (-HampHostIsForegroundBoostedOrPending@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HampActGetExecutionSpeed(__int64 a1)
{
  __int16 v1; // dx
  unsigned int v2; // ecx
  unsigned int v4; // ecx
  unsigned int v5; // ecx

  v1 = *(_WORD *)(a1 + 424);
  if ( (v1 & 0xC0) == 0xC0 )
  {
    v4 = *(_DWORD *)(a1 + 480) & 3;
    if ( v4 <= 2 )
      return 2;
    return v4;
  }
  else if ( (v1 & 0xEu) < 8 || (v1 & 0x30u) < 0x20 )
  {
    v2 = *(_DWORD *)(a1 + 480) & 3;
    if ( !v2 )
      return 0;
    return v2;
  }
  else
  {
    v5 = *(_DWORD *)(a1 + 480) & 3;
    if ( v5 <= 1 )
      return 1;
    return v5;
  }
}
