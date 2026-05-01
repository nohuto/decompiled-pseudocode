/*
 * XREFs of ?RmpPsmAppFamilyTableFindOrCreate@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_PSM_APP_FAMILY@@@Z @ 0x180032778
 * Callers:
 *     ?RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPLICATION@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18008383C (-RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPLI.c)
 * Callees:
 *     ?RmpPsmAppFamilyTableAdd@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FAMILY@@@Z @ 0x180031D98 (-RmpPsmAppFamilyTableAdd@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FAMILY@@@Z.c)
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x180032320 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     ?RmpPsmAppFamilyTableFind@@YAPEAU_RM_PSM_APP_FAMILY@@PEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FAMILY_ID@@@Z @ 0x180032B28 (-RmpPsmAppFamilyTableFind@@YAPEAU_RM_PSM_APP_FAMILY@@PEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FA.c)
 *     ?RmpPsmAppFamilyIdHash@@YA_KPEAU_RM_PSM_APP_FAMILY_ID@@@Z @ 0x180032CA0 (-RmpPsmAppFamilyIdHash@@YA_KPEAU_RM_PSM_APP_FAMILY_ID@@@Z.c)
 *     ?RmpPsmAppFamilyIdFromPsmAppInstanceId@@YAJPEAU_RM_PSM_HOST_INFO@@PEAU_RM_PSM_APP_FAMILY_ID@@@Z @ 0x180033270 (-RmpPsmAppFamilyIdFromPsmAppInstanceId@@YAJPEAU_RM_PSM_HOST_INFO@@PEAU_RM_PSM_APP_FAMILY_ID@@@Z.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

int __fastcall RmpPsmAppFamilyTableFindOrCreate(
        struct _RM_SERVICE_GLOBALS *a1,
        struct _RM_PSM_HOST_INFO *a2,
        struct _RM_PSM_APP_FAMILY **a3)
{
  int result; // eax
  struct _RM_PSM_APP_FAMILY *v7; // rax
  char *Heap; // rax
  char *v9; // rbx
  __int64 v10; // r8
  _OWORD *v11; // rdx
  _OWORD *v12; // rax
  __int128 v13; // xmm1
  _BYTE v14[544]; // [rsp+20h] [rbp-248h] BYREF

  memset_0(v14, 0, 0x218uLL);
  result = RmpPsmAppFamilyIdFromPsmAppInstanceId(a2, (struct _RM_PSM_APP_FAMILY_ID *)v14);
  if ( result >= 0 )
  {
    v7 = RmpPsmAppFamilyTableFind(a1, (struct _RM_PSM_APP_FAMILY_ID *)v14);
    if ( v7 )
    {
      *a3 = v7;
    }
    else
    {
      Heap = (char *)HampAllocateHeap(0x248uLL);
      v9 = Heap;
      if ( !Heap )
        return -1073741801;
      memset_0(Heap, 0, 0x248uLL);
      v10 = 4LL;
      v11 = v9 + 16;
      v12 = v14;
      do
      {
        *v11 = *v12;
        v11[1] = v12[1];
        v11[2] = v12[2];
        v11[3] = v12[3];
        v11[4] = v12[4];
        v11[5] = v12[5];
        v11[6] = v12[6];
        v11 += 8;
        v13 = v12[7];
        v12 += 8;
        *(v11 - 1) = v13;
        --v10;
      }
      while ( v10 );
      *v11 = *v12;
      *((_QWORD *)v11 + 2) = *((_QWORD *)v12 + 2);
      *((_QWORD *)v9 + 1) = RmpPsmAppFamilyIdHash((struct _RM_PSM_APP_FAMILY_ID *)(v9 + 16));
      RmpPsmAppFamilyTableAdd(a1, (struct _RM_PSM_APP_FAMILY *)v9);
      *a3 = (struct _RM_PSM_APP_FAMILY *)v9;
    }
    return 0;
  }
  return result;
}
