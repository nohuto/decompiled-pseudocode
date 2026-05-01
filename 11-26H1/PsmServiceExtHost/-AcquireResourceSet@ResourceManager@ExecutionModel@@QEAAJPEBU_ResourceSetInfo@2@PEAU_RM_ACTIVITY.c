/*
 * XREFs of ?AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_ACTIVITY_HOST@@PEAUIResourceSetCallback@2@_KPEAPEAVResourceSet@2@@Z @ 0x180080FF0
 * Callers:
 *     ?HampRmContextAcquireResourceSet@@YAJPEAVHAM_ACTIVITY_RM_CONTEXT@@_K@Z @ 0x18002BE64 (-HampRmContextAcquireResourceSet@@YAJPEAVHAM_ACTIVITY_RM_CONTEXT@@_K@Z.c)
 * Callees:
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJXZ @ 0x1800889BC (-AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJXZ.c)
 *     ?CreateInstance@ResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@PEBU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_REASON_INTERNAL@@_KPEAPEAV12@@Z @ 0x180088E44 (-CreateInstance@ResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@PEBU_ResourceSetInfo@2@PEAU.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::AcquireResourceSet(
        ExecutionModel::ResourceManager *this,
        const struct ExecutionModel::_ResourceSetInfo *a2,
        struct _RM_ACTIVITY_HOST *a3,
        struct ExecutionModel::IResourceSetCallback *a4,
        unsigned __int64 a5,
        struct ExecutionModel::ResourceSet **a6)
{
  int v6; // eax
  int v9; // r8d
  int v10; // eax
  struct ExecutionModel::ResourceSet *v11; // rbx
  int v12; // edi
  ExecutionModel::ResourceSet *v14; // [rsp+50h] [rbp+8h] BYREF

  v6 = *((_DWORD *)a3 + 154);
  v14 = 0LL;
  if ( v6 == 2 )
    v9 = 11;
  else
    v9 = ((v6 - 4) & 0xFFFFFFFB) != 0 ? -1 : 12;
  v10 = ExecutionModel::ResourceSet::CreateInstance(*((_QWORD *)this + 4), a2, a4, a3, v9, a5, &v14);
  v11 = v14;
  v12 = v10;
  if ( v10 >= 0 )
  {
    v12 = ExecutionModel::ResourceSet::AcquireInternalResources(v14);
    if ( v12 >= 0 )
    {
      *a6 = v11;
      v11 = 0LL;
      v12 = 0;
    }
  }
  if ( v11 )
  {
    (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *))(*(_QWORD *)v11 + 32LL))(v11);
    (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return (unsigned int)v12;
}
