/*
 * XREFs of ?SetMainPoolSizes@ResourceManager@ExecutionModel@@QEAAX_K@Z @ 0x180081BA0
 * Callers:
 *     ?InitializePools@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x1800815D4 (-InitializePools@ResourceManager@ExecutionModel@@QEAAJXZ.c)
 * Callees:
 *     ??1?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@QEAA@XZ @ 0x18002CE70 (--1-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@QEAA@XZ.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x18005E0DC (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?InitializeResource@BaseResourceSet@ExecutionModel@@AEAAJPEBU_ResourceInfo@2@@Z @ 0x18006B334 (-InitializeResource@BaseResourceSet@ExecutionModel@@AEAAJPEBU_ResourceInfo@2@@Z.c)
 */

void __fastcall ExecutionModel::ResourceManager::SetMainPoolSizes(ExecutionModel::ResourceManager *this, __int64 a2)
{
  struct IUnknown *v2; // r9
  struct IUnknown *v4; // rdx
  struct IUnknown *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rax
  ExecutionModel::BaseResourceSet *v10; // r9
  int v11; // [rsp+20h] [rbp-30h] BYREF
  __int64 v12; // [rsp+28h] [rbp-28h]
  int v13; // [rsp+30h] [rbp-20h]
  __int16 v14; // [rsp+34h] [rbp-1Ch]
  int v15; // [rsp+38h] [rbp-18h] BYREF
  __int64 v16; // [rsp+40h] [rbp-10h]
  int v17; // [rsp+48h] [rbp-8h]
  __int16 v18; // [rsp+4Ch] [rbp-4h]
  struct IUnknown *v19; // [rsp+60h] [rbp+10h] BYREF

  v2 = 0LL;
  v4 = (struct IUnknown *)*((_QWORD *)this + 4);
  v19 = 0LL;
  if ( v4 )
  {
    ATL::AtlComPtrAssign(&v19, v4);
    v2 = v19;
  }
  v6 = v2 + 9;
  if ( LODWORD(v2[9].lpVtbl) != -1 )
  {
    v7 = 0LL;
    v8 = 3LL;
    do
    {
      v6[1].lpVtbl = 0LL;
      LODWORD(v6->lpVtbl) = -1;
      v6 += 3;
      v9 = (__int64)v2[159].lpVtbl & ~(1LL << v7++);
      v2[159].lpVtbl = (struct IUnknownVtbl *)v9;
      --v8;
    }
    while ( v8 );
  }
  v11 = 0;
  v13 = 101;
  v17 = 101;
  v14 = 1;
  v12 = -1LL;
  v15 = 2;
  v18 = 1;
  v16 = a2;
  ExecutionModel::BaseResourceSet::InitializeResource(
    (ExecutionModel::BaseResourceSet *)v2,
    (const struct ExecutionModel::_ResourceInfo *)&v11);
  ExecutionModel::BaseResourceSet::InitializeResource(v10, (const struct ExecutionModel::_ResourceInfo *)&v15);
  *((_QWORD *)this + 5) = a2;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  ATL::CComPtr<ExecutionModel::BaseResourceSet>::~CComPtr<ExecutionModel::BaseResourceSet>((__int64 *)&v19);
}
