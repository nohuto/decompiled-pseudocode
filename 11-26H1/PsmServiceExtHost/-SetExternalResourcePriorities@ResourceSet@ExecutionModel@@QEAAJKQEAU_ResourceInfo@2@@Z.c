/*
 * XREFs of ?SetExternalResourcePriorities@ResourceSet@ExecutionModel@@QEAAJKQEAU_ResourceInfo@2@@Z @ 0x18008930C
 * Callers:
 *     ?RmSrvResourceSetExternalResourcePriorities@@YAJPEAU_RM_SERVICE_GLOBALS@@_KKPEAU_ResourceInfo@ExecutionModel@@@Z @ 0x180083094 (-RmSrvResourceSetExternalResourcePriorities@@YAJPEAU_RM_SERVICE_GLOBALS@@_KKPEAU_ResourceInfo@Ex.c)
 * Callees:
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180028550 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800285D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?CheckPendingExternalResourceRequestsAsync@ResourceManager@ExecutionModel@@QEAAXXZ @ 0x18002D054 (-CheckPendingExternalResourceRequestsAsync@ResourceManager@ExecutionModel@@QEAAXXZ.c)
 *     ?ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KKPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180033478 (-ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceMan.c)
 *     ?ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180033840 (-ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::SetExternalResourcePriorities(
        struct _RM_ACTIVITY_HOST **this,
        __int64 a2,
        struct ExecutionModel::_ResourceInfo *const a3)
{
  unsigned int v3; // ebx
  int i; // edx
  struct ExecutionModel::ResourceManager *v7; // rcx

  v3 = 0;
  if ( a3 )
  {
    for ( i = 0; !i; i = 1 )
    {
      if ( *(_DWORD *)a3 > 0x31u )
        return (unsigned int)-2147024809;
    }
    RmpAcquireGlobalLock();
    if ( *((_DWORD *)this + 320) )
    {
      ExecutionModel::ExternalResourceSet::ResolveUnknownExternalResourcePriorities(v7, 2u, 1u, a3, this[165]);
      *((_DWORD *)this + *(int *)a3 + 372) = *((_DWORD *)a3 + 4);
      ExecutionModel::ResourceManager::ApplyExternalResourcePriorities(this[3], this[165]);
      ExecutionModel::ResourceManager::CheckPendingExternalResourceRequestsAsync(this[3]);
    }
    else
    {
      v3 = -2147220218;
    }
    RmpReleaseGlobalLock();
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return v3;
}
