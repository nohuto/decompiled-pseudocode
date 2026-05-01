/*
 * XREFs of ?CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x180088D30
 * Callers:
 *     ?ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18006CE8C (-ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJXZ @ 0x1800889BC (-AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJXZ.c)
 * Callees:
 *     CempListEntryRemoveAndClear @ 0x180013890 (CempListEntryRemoveAndClear.c)
 *     ?RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@@Z @ 0x18002AEB0 (-RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3P.c)
 *     ?ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180033840 (-ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostApplyResourceSet@@YAXPEAVResourceSet@ExecutionModel@@@Z @ 0x18005D4E8 (-RmpActivityHostApplyResourceSet@@YAXPEAVResourceSet@ExecutionModel@@@Z.c)
 *     ?RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18006D27C (-RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?LogPendingEnd@ResourceSet@ExecutionModel@@AEAAXXZ @ 0x180089054 (-LogPendingEnd@ResourceSet@ExecutionModel@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall ExecutionModel::ResourceSet::CompleteAcquire(ExecutionModel::ResourceSet *this, char a2)
{
  _QWORD *v3; // rcx
  __int128 v5; // xmm1
  __int64 v6; // rcx
  __int64 v7; // xmm0_8
  unsigned int v8; // eax
  __int64 v9; // r8
  __int128 v10; // [rsp+50h] [rbp-20h] BYREF
  __int64 v11; // [rsp+60h] [rbp-10h]
  char v12; // [rsp+80h] [rbp+10h] BYREF
  char v13; // [rsp+88h] [rbp+18h] BYREF

  LODWORD(v10) = -1;
  v3 = (_QWORD *)(*((_QWORD *)this + 164) + 56LL);
  *((_QWORD *)&v10 + 1) = 0LL;
  LODWORD(v11) = 101;
  WORD2(v11) = 0;
  CempListEntryRemoveAndClear(v3);
  v5 = *(_OWORD *)((char *)this + 1464);
  v6 = *((_QWORD *)this + 8);
  v7 = *((_QWORD *)this + 185);
  v8 = *((_DWORD *)this + 2);
  v12 = v9;
  v13 = v9;
  v10 = v5;
  v11 = v7;
  ExecutionModel::BaseResourceSet::RecursiveVisit(
    v6,
    v9 + 1,
    v9 + 1,
    (__int64)&v10,
    v8,
    1,
    &v12,
    &v13,
    v9,
    (__int64)this);
  *((_DWORD *)this + 320) = 2;
  RmpActivityHostApplyResourceSet(this);
  RmpActivityHostResourceSetsChanged(*((struct _RM_ACTIVITY_HOST **)this + 165));
  ExecutionModel::ResourceManager::ApplyExternalResourcePriorities(
    *((ExecutionModel::ResourceManager **)this + 3),
    *((struct _RM_ACTIVITY_HOST **)this + 165));
  if ( (a2 & 1) != 0 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 214) + 32LL))(
      *((_QWORD *)this + 214),
      *((_QWORD *)this + 215));
    *((_DWORD *)this + 333) |= 1u;
    ExecutionModel::ResourceSet::LogPendingEnd(this);
  }
}
