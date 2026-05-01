/*
 * XREFs of ?RmpCommitValuesAdd@@YAJ_K0PEA_K@Z @ 0x180047A00
 * Callers:
 *     ?HampDepGroupProcessDonations@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180016330 (-HampDepGroupProcessDonations@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostCanStaticallyDonateCommit@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z @ 0x180078D10 (-HampHostCanStaticallyDonateCommit@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpCommitValuesAdd(unsigned __int64 a1, __int64 a2, unsigned __int64 *a3)
{
  if ( a1 == -1LL || a2 == -1 )
  {
    *a3 = -1LL;
    return 0LL;
  }
  else if ( a1 + a2 < a1 )
  {
    *a3 = -1LL;
    return 3221225621LL;
  }
  else
  {
    *a3 = a1 + a2;
    return 0LL;
  }
}
