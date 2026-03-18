/*
 * XREFs of VacbLevelReference @ 0x1403B76DC
 * Callers:
 *     CcSetVacbLargeOffset @ 0x1402E1620 (CcSetVacbLargeOffset.c)
 *     CcExtendVacbArray @ 0x1403B68EC (CcExtendVacbArray.c)
 *     CcCalculateVacbLevelLockCount @ 0x1403B9270 (CcCalculateVacbLevelLockCount.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VacbLevelReference(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rax

  if ( a3 )
    v3 = 1024LL;
  else
    v3 = (-(__int64)((*(_DWORD *)(a1 + 152) & 0x200) != 0) & 0x400) + 1024;
  return a2 + v3;
}
