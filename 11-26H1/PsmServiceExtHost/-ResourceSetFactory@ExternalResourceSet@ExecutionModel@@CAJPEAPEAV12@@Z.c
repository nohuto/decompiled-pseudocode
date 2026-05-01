/*
 * XREFs of ?ResourceSetFactory@ExternalResourceSet@ExecutionModel@@CAJPEAPEAV12@@Z @ 0x18002E448
 * Callers:
 *     ?RmAcquireResources@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@K_KPEAXKW44PendType@2@_NPEA_NPEAPEAUResourceHandle__@2@@Z @ 0x18002DFA4 (-RmAcquireResources@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@.c)
 * Callees:
 *     ??0ExternalResourceSet@ExecutionModel@@AEAA@XZ @ 0x18002E4E8 (--0ExternalResourceSet@ExecutionModel@@AEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180070958 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ExecutionModel::ExternalResourceSet::ResourceSetFactory(
        struct ExecutionModel::ExternalResourceSet **a1)
{
  ExecutionModel::ExternalResourceSet *v2; // rax
  int v3; // ebx
  __int64 v4; // rax
  struct ExecutionModel::ExternalResourceSet *v5; // rdi
  int v6; // ebp

  v2 = (ExecutionModel::ExternalResourceSet *)operator new(0x550uLL);
  v3 = 0;
  if ( v2
    && (v4 = ExecutionModel::ExternalResourceSet::ExternalResourceSet(v2),
        (v5 = (struct ExecutionModel::ExternalResourceSet *)v4) != 0LL) )
  {
    v6 = TpAllocTimer(v4 + 1344, ExecutionModel::ExternalResourceSet::WatchdogTimerCallback, v4, 0LL);
    if ( v6 < 0 )
    {
      (*(void (__fastcall **)(struct ExecutionModel::ExternalResourceSet *))(*(_QWORD *)v5 + 16LL))(v5);
      v3 = v6;
    }
    else
    {
      *a1 = v5;
    }
  }
  else
  {
    v3 = -1073741801;
  }
  return v3 | 0x10000000u;
}
