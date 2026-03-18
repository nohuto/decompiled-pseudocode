/*
 * XREFs of ?AddVaRangeToVad@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@PEAU_RTL_AVL_TREE@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x140112180
 * Callers:
 *     ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1400CBEA0 (-AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAUVIDMM_MAPPED_VA_RAN.c)
 * Callees:
 *     CompareVaRangeAddressWithin @ 0x1401122E4 (CompareVaRangeAddressWithin.c)
 *     CheckUniqueGpuVaMapping @ 0x140112304 (CheckUniqueGpuVaMapping.c)
 */

__int64 __fastcall CVirtualAddressAllocator::AddVaRangeToVad(
        CVirtualAddressAllocator *this,
        struct VIDMM_VAD *a2,
        struct _RTL_AVL_TREE *a3,
        struct VIDMM_MAPPED_VA_RANGE *a4)
{
  __int64 v5; // rbx
  struct _RTL_AVL_TREE *v6; // r14
  int v9; // esi
  __int64 *v10; // rbx
  _QWORD *v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rbx
  _QWORD *v14; // rax
  __int64 result; // rax
  _QWORD *v16; // rax
  _QWORD *v17; // rcx
  __int64 v18; // rdx

  v5 = *((_QWORD *)a4 + 8);
  v6 = a3;
  if ( (*((_DWORD *)a4 + 18) & 0xF) != 1 )
  {
    if ( (*((_DWORD *)a4 + 18) & 0xF) == 4 )
    {
      v5 = *(_QWORD *)(v5 + 56);
    }
    else
    {
      if ( (*((_DWORD *)a4 + 18) & 0xF) != 5 )
        goto LABEL_10;
      v5 = *(_QWORD *)(v5 + 32);
    }
  }
  if ( v5 )
  {
    v9 = CheckUniqueGpuVaMapping(**(_QWORD **)v5, a4);
    if ( v9 < 0 )
    {
      WdLogSingleEntry0(3LL);
      result = (unsigned int)v9;
      WdLogGlobalForLineNumber = 12022;
      return result;
    }
    v10 = (__int64 *)(v5 + 648);
    v11 = (_QWORD *)((char *)a4 + 32);
    v12 = *v10;
    if ( *(__int64 **)(*v10 + 8) != v10 )
      goto LABEL_5;
    *v11 = v12;
    *((_QWORD *)a4 + 5) = v10;
    *(_QWORD *)(v12 + 8) = v11;
    *v10 = (__int64)v11;
  }
LABEL_10:
  v13 = *(_QWORD **)v6;
  LOBYTE(a3) = 0;
  if ( *(_QWORD *)v6 )
  {
    while ( 1 )
    {
      if ( (int)CompareVaRangeAddressWithin((char *)a4 + 104, v13) < 0 )
      {
        v14 = (_QWORD *)*v13;
        if ( !*v13 )
        {
          LOBYTE(a3) = 0;
          break;
        }
      }
      else
      {
        v14 = (_QWORD *)v13[1];
        if ( !v14 )
        {
          LOBYTE(a3) = 1;
          break;
        }
      }
      v13 = v14;
    }
  }
  RtlAvlInsertNodeEx(v6, v13, a3, (char *)a4 + 8);
  *((_DWORD *)a4 + 18) |= 0x4000u;
  ++*((_DWORD *)a2 + 19);
  if ( (*((_BYTE *)a4 + 96) & 4) != 0 )
  {
    v16 = (_QWORD *)((char *)a2 + 56);
    if ( !*((_QWORD *)a2 + 7) )
    {
      v17 = (_QWORD *)((char *)this + 136);
      v18 = *((_QWORD *)this + 17);
      if ( *(CVirtualAddressAllocator **)(v18 + 8) != (CVirtualAddressAllocator *)((char *)this + 136) )
LABEL_5:
        __fastfail(3u);
      *v16 = v18;
      *((_QWORD *)a2 + 8) = v17;
      *(_QWORD *)(v18 + 8) = v16;
      *v17 = v16;
    }
  }
  return 0LL;
}
