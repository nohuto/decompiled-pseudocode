/*
 * XREFs of SmmUnmapContiguousRangeFromIommu @ 0x14009C4B4
 * Callers:
 *     SmmUnmapNonPagedObjectFromIommu @ 0x140040B5C (SmmUnmapNonPagedObjectFromIommu.c)
 *     SmmMapExistingMemoryToDomain @ 0x14009C300 (SmmMapExistingMemoryToDomain.c)
 *     ?SysMmUnmapContiguousRangeFromIommu@@YAXPEAUSYSMM_ADAPTER@@_KT_LARGE_INTEGER@@1_NW4SYSMM_MAPPING_OBJECT_TYPE@@PEBX@Z @ 0x14009C7C0 (-SysMmUnmapContiguousRangeFromIommu@@YAXPEAUSYSMM_ADAPTER@@_KT_LARGE_INTEGER@@1_NW4SYSMM_MAPPING.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??2@YAPEAX_KPEAVDXGK_LOG@@II@Z @ 0x1400416A0 (--2@YAPEAX_KPEAVDXGK_LOG@@II@Z.c)
 *     ??0SYSMM_LOG_ENTRY_MAPPING@@QEAA@_KPEB_K00_NW4SYSMM_MAPPING_OBJECT_TYPE@@PEBXJ@Z @ 0x140062C58 (--0SYSMM_LOG_ENTRY_MAPPING@@QEAA@_KPEB_K00_NW4SYSMM_MAPPING_OBJECT_TYPE@@PEBXJ@Z.c)
 *     SmmUnmapPagesFromIommuInternal @ 0x14006D4E4 (SmmUnmapPagesFromIommuInternal.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall SmmUnmapContiguousRangeFromIommu(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int8 a5,
        char a6,
        __int64 a7)
{
  unsigned __int64 v10; // rsi
  __int64 v12; // rax
  char v13; // r12
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rax
  __int64 v16; // rax
  void *v17; // r15
  __int64 v18; // r15
  __int64 v19; // rbx
  __int64 v20; // rcx
  _QWORD v21[4]; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int64 v22; // [rsp+A0h] [rbp+8h] BYREF

  v10 = a4 >> 12;
  v12 = operator new(32, (struct DXGK_LOG *)(a1 + 192), 1u, 8 * dword_1401696D0);
  v13 = a5;
  v14 = 0LL;
  if ( v12 )
    SYSMM_LOG_ENTRY_MAPPING::SYSMM_LOG_ENTRY_MAPPING(v12, a2, 0LL, a3, v10, a5, a6, a7, 0);
  if ( !v13 || (*(_DWORD *)(a1 + 28) & 1) != 0 )
  {
    v19 = a3 << 12;
    if ( !a2 || a2 == v19 )
    {
      v20 = *(_QWORD *)(a1 + 48);
      v21[0] = 1LL;
      v21[1] = v19;
      v21[2] = a4;
      ((void (__fastcall *)(__int64, _QWORD *))qword_140169630)(v20, v21);
    }
    else
    {
      ((void (__fastcall *)(_QWORD, __int64, unsigned __int64))qword_140169620)(*(_QWORD *)(a1 + 48), a2, v10);
    }
  }
  else
  {
    v15 = 8 * v10;
    if ( !is_mul_ok(v10, 8uLL) )
      v15 = -1LL;
    v16 = operator new[](v15, 0x39737844u, 64LL);
    v17 = (void *)v16;
    if ( v16 )
    {
      if ( v10 )
      {
        do
        {
          *(_QWORD *)(v16 + 8 * v14) = v14 + a3;
          ++v14;
        }
        while ( v14 < v10 );
      }
      SmmUnmapPagesFromIommuInternal(a1, a2, v16, v10, v13);
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v17);
    }
    else if ( v10 )
    {
      v18 = a2;
      do
      {
        v22 = v14 + a3;
        SmmUnmapPagesFromIommuInternal(
          a1,
          v18 & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64),
          (__int64)&v22,
          1LL,
          v13);
        ++v14;
        v18 += 4096LL;
      }
      while ( v14 < v10 );
    }
  }
}
