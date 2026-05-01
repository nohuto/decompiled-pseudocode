/*
 * XREFs of ?RmpPsmAppFamilyTableFind@@YAPEAU_RM_PSM_APP_FAMILY@@PEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FAMILY_ID@@@Z @ 0x180032B28
 * Callers:
 *     ?RmpPsmAppFamilyTableFindOrCreate@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_PSM_APP_FAMILY@@@Z @ 0x180032778 (-RmpPsmAppFamilyTableFindOrCreate@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM.c)
 * Callees:
 *     ?RmpPsmAppFamilyCompareForHashTable@@YAKPEAU_RTL_HASH_ENTRY@@PEAX@Z @ 0x180032C34 (-RmpPsmAppFamilyCompareForHashTable@@YAKPEAU_RTL_HASH_ENTRY@@PEAX@Z.c)
 *     ?RmpPsmAppFamilyIdHash@@YA_KPEAU_RM_PSM_APP_FAMILY_ID@@@Z @ 0x180032CA0 (-RmpPsmAppFamilyIdHash@@YA_KPEAU_RM_PSM_APP_FAMILY_ID@@@Z.c)
 */

struct _RM_PSM_APP_FAMILY *__fastcall RmpPsmAppFamilyTableFind(
        struct _RM_SERVICE_GLOBALS *a1,
        struct _RM_PSM_APP_FAMILY_ID *a2)
{
  unsigned __int64 v4; // rbp
  __int64 v5; // rbx
  __int64 v6; // r9
  int v7; // r8d

  v4 = RmpPsmAppFamilyIdHash(a2);
  v5 = 0LL;
LABEL_2:
  v6 = v4 & (-1LL << (*((_BYTE *)a1 + 3372) & 0x1F));
  if ( v5 )
    goto LABEL_5;
  v7 = *((_DWORD *)a1 + 843) >> 5;
  if ( v7 )
  {
    v5 = *((_QWORD *)a1 + 422)
       + 8LL
       * ((v7 - 1) & (HIBYTE(v6)
                    - 877075889
                    + 442596621 * (unsigned __int8)v6
                    + 37
                    * (BYTE6(v6)
                     + 37
                     * (BYTE5(v6) + 37
                                  * (BYTE4(v6) + 37 * (BYTE3(v6) + 37 * (BYTE2(v6) + 37 * (unsigned int)BYTE1(v6))))))));
LABEL_5:
    while ( 1 )
    {
      v5 = *(_QWORD *)v5;
      if ( (v5 & 1) != 0 )
        break;
      if ( v6 == ((-1LL << (*((_BYTE *)a1 + 3372) & 0x1F)) & *(_QWORD *)(v5 + 8)) )
      {
        if ( v5 && !RmpPsmAppFamilyCompareForHashTable((struct _RTL_HASH_ENTRY *)v5, a2) )
          goto LABEL_2;
        return (struct _RM_PSM_APP_FAMILY *)v5;
      }
    }
  }
  return 0LL;
}
