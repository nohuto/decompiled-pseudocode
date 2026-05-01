/*
 * XREFs of ?Rundown@ResourceManager@ExecutionModel@@QEAAXXZ @ 0x180081AEC
 * Callers:
 *     ?RmpRundownAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x1800804C8 (-RmpRundownAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180028550 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800285D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAXXZ @ 0x18002D080 (-ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall ExecutionModel::ResourceManager::Rundown(ExecutionModel::ResourceManager *this)
{
  __int64 v2; // rsi
  HANDLE *v3; // rbx
  __int64 v4; // rcx

  RmpAcquireGlobalLock();
  *((_DWORD *)this + 40) |= 2u;
  v2 = *((_QWORD *)this + 3) + 40LL;
  while ( *(_QWORD *)v2 != v2 )
  {
    v3 = *(HANDLE **)(*(_QWORD *)v2 + 16LL);
    (*((void (__fastcall **)(HANDLE *))*v3 + 1))(v3);
    ExecutionModel::ExternalResourceSet::ReleaseResourcesWithoutNotify(v3);
    (*((void (__fastcall **)(HANDLE *))*v3 + 2))(v3);
  }
  RmpReleaseGlobalLock();
  v4 = *((_QWORD *)this + 17);
  if ( v4 )
  {
    TpReleaseCleanupGroupMembers(v4, 1LL);
    TpReleaseCleanupGroup(*((_QWORD *)this + 17));
    *((_QWORD *)this + 17) = 0LL;
  }
}
