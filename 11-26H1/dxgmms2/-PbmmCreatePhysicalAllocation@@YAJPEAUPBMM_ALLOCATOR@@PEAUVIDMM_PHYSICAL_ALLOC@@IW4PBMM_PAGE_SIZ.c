/*
 * XREFs of ?PbmmCreatePhysicalAllocation@@YAJPEAUPBMM_ALLOCATOR@@PEAUVIDMM_PHYSICAL_ALLOC@@IW4PBMM_PAGE_SIZE@@2IU_D3DDDI_SEGMENTPREFERENCE@@ITPBMM_PHYSICAL_ALLOC_FLAGS@@PEAPEAUPBMM_PHYSICAL_ALLOC@@@Z @ 0x140051F20
 * Callers:
 *     CreatePhysicalAllocation @ 0x1400AF268 (CreatePhysicalAllocation.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140036990 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     memset @ 0x14005BBC0 (memset.c)
 */

__int64 __fastcall PbmmCreatePhysicalAllocation(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        char a9,
        _QWORD *a10)
{
  char v11; // r12
  unsigned int v12; // r15d
  unsigned int v14; // eax
  unsigned int i; // edx
  int v16; // eax
  __int64 v17; // rcx
  _DWORD *v18; // rax
  _DWORD *v19; // rdi
  int v20; // eax
  int v21; // ecx
  int v22; // ebp
  _QWORD *v23; // rcx
  __int64 result; // rax

  v11 = a4;
  *a10 = 0LL;
  if ( !a3 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 85;
    return 3221225485LL;
  }
  v12 = 4096;
  if ( a6 )
    v12 = a6;
  if ( (a3 & 0xFFF) != 0 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 97;
    return 3221225485LL;
  }
  if ( a3 > 0xFFFFF000 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 104;
    return 3221225485LL;
  }
  if ( !a8 || (_BitScanReverse(&v14, a8), v14 >= *(_DWORD *)(a1 + 8)) )
  {
    WdLogSingleEntry1(3LL, a8);
    WdLogGlobalForLineNumber = 111;
    return 3221225485LL;
  }
  if ( !a2 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 118;
    return 3221225485LL;
  }
  for ( i = 0; i < 0x1E; i += 6 )
  {
    v16 = (a7 >> i) & 0x1F;
    if ( v16 && !_bittest((const int *)&a8, (unsigned __int8)(v16 - 1)) )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 131;
      return 3221225485LL;
    }
  }
  if ( a4 > a5 )
  {
    WdLogSingleEntry2(1LL, a4, a5);
    WdLogGlobalForLineNumber = 142;
    DxgkLogInternalTriageEvent(v17, 0x40000LL);
    return 3221225485LL;
  }
  v18 = (_DWORD *)operator new(96LL, 0x316D6250u, 256LL);
  v19 = v18;
  if ( v18 )
  {
    memset(v18, 0, 0x60uLL);
    v20 = v19[22];
    v19[14] = a8;
    v21 = v20 ^ ((unsigned __int8)v20 ^ (unsigned __int8)(4 * v11)) & 0x3C;
    v19[21] = a7;
    *((_QWORD *)v19 + 6) = a2;
    v22 = v21 ^ ((unsigned __int16)v21 ^ (unsigned __int16)((_WORD)a5 << 6)) & 0x3C0;
    v19[15] = a3 >> 12;
    v19[16] = v12 >> 12;
    v19[22] = v22 ^ ((unsigned __int8)v22 ^ (unsigned __int8)(2 * a9)) & 2;
    *((_QWORD *)v19 + 5) = v19 + 8;
    *((_QWORD *)v19 + 4) = v19 + 8;
    v23 = *(_QWORD **)(a1 + 136);
    if ( *v23 != a1 + 128 )
      __fastfail(3u);
    *(_QWORD *)v19 = a1 + 128;
    *((_QWORD *)v19 + 1) = v23;
    *v23 = v19;
    *(_QWORD *)(a1 + 136) = v19;
    result = 0LL;
    *a10 = v19;
  }
  else
  {
    _InterlockedIncrement(&dword_14008A888);
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 151;
    DxgkLogInternalTriageEvent(0LL, 262145LL);
    return 3221225495LL;
  }
  return result;
}
