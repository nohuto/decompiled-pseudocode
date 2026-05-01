/*
 * XREFs of ?CheckPoolResources@BaseResourceSet@ExecutionModel@@AEAAJKPEBU_ResourceInfo@2@K_NPEA_N2PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x18002BADC
 * Callers:
 *     ?AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo@2@W4Enum@Priority@2@KW45PendType@2@PEA_NW4_RM_ACQUIRE_PEND_POLICY@@PEAVExternalResourceSet@2@@Z @ 0x18002B6A0 (-AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo.c)
 *     ?CheckResourceAvailability@BaseResourceSet@ExecutionModel@@AEAAJKPEAU_ResourceInfo@2@KW4Enum@Priority@2@W44PendType@2@PEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x18002D384 (-CheckResourceAvailability@BaseResourceSet@ExecutionModel@@AEAAJKPEAU_ResourceInfo@2@KW4Enum@Pri.c)
 * Callees:
 *     ?RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@@Z @ 0x18002AEB0 (-RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3P.c)
 *     ??0_ResourceInfo@ExecutionModel@@QEAA@XZ @ 0x18002BCB0 (--0_ResourceInfo@ExecutionModel@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180070998 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800709A4 (--_U@YAPEAX_K@Z.c)
 */

__int64 __fastcall ExecutionModel::BaseResourceSet::CheckPoolResources(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        char a5,
        _BYTE *a6,
        _BYTE *a7,
        __int64 a8)
{
  __int64 v9; // r15
  _QWORD *v12; // rax
  unsigned int v13; // edi
  _QWORD *v14; // rsi
  ExecutionModel::_ResourceInfo *v15; // rbp
  __int64 v16; // rbx
  _QWORD *v17; // rax
  __int64 v18; // r14
  __int64 v19; // xmm0_8
  int v20; // ebx

  v9 = a2;
  v12 = operator new[](saturated_mul(a2, 0x18uLL));
  v13 = 0;
  v14 = v12;
  if ( v12 )
  {
    v15 = (ExecutionModel::_ResourceInfo *)v12;
    v16 = a2;
    if ( a2 )
    {
      do
      {
        ExecutionModel::_ResourceInfo::_ResourceInfo(v15);
        v15 = (ExecutionModel::_ResourceInfo *)((char *)v15 + 24);
        --v16;
      }
      while ( v16 );
      v17 = v14;
      v18 = a3 - (_QWORD)v14;
      do
      {
        v19 = *(_QWORD *)((char *)v17 + v18 + 16);
        *(_OWORD *)v17 = *(_OWORD *)((char *)v17 + v18);
        v17[2] = v19;
        v17 += 3;
        --v9;
      }
      while ( v9 );
    }
    v20 = ExecutionModel::BaseResourceSet::RecursiveVisit(a1, 0, a2, (__int64)v14, a4, a5, a6, a7, a8, 0LL);
    operator delete(v14);
    if ( v20 < 0 )
      return (unsigned int)v20;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v13;
}
