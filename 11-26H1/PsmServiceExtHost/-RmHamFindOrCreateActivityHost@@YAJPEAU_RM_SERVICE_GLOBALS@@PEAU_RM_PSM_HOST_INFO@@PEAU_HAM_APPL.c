/*
 * XREFs of ?RmHamFindOrCreateActivityHost@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPLICATION@@KW4_HOST_GROUP@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18007F868
 * Callers:
 *     ?HampHostFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180029A48 (-HampHostFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KW4_HOST_GROUP@@PEA.c)
 * Callees:
 *     ?RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002933C (-RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostFindByHostId@@YAJPEAU_RM_SERVICE_GLOBALS@@_KW4_HOST_GROUP@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002F890 (-RmpActivityHostFindByHostId@@YAJPEAU_RM_SERVICE_GLOBALS@@_KW4_HOST_GROUP@@PEAPEAU_RM_ACTIVITY_H.c)
 *     ?RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPLICATION@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18008383C (-RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPLI.c)
 */

__int64 __fastcall RmHamFindOrCreateActivityHost(
        struct _RM_SERVICE_GLOBALS *a1,
        __int64 a2,
        struct _HAM_APPLICATION *a3,
        char a4,
        char a5,
        _QWORD *a6)
{
  unsigned int v10; // r9d
  __int64 result; // rax
  __int64 v12; // r8
  struct _RM_ACTIVITY_HOST *v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = 0LL;
  if ( (int)RmpActivityHostFindByHostId((__int64)a1, *(_QWORD *)(a2 + 544), a5, (char **)&v13) >= 0 )
    goto LABEL_5;
  v10 = a4 & 1 | 2;
  if ( (a4 & 2) == 0 )
    v10 = a4 & 1;
  result = RmpActivityHostCreateHostPsm(a1, (struct _RM_PSM_HOST_INFO *)a2, a3, v10, &v13);
  if ( (int)result >= 0 )
  {
LABEL_5:
    RmHamHostReferenceUnsafe((struct _RM_ACTIVITY_HOST *)((char *)v13 + 56));
    result = 0LL;
    *a6 = v12;
  }
  return result;
}
