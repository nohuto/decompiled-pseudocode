/*
 * XREFs of ?RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@@Z @ 0x18002AEB0
 * Callers:
 *     ?EvaluateResourceRequest@ResourceSet@ExecutionModel@@QEAAJ_KPEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@PEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@PEA_N4@Z @ 0x18002AA30 (-EvaluateResourceRequest@ResourceSet@ExecutionModel@@QEAAJ_KPEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_.c)
 *     ?RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@@Z @ 0x18002AEB0 (-RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3P.c)
 *     ?AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo@2@W4Enum@Priority@2@KW45PendType@2@PEA_NW4_RM_ACQUIRE_PEND_POLICY@@PEAVExternalResourceSet@2@@Z @ 0x18002B6A0 (-AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo.c)
 *     ?CheckPoolResources@BaseResourceSet@ExecutionModel@@AEAAJKPEBU_ResourceInfo@2@K_NPEA_N2PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x18002BADC (-CheckPoolResources@BaseResourceSet@ExecutionModel@@AEAAJKPEBU_ResourceInfo@2@K_NPEA_N2PEAV-$lis.c)
 *     ?CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAXXZ @ 0x18002C54C (-CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAXXZ.c)
 *     ?CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x180088D30 (-CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 * Callees:
 *     ?RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@@Z @ 0x18002AEB0 (-RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3P.c)
 *     ?remove@?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAA_KAEBV?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@Z @ 0x18002CDDC (-remove@-$list@V-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V-$allocator@V-$CComPtr@VBaseRe.c)
 *     ??1?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@QEAA@XZ @ 0x18002CE70 (--1-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@QEAA@XZ.c)
 *     ??0?$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVBaseResourceSet@ExecutionModel@@@Z @ 0x180060E54 (--0-$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVBaseResourceSet@ExecutionModel@.c)
 *     ?push_front@?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAA_N$$QEAV?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@Z @ 0x180089B30 (-push_front@-$list@V-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V-$allocator@V-$CComPtr@VBa.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ExecutionModel::BaseResourceSet::RecursiveVisit(
        __int64 a1,
        int a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        char a6,
        _BYTE *a7,
        _BYTE *a8,
        __int64 a9,
        __int64 a10)
{
  bool v10; // zf
  _BYTE *v12; // r14
  int v14; // r10d
  char v16; // r12
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 i; // rax
  __int64 result; // rax
  int *v21; // rsi
  __int64 v22; // rbp
  __int64 v23; // r9
  __int64 v24; // rax
  char v25; // al
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rbp
  __int64 v32; // rax
  __int64 *v33; // rsi
  __int64 v34; // rax

  v10 = *(_DWORD *)(a1 + 1280) == 2;
  v12 = a8;
  v14 = a2;
  *a8 = 0;
  if ( !v10 )
    return 0LL;
  v16 = 0;
  v17 = 0LL;
  while ( (unsigned int)v17 < a3 )
  {
    v21 = (int *)(a4 + 24 * v17);
    v22 = *v21;
    if ( (unsigned int)v22 > 0x31 )
      goto LABEL_26;
    v23 = 24 * (v22 + 3);
    v24 = *(_QWORD *)(v23 + a1 + 8);
    a8 = (_BYTE *)v23;
    if ( v24 )
    {
      if ( v21[4] >= 101 )
        goto LABEL_26;
      if ( a6 )
      {
        v25 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 72LL))(a1, a4 + 24 * v17, a5);
        v14 = a2;
        if ( !v25 )
          goto LABEL_26;
        v23 = (__int64)a8;
      }
      v26 = *(_QWORD *)(v23 + a1 + 8);
      v27 = v26;
      v28 = *(_QWORD *)(a1 + 1272) & (1LL << v22);
      if ( v26 >= *((_QWORD *)v21 + 1) )
        v27 = *((_QWORD *)v21 + 1);
      if ( v28 )
        v27 = *((_QWORD *)v21 + 1);
      if ( !v14 )
      {
        v14 = a2;
        if ( *(_QWORD *)(a1 + 64) )
          v16 = 1;
        *((_QWORD *)v21 + 1) -= v27;
        goto LABEL_26;
      }
      if ( v14 != 1 )
        __fastfail(0xC0000001);
      if ( !v28 )
        *(_QWORD *)(v23 + a1 + 8) = v26 - v27;
      v29 = a10;
      v14 = a2;
      v30 = 3 * (*v21 + 3LL);
      *(_OWORD *)(a10 + 8 * v30) = *(_OWORD *)v21;
      *(_QWORD *)(v29 + 8 * v30 + 16) = *((_QWORD *)v21 + 2);
      *((_QWORD *)v21 + 1) -= v27;
      v17 = (unsigned int)(v17 + 1);
    }
    else
    {
      if ( !*((_QWORD *)v21 + 1) && v14 == 1 )
      {
        v34 = a10;
        *(_OWORD *)(v23 + a10) = *(_OWORD *)v21;
        *(_QWORD *)(v23 + v34 + 16) = *((_QWORD *)v21 + 2);
      }
LABEL_26:
      v17 = (unsigned int)(v17 + 1);
    }
  }
  v18 = a9;
  if ( v16 && a9 )
  {
    ATL::CComPtrBase<ExecutionModel::BaseResourceSet>::CComPtrBase<ExecutionModel::BaseResourceSet>(&a8, a1);
    utl::list<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::remove(
      v18,
      &a8);
    ATL::CComPtr<ExecutionModel::BaseResourceSet>::~CComPtr<ExecutionModel::BaseResourceSet>(&a8);
    ATL::CComPtrBase<ExecutionModel::BaseResourceSet>::CComPtrBase<ExecutionModel::BaseResourceSet>(&a8, a1);
    if ( !(unsigned __int8)utl::list<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::push_front(
                             v18,
                             &a8) )
    {
      ATL::CComPtr<ExecutionModel::BaseResourceSet>::~CComPtr<ExecutionModel::BaseResourceSet>(&a8);
      return 2147500037LL;
    }
    ATL::CComPtr<ExecutionModel::BaseResourceSet>::~CComPtr<ExecutionModel::BaseResourceSet>(&a8);
    v14 = a2;
  }
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= a3 )
    {
      *v12 = 1;
      *a7 = 0;
      return 0LL;
    }
    if ( *(_QWORD *)(a4 + 24 * i + 8) )
      break;
  }
  v31 = a10;
  *a7 = 1;
  v32 = a1 + 40;
  while ( v32 != *(_QWORD *)(a1 + 40) )
  {
    v33 = (__int64 *)(v32 + 8);
    LOBYTE(a8) = 0;
    result = ExecutionModel::BaseResourceSet::RecursiveVisit(
               *(_QWORD *)(*(_QWORD *)(v32 + 8) + 16LL),
               v14,
               a3,
               a4,
               a5,
               a6,
               (__int64)&a8,
               (__int64)v12,
               v18,
               v31);
    if ( (int)result < 0 )
      return result;
    if ( *v12 )
      break;
    v32 = *v33;
    v14 = a2;
  }
  return 0LL;
}
