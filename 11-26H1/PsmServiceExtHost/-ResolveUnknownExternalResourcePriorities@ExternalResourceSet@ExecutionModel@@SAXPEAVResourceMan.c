/*
 * XREFs of ?ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KKPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180033478
 * Callers:
 *     ?RmAccessCheckWithLockHeld@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z @ 0x18000D5C8 (-RmAccessCheckWithLockHeld@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z.c)
 *     ?RmAcquireResources@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@K_KPEAXKW44PendType@2@_NPEA_NPEAPEAUResourceHandle__@2@@Z @ 0x18002DFA4 (-RmAcquireResources@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@.c)
 *     ?HostApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800338CC (-HostApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@.c)
 *     ?SetExternalResourcePriorities@ResourceSet@ExecutionModel@@QEAAJKQEAU_ResourceInfo@2@@Z @ 0x18008930C (-SetExternalResourcePriorities@ResourceSet@ExecutionModel@@QEAAJKQEAU_ResourceInfo@2@@Z.c)
 *     ?AvailabilityCheck@ExternalResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResourceSet@2@KPEAU_ResourceInfo@2@W4Enum@Priority@2@KPEAU_RM_HAM_ACTIVITY_HOST@@PEA_N@Z @ 0x1800893BC (-AvailabilityCheck@ExternalResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResource.c)
 * Callees:
 *     ?RmpPsmAppFamilyTableFindByActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@PEAPEAU_RM_PSM_APP_FAMILY@@@Z @ 0x1800328B8 (-RmpPsmAppFamilyTableFindByActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@PEAPEAU_RM_PSM_APP_FAMILY@@@Z.c)
 *     ?ResolveUnknownExternalResourcePriotiesFromResourceSets@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KKPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180033598 (-ResolveUnknownExternalResourcePriotiesFromResourceSets@ExternalResourceSet@ExecutionModel@@SAXP.c)
 *     ?RmpActivityHostIsPple@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180033A1C (-RmpActivityHostIsPple@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostHasPpleResourceSet@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180083AC0 (-RmpActivityHostHasPpleResourceSet@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPsmAppFamilyEnumerateActivityHostGetNext@@YAPEAU_RM_ACTIVITY_HOST@@PEAU_RM_PSM_APP_FAMILY_ACTIVITY_HOST_ENUMERATION_CONTEXT@@@Z @ 0x180088990 (-RmpPsmAppFamilyEnumerateActivityHostGetNext@@YAPEAU_RM_ACTIVITY_HOST@@PEAU_RM_PSM_APP_FAMILY_AC.c)
 */

void __fastcall ExecutionModel::ExternalResourceSet::ResolveUnknownExternalResourcePriorities(
        struct ExecutionModel::ResourceManager *a1,
        unsigned int a2,
        unsigned int a3,
        struct ExecutionModel::_ResourceInfo *a4,
        struct _RM_ACTIVITY_HOST *a5)
{
  struct ExecutionModel::ResourceManager *v5; // rbx
  char *v8; // rax
  __int64 v9; // rcx
  struct _RM_ACTIVITY_HOST *v10; // rdi
  struct ExecutionModel::ResourceManager *v11; // rcx
  struct _RM_ACTIVITY_HOST *Next; // rax
  char *v13; // rax
  struct _RM_PSM_APP_FAMILY *v14; // [rsp+40h] [rbp+8h] BYREF

  v14 = a1;
  v5 = (struct ExecutionModel::ResourceManager *)a3;
  if ( a3 )
  {
    v8 = (char *)a4 + 16;
    v9 = a3;
    do
    {
      if ( v8[5] )
        *(_DWORD *)v8 = 101;
      v8 += 24;
      --v9;
    }
    while ( v9 );
  }
  v10 = a5;
  if ( RmpActivityHostIsPple(a5) && RmpActivityHostHasPpleResourceSet(v10) )
  {
    v14 = 0LL;
    RmpPsmAppFamilyTableFindByActivityHost(v10, &v14);
    v14 = (struct _RM_PSM_APP_FAMILY *)(((unsigned __int64)v14 + 552) & -(__int64)(*((_QWORD *)v14 + 69) != 0LL));
    while ( 1 )
    {
      Next = RmpPsmAppFamilyEnumerateActivityHostGetNext((struct _RM_PSM_APP_FAMILY_ACTIVITY_HOST_ENUMERATION_CONTEXT *)&v14);
      if ( !Next )
        break;
      if ( Next != v10 && *((_DWORD *)Next + 154) == 2 )
        ExecutionModel::ExternalResourceSet::ResolveUnknownExternalResourcePriotiesFromResourceSets(
          v11,
          a2,
          (unsigned int)v5,
          a4,
          Next);
    }
    if ( (_DWORD)v5 )
    {
      v13 = (char *)a4 + 16;
      v11 = v5;
      do
      {
        if ( v13[5] && *((_DWORD *)v13 - 4) == 28 )
          *(_DWORD *)v13 = 101;
        v13 += 24;
        v11 = (struct ExecutionModel::ResourceManager *)((char *)v11 - 1);
      }
      while ( v11 );
    }
  }
  ExecutionModel::ExternalResourceSet::ResolveUnknownExternalResourcePriotiesFromResourceSets(
    v11,
    a2,
    (unsigned int)v5,
    a4,
    v10);
}
