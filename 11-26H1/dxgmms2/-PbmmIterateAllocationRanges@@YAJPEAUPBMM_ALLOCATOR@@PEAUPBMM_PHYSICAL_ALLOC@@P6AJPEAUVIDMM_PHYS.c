/*
 * XREFs of ?PbmmIterateAllocationRanges@@YAJPEAUPBMM_ALLOCATOR@@PEAUPBMM_PHYSICAL_ALLOC@@P6AJPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_PHYSICAL_ALLOC@@PEBUVIDMM_ITERATE_PHYSICAL_MEMORY_RANGE_DESC@@PEAX@Z5III@Z @ 0x140052294
 * Callers:
 *     ?IteratePhysicalMemoryRanges@VIDMM_PHYSICAL_ADAPTER_PBMM@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC@@P6AJPEAUVIDMM_PHYSICAL_ADAPTER@@0PEBUVIDMM_ITERATE_PHYSICAL_MEMORY_RANGE_DESC@@PEAX@Z3III@Z @ 0x1400AFE50 (-IteratePhysicalMemoryRanges@VIDMM_PHYSICAL_ADAPTER_PBMM@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC@@P6AJPEA.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PbmmIterateAllocationRanges(
        struct PBMM_ALLOCATOR *a1,
        struct PBMM_PHYSICAL_ALLOC *a2,
        int (*a3)(struct VIDMM_PHYSICAL_ADAPTER *, struct VIDMM_PHYSICAL_ALLOC *, const struct VIDMM_ITERATE_PHYSICAL_MEMORY_RANGE_DESC *, void *),
        void *a4,
        char a5)
{
  char *v5; // rax
  char *v6; // rsi
  char v7; // r15
  unsigned int v8; // ebx
  int (*v9)(struct VIDMM_PHYSICAL_ADAPTER *, struct VIDMM_PHYSICAL_ALLOC *, const struct VIDMM_ITERATE_PHYSICAL_MEMORY_RANGE_DESC *, void *); // r10
  int v10; // edi
  struct PBMM_ALLOCATOR *v12; // r11
  unsigned int v13; // eax
  int v14; // r13d
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 result; // rax
  unsigned int v19; // r8d
  __int16 v20; // ax
  unsigned int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  int v27; // eax
  __int128 v28; // [rsp+30h] [rbp-20h] BYREF
  __int64 v29; // [rsp+40h] [rbp-10h]

  v5 = (char *)a2 + 32;
  v6 = (char *)*((_QWORD *)a2 + 4);
  v7 = a5 & 1;
  v8 = 0;
  v9 = a3;
  v10 = 0;
  v12 = a1;
  while ( v6 != v5 )
  {
    v13 = *((_DWORD *)v6 + 12);
    v14 = 1 << ((v13 >> 3) & 0xF);
    v29 = 0LL;
    v28 = 0LL;
    if ( v7 )
    {
      v15 = (v13 >> 11) & 0xFFFFF;
      if ( v15 != v10 )
      {
        v16 = *((_QWORD *)a2 + 6);
        v17 = *(_QWORD *)v12;
        HIDWORD(v28) = v15 - v10;
        DWORD2(v28) = v10;
        result = ((__int64 (__fastcall *)(__int64, __int64, __int128 *))v9)(v17, v16, &v28);
        if ( (int)result < 0 )
          return result;
        v9 = a3;
        v12 = a1;
      }
    }
    v19 = *((_DWORD *)v6 + 12);
    v20 = *((_WORD *)v6 + 26) & 0x1F;
    HIDWORD(v29) |= 1u;
    LOWORD(v29) = v20;
    DWORD2(v28) = (v19 >> 11) & 0xFFFFF;
    if ( (a5 & 2) != 0 )
    {
      v21 = *((_DWORD *)v6 + 13);
      if ( (v21 & 0x1F) != 0 )
        *(_QWORD *)&v28 = **((_QWORD **)v6 + 4) + (((unsigned __int64)v21 >> 5) & 0x7FFF);
      else
        *(_QWORD *)&v28 = *((_QWORD *)v6 + 4);
    }
    v22 = *((_QWORD *)a2 + 6);
    v23 = *(_QWORD *)v12;
    HIDWORD(v28) = 1 << ((v19 >> 3) & 0xF);
    result = ((__int64 (__fastcall *)(__int64, __int64, __int128 *))v9)(v23, v22, &v28);
    if ( (int)result < 0 )
      return result;
    v6 = *(char **)v6;
    v5 = (char *)a2 + 32;
    v10 += v14;
    v9 = a3;
    v12 = a1;
  }
  if ( !v7 )
    return 0LL;
  v24 = *((_DWORD *)a2 + 15);
  if ( v10 == v24 )
    return 0LL;
  v25 = *((_QWORD *)a2 + 6);
  v26 = *(_QWORD *)v12;
  HIDWORD(v28) = v24 - v10;
  *(_QWORD *)&v28 = 0LL;
  v29 = 0LL;
  DWORD2(v28) = v10;
  v27 = ((__int64 (__fastcall *)(__int64, __int64, __int128 *))v9)(v26, v25, &v28);
  if ( v27 < 0 )
    return (unsigned int)v27;
  return v8;
}
