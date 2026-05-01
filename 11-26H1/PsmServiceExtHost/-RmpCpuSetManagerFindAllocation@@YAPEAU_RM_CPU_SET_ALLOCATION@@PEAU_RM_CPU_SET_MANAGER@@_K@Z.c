/*
 * XREFs of ?RmpCpuSetManagerFindAllocation@@YAPEAU_RM_CPU_SET_ALLOCATION@@PEAU_RM_CPU_SET_MANAGER@@_K@Z @ 0x1800853A4
 * Callers:
 *     ?RmSrvCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAX_KPEA_K@Z @ 0x180081FF4 (-RmSrvCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAX_KPEA_K.c)
 *     ?RmSrvCpuSetManagerReleaseAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@_K@Z @ 0x180082208 (-RmSrvCpuSetManagerReleaseAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@_K@Z.c)
 * Callees:
 *     ?RmpObjectTableFindObjectByHandle@@YAJPEAU_RM_OBJECT_TABLE@@PEA_KPEAPEAU_RM_OBJECT_HEADER@@@Z @ 0x18002A52C (-RmpObjectTableFindObjectByHandle@@YAJPEAU_RM_OBJECT_TABLE@@PEA_KPEAPEAU_RM_OBJECT_HEADER@@@Z.c)
 */

struct _RM_CPU_SET_ALLOCATION *__fastcall RmpCpuSetManagerFindAllocation(
        struct _RM_CPU_SET_MANAGER *a1,
        unsigned __int64 a2)
{
  int ObjectByHandle; // eax
  struct _RM_OBJECT_HEADER *v3; // rcx
  struct _RM_OBJECT_HEADER *v5; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  v5 = 0LL;
  ObjectByHandle = RmpObjectTableFindObjectByHandle((struct _RM_CPU_SET_MANAGER *)((char *)a1 + 24), &v6, &v5);
  v3 = v5;
  if ( ObjectByHandle < 0 )
    return 0LL;
  return v3;
}
