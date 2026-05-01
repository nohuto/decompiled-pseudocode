/*
 * XREFs of ?RmpPsmAppFamilyTableRemove@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FAMILY@@@Z @ 0x180032550
 * Callers:
 *     ?RmpPsmAppFamilyTableCheckDelete@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FAMILY@@@Z @ 0x180031570 (-RmpPsmAppFamilyTableCheckDelete@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FAMILY@@@Z.c)
 *     ?RmpPsmAppFamilyTableTryRemoveActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800328D0 (-RmpPsmAppFamilyTableTryRemoveActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpPsmAppFamilyTableRemove(struct _RM_SERVICE_GLOBALS *a1, struct _RM_PSM_APP_FAMILY *a2)
{
  struct _RM_PSM_APP_FAMILY *i; // rcx
  __int64 v4; // [rsp+8h] [rbp+8h]

  v4 = *((_QWORD *)a2 + 1) & (-1LL << (*((_DWORD *)a1 + 843) & 0x1F));
  for ( i = (struct _RM_PSM_APP_FAMILY *)(*((_QWORD *)a1 + 422)
                                        + 8LL
                                        * (((*((_DWORD *)a1 + 843) >> 5) - 1) & (HIBYTE(v4)
                                                                               + 37
                                                                               * (BYTE6(v4)
                                                                                + 37
                                                                                * (BYTE5(v4)
                                                                                 + 37
                                                                                 * (BYTE4(v4)
                                                                                  + 37
                                                                                  * (BYTE3(v4)
                                                                                   + 374026047
                                                                                   + 37
                                                                                   * (BYTE2(v4)
                                                                                    + 37
                                                                                    * (BYTE1(v4)
                                                                                     + 37
                                                                                     * (unsigned int)(unsigned __int8)v4)))))))));
        (*(_QWORD *)i & 1) == 0;
        i = *(struct _RM_PSM_APP_FAMILY **)i )
  {
    if ( *(struct _RM_PSM_APP_FAMILY **)i == a2 )
    {
      *(_QWORD *)i = *(_QWORD *)a2;
      --*((_DWORD *)a1 + 842);
      *(_QWORD *)a2 |= 0x8000000000000002uLL;
      break;
    }
  }
  HampFreeHeap(a2);
}
