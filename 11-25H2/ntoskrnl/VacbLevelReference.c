/*
 * XREFs of VacbLevelReference @ 0x1403B5BC0
 * Callers:
 *     CcSetVacbLargeOffset @ 0x1403B4820 (CcSetVacbLargeOffset.c)
 *     CcExtendVacbArray @ 0x1403B6928 (CcExtendVacbArray.c)
 *     CcCalculateVacbLevelLockCount @ 0x1404B8090 (CcCalculateVacbLevelLockCount.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VacbLevelReference(__int64 a1, __int64 a2, int a3)
{
  if ( a3 )
    return a2 + 1024;
  else
    return a2 + 2 * ((*(_DWORD *)(a1 + 152) & 0x200) + 512LL);
}
