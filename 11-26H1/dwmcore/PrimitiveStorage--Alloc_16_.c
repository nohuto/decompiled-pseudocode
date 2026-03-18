/*
 * XREFs of PrimitiveStorage::Alloc_16_ @ 0x1800094C0
 * Callers:
 *     ?Create@CCpuClipAntialiasDrawListEntry@@SAJAEBUCpuClipAntialiasEntryParams@@$$QEAV?$unique_ptr@VUVData@CCpuClipAntialiasSink@@U?$default_delete@VUVData@CCpuClipAntialiasSink@@@std@@@std@@PEAPEAV1@@Z @ 0x180008CF0 (-Create@CCpuClipAntialiasDrawListEntry@@SAJAEBUCpuClipAntialiasEntryParams@@$$QEAV-$unique_ptr@V.c)
 *     ?Create@CDrawListPrimitive@@SAJAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@IV?$span@G$0?0@gsl@@AEBUD2D_VECTOR_2F@@_NPEAPEAV1@@Z @ 0x180009380 (-Create@CDrawListPrimitive@@SAJAEBV-$StridedSpan@$$CBU-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV.c)
 *     ?ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJIPEAVCPrimitiveColor@@PEBU_D3DCOLORVALUE@@@Z @ 0x18000EE70 (-ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJIPEAVCPrimitiveColor@@PEBU_D3DCOLORVAL.c)
 *     ?Create@CReconstructableDrawListEntry@@SAJAEBUReconstructableDrawListEntryParams@@PEAPEAV1@@Z @ 0x18000FC50 (-Create@CReconstructableDrawListEntry@@SAJAEBUReconstructableDrawListEntryParams@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCDrawListPrimitive4@@@Z @ 0x180009AF4 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCDrawListPrimitive4@@@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCDrawListPrimitive8@@@Z @ 0x180009B94 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCDrawListPrimitive8@@@Z.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 */

