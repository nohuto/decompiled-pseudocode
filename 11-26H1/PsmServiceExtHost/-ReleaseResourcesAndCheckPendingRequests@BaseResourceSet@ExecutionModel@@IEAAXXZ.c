/*
 * XREFs of ?ReleaseResourcesAndCheckPendingRequests@BaseResourceSet@ExecutionModel@@IEAAXXZ @ 0x18002CC20
 * Callers:
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXXZ @ 0x18002C994 (-PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXXZ.c)
 *     ?ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAXXZ @ 0x18002D080 (-ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAXXZ.c)
 *     ?RmAcquireResources@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@K_KPEAXKW44PendType@2@_NPEA_NPEAPEAUResourceHandle__@2@@Z @ 0x18002DFA4 (-RmAcquireResources@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@.c)
 *     ?ReleaseResourcesInternal@BaseResourceSet@ExecutionModel@@UEAAJXZ @ 0x180089AC0 (-ReleaseResourcesInternal@BaseResourceSet@ExecutionModel@@UEAAJXZ.c)
 * Callees:
 *     ??1?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@QEAA@XZ @ 0x18002CE70 (--1-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@QEAA@XZ.c)
 *     ?CheckPendingExternalResourceRequestsAsync@ResourceManager@ExecutionModel@@QEAAXXZ @ 0x18002D054 (-CheckPendingExternalResourceRequestsAsync@ResourceManager@ExecutionModel@@QEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180070998 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?ReplenishIoCounterPool@ResourceManager@ExecutionModel@@QEAAX_K@Z @ 0x1800817F4 (-ReplenishIoCounterPool@ResourceManager@ExecutionModel@@QEAAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall ExecutionModel::BaseResourceSet::ReleaseResourcesAndCheckPendingRequests(
        ExecutionModel::BaseResourceSet *this)
{
  int v1; // eax
  __int64 v3; // rsi
  __int64 **v4; // rsi
  __int64 *v5; // rdi
  __int64 *v6; // rcx
  __int64 v7; // rcx
  int v8; // eax
  _QWORD *v9; // rbx
  _QWORD *v10; // rax
  int v11; // edi
  __int64 v12; // rbx
  __int64 v13; // rsi
  __int64 v14; // rcx

  v1 = *((_DWORD *)this + 320);
  if ( v1 )
  {
    if ( v1 == 2 )
    {
      v11 = 0;
      v12 = 1LL;
      v13 = 0LL;
      do
      {
        v14 = *(_QWORD *)((char *)this + v13 + 80);
        if ( v14 )
        {
          if ( (v12 & *((_QWORD *)this + 159)) == 0 )
          {
            if ( v11 == 2 )
              ExecutionModel::ResourceManager::ReplenishIoCounterPool(
                *((ExecutionModel::ResourceManager **)this + 3),
                *(_QWORD *)((char *)this + v13 + 80));
            else
              *(_QWORD *)(*((_QWORD *)this + 8) + v13 + 80) += v14;
          }
          *(_QWORD *)((char *)this + v13 + 80) = 0LL;
        }
        ++v11;
        v12 = __ROL8__(v12, 1);
        v13 += 24LL;
      }
      while ( v11 < 50 );
    }
    v3 = *((_QWORD *)this + 8);
    *((_DWORD *)this + 320) = 0;
    v4 = (__int64 **)(v3 + 40);
    (*(void (__fastcall **)(ExecutionModel::BaseResourceSet *))(*(_QWORD *)this + 8LL))(this);
    v5 = *v4;
    while ( v5 != (__int64 *)v4 )
    {
      v6 = v5 + 2;
      if ( (ExecutionModel::BaseResourceSet *)v5[2] == this )
      {
        v9 = v5;
        v5 = (__int64 *)*v5;
        v10 = (_QWORD *)v9[1];
        *v10 = v5;
        v5[1] = (__int64)v10;
        ATL::CComPtr<ExecutionModel::BaseResourceSet>::~CComPtr<ExecutionModel::BaseResourceSet>(v6);
        operator delete(v9);
        v4[2] = (__int64 *)((char *)v4[2] - 1);
      }
      else
      {
        v5 = (__int64 *)*v5;
      }
    }
    (*(void (__fastcall **)(ExecutionModel::BaseResourceSet *))(*(_QWORD *)this + 16LL))(this);
    v7 = *((_QWORD *)this + 3);
    if ( *((_DWORD *)this + 4) == 1 )
    {
      v8 = *(_DWORD *)(v7 + 160);
      if ( (v8 & 3) == 0 )
      {
        *(_DWORD *)(v7 + 160) = v8 | 1;
        TpPostWork(*(_QWORD *)(v7 + 144));
      }
    }
    else
    {
      ExecutionModel::ResourceManager::CheckPendingExternalResourceRequestsAsync((ExecutionModel::ResourceManager *)v7);
    }
  }
}
