/*
 * XREFs of ?HampUtilCompareHostIds@@YAJ_K0@Z @ 0x180019A2C
 * Callers:
 *     ?HampDepGroupAddHost@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180019884 (-HampDepGroupAddHost@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampDepGroupCompareDependencyLinkForRbTree@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x18001A828 (-HampDepGroupCompareDependencyLinkForRbTree@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HampUtilCompareHostIds(unsigned __int64 a1, unsigned __int64 a2)
{
  if ( a1 < a2 )
    return 0xFFFFFFFFLL;
  else
    return a2 < a1;
}