char *__fastcall PrimitiveStorage::Alloc_16_(unsigned int *a1)
{
  unsigned int v1; // eax
  HANDLE ProcessHeap; // rax
  char *result; // rax
  char *v5; // rdi
  unsigned int v6; // ecx
  unsigned int v7; // edx
  struct CObjectCache *ObjectCache; // rdx
  char *v9; // r10
  int v10; // eax
  HANDLE v11; // rax
  __int64 v12; // r9
  unsigned __int64 v13; // r8
  int v14; // edx
  int v15; // ecx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  __int64 v18; // rdi
  HANDLE v19; // rax
  char *v20; // rax
  int v21; // ecx
  unsigned __int64 v22; // r9
  __int64 v23; // r8
  int v24; // edx
  int v25; // ecx
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rcx
  struct CObjectCache *v28; // rdx
  char *v29; // r10
  int v30; // eax
  __int64 v31; // r9
  unsigned __int64 v32; // r8
  int v33; // ecx
  int v34; // edx
  int v35; // ecx
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // rcx

  v1 = *a1;
  if ( !*a1 )
  {
    ProcessHeap = GetProcessHeap();
    result = (char *)HeapAlloc(ProcessHeap, 0, 0x58uLL);
    v5 = 0LL;
    if ( result )
    {
      v6 = a1[2];
      *((_QWORD *)result + 1) = 0LL;
      *((_DWORD *)result + 4) = v6;
      *((_DWORD *)result + 5) = 0;
      *((_QWORD *)result + 3) = 0LL;
      *((_QWORD *)result + 4) = 0LL;
      *((_QWORD *)result + 5) = 0LL;
      *((_QWORD *)result + 6) = 0LL;
      *(_QWORD *)result = &CDrawListPrimitive0::`vftable';
      return result;
    }
    return v5;
  }
  v7 = a1[2];
  if ( v7 != 2 )
    goto LABEL_12;
  if ( v1 <= 4 && a1[3] <= 6 )
  {
    v5 = 0LL;
    ObjectCache = CThreadContext::GetObjectCache((struct CDrawListPrimitive4 *)a1);
    v9 = 0LL;
    v10 = *((_DWORD *)ObjectCache + 1);
    if ( v10 )
    {
      v9 = (char *)*((_QWORD *)ObjectCache + 1);
      *((_QWORD *)ObjectCache + 1) = *(_QWORD *)v9;
      *((_DWORD *)ObjectCache + 1) = v10 - 1;
    }
    if ( v9 || (v11 = GetProcessHeap(), (v9 = (char *)HeapAlloc(v11, 0, 0x198uLL)) != 0LL) )
    {
      v12 = *a1;
      v13 = (unsigned __int64)&v9[(((((_BYTE)v9 + 88) & 0xF) + 15) & 0x10)
                                - (unsigned __int64)(((_BYTE)v9 + 88) & 0xF)
                                + 88];
      v14 = a1[2] + 2;
      v15 = a1[1] * v14;
      *(_OWORD *)(v9 + 8) = *(_OWORD *)a1;
      *((_QWORD *)v9 + 3) = v13;
      v16 = v13 + (unsigned int)(8 * v12 * v14);
      *((_QWORD *)v9 + 4) = v16;
      v17 = v16 + (unsigned int)(8 * v15);
      *((_QWORD *)v9 + 5) = v17;
      *((_QWORD *)v9 + 6) = v17 + 8 * v12;
      *(_QWORD *)v9 = &PrimitiveStorage::CCachableStorage<CDrawListPrimitive4,16>::`vftable';
      return v9;
    }
    return v5;
  }
  if ( v1 > 8 || a1[3] > 0x1E )
  {
LABEL_12:
    v18 = 2 * (a1[3] + 4 * (a1[1] * (v7 + 2) + v1 * (v7 + 3))) + 15;
    v19 = GetProcessHeap();
    v20 = (char *)HeapAlloc(v19, 0, v18 + 88);
    v5 = v20;
    if ( !v20 )
      return 0LL;
    v21 = a1[2] + 2;
    v22 = (unsigned __int64)&v20[(((((_BYTE)v20 + 88) & 0xF) + 15) & 0x10)
                               - (unsigned __int64)(((_BYTE)v20 + 88) & 0xF)
                               + 88];
    v23 = *a1;
    v24 = v21 * *a1;
    v25 = a1[1] * v21;
    *(_OWORD *)(v20 + 8) = *(_OWORD *)a1;
    *((_QWORD *)v20 + 3) = v22;
    v26 = v22 + (unsigned int)(8 * v24);
    *((_QWORD *)v20 + 4) = v26;
    v27 = v26 + (unsigned int)(8 * v25);
    *((_QWORD *)v20 + 5) = v27;
    *((_QWORD *)v20 + 6) = v27 + 8 * v23;
    *(_QWORD *)v20 = &PrimitiveStorage::CDynamicInlineStorage::`vftable';
    return v5;
  }
  v5 = 0LL;
  v28 = CThreadContext::GetObjectCache((struct CDrawListPrimitive8 *)a1);
  v29 = 0LL;
  v30 = *((_DWORD *)v28 + 1);
  if ( v30 )
  {
    v29 = (char *)*((_QWORD *)v28 + 1);
    *((_QWORD *)v28 + 1) = *(_QWORD *)v29;
    *((_DWORD *)v28 + 1) = v30 - 1;
  }
  if ( !v29 )
  {
    v29 = (char *)MIDL_user_allocate(0x2E8uLL);
    if ( !v29 )
      return v5;
  }
  v31 = *a1;
  v32 = (unsigned __int64)&v29[(((((_BYTE)v29 + 88) & 0xF) + 15) & 0x10)
                             - (unsigned __int64)(((_BYTE)v29 + 88) & 0xF)
                             + 88];
  v33 = a1[2] + 2;
  v34 = v33 * *a1;
  v35 = a1[1] * v33;
  *(_OWORD *)(v29 + 8) = *(_OWORD *)a1;
  *((_QWORD *)v29 + 3) = v32;
  v36 = v32 + (unsigned int)(8 * v34);
  *((_QWORD *)v29 + 4) = v36;
  v37 = v36 + (unsigned int)(8 * v35);
  *((_QWORD *)v29 + 5) = v37;
  *((_QWORD *)v29 + 6) = v37 + 8 * v31;
  *(_QWORD *)v29 = &PrimitiveStorage::CCachableStorage<CDrawListPrimitive8,16>::`vftable';
  return v29;
}
