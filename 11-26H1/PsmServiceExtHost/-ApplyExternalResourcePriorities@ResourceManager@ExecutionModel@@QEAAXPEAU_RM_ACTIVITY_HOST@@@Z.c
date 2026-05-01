/*
 * XREFs of ?ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180033840
 * Callers:
 *     ?ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJXZ @ 0x18002C870 (-ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJXZ.c)
 *     ?CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x180088D30 (-CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 *     ?SetExternalResourcePriorities@ResourceSet@ExecutionModel@@QEAAJKQEAU_ResourceInfo@2@@Z @ 0x18008930C (-SetExternalResourcePriorities@ResourceSet@ExecutionModel@@QEAAJKQEAU_ResourceInfo@2@@Z.c)
 * Callees:
 *     ?RmpPsmAppFamilyTableFindByHostInfo@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_PSM_APP_FAMILY@@@Z @ 0x1800329C8 (-RmpPsmAppFamilyTableFindByHostInfo@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_.c)
 *     ?HostApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800338CC (-HostApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@.c)
 *     ?RmpActivityHostIsPple@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180033A1C (-RmpActivityHostIsPple@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostHasPpleResourceSet@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180083AC0 (-RmpActivityHostHasPpleResourceSet@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 */

void __fastcall ExecutionModel::ResourceManager::ApplyExternalResourcePriorities(
        ExecutionModel::ResourceManager *this,
        struct _RM_ACTIVITY_HOST *a2)
{
  struct _RM_SERVICE_GLOBALS *v4; // rcx
  struct _RM_ACTIVITY_HOST *v5; // rbx
  struct _RM_PSM_APP_FAMILY *v6; // [rsp+38h] [rbp+10h] BYREF

  ExecutionModel::ResourceManager::HostApplyExternalResourcePriorities(this, a2);
  if ( *((_DWORD *)a2 + 154) == 2 && !RmpActivityHostIsPple(a2) )
  {
    v4 = (struct _RM_SERVICE_GLOBALS *)*((_QWORD *)a2 + 6);
    v6 = 0LL;
    RmpPsmAppFamilyTableFindByHostInfo(v4, (struct _RM_ACTIVITY_HOST *)((char *)a2 + 80), &v6);
    v5 = (struct _RM_ACTIVITY_HOST *)*((_QWORD *)v6 + 71);
    if ( v5 )
    {
      if ( RmpActivityHostHasPpleResourceSet(*((struct _RM_ACTIVITY_HOST **)v6 + 71)) )
        ExecutionModel::ResourceManager::HostApplyExternalResourcePriorities(this, v5);
    }
  }
}
