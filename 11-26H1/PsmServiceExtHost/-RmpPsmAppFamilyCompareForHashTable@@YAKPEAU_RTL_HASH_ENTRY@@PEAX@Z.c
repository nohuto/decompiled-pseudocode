/*
 * XREFs of ?RmpPsmAppFamilyCompareForHashTable@@YAKPEAU_RTL_HASH_ENTRY@@PEAX@Z @ 0x180032C34
 * Callers:
 *     ?RmpPsmAppFamilyTableFindByHostInfo@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_PSM_APP_FAMILY@@@Z @ 0x1800329C8 (-RmpPsmAppFamilyTableFindByHostInfo@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_.c)
 *     ?RmpPsmAppFamilyTableFind@@YAPEAU_RM_PSM_APP_FAMILY@@PEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FAMILY_ID@@@Z @ 0x180032B28 (-RmpPsmAppFamilyTableFind@@YAPEAU_RM_PSM_APP_FAMILY@@PEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FA.c)
 * Callees:
 *     memcmp_0 @ 0x1800A28B6 (memcmp_0.c)
 */

__int64 __fastcall RmpPsmAppFamilyCompareForHashTable(const wchar_t *a1, const wchar_t *a2)
{
  char *v3; // rsi
  unsigned int v4; // ebx

  v3 = (char *)(a1 + 8);
  v4 = 0;
  if ( !_wcsicmp(a2, a1 + 8) )
    LOBYTE(v4) = memcmp_0(a2 + 232, v3 + 464, 0x48uLL) == 0;
  return v4;
}
