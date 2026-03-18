/*
 * XREFs of InitializePhysicalAdapter @ 0x1400AF7BC
 * Callers:
 *     ?InitializePhysicalAdapter@VIDMM_PHYSICAL_ADAPTER_PBMM@@UEAAJXZ @ 0x1400AF980 (-InitializePhysicalAdapter@VIDMM_PHYSICAL_ADAPTER_PBMM@@UEAAJXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140037CC0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?PbmmCreateAllocator@@YAJPEAUVIDMM_PHYSICAL_ADAPTER@@IPEBUPBMM_SEGMENT_DESC@@W4PBMM_PAGE_SIZE@@PEAPEAUPBMM_ALLOCATOR@@@Z @ 0x140051614 (-PbmmCreateAllocator@@YAJPEAUVIDMM_PHYSICAL_ADAPTER@@IPEBUPBMM_SEGMENT_DESC@@W4PBMM_PAGE_SIZE@@P.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     ??1?$PagedPoolArray@UPBMM_SEGMENT_DESC@@$03@@QEAA@XZ @ 0x1400A69E8 (--1-$PagedPoolArray@UPBMM_SEGMENT_DESC@@$03@@QEAA@XZ.c)
 *     CreateAndInitializeSegmentsAndMmus @ 0x1400AE950 (CreateAndInitializeSegmentsAndMmus.c)
 */

__int64 __fastcall InitializePhysicalAdapter(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // r9
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rdi
  __int64 v6; // rax
  _BYTE *v7; // r8
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  __int64 v10; // rcx
  int Allocator; // ebx
  _BYTE *v12; // rdx
  __int64 v13; // rax
  int v14; // ecx
  _BYTE *v15; // [rsp+50h] [rbp-68h] BYREF
  _BYTE v16[64]; // [rsp+58h] [rbp-60h] BYREF
  int v17; // [rsp+98h] [rbp-20h]

  result = CreateAndInitializeSegmentsAndMmus((struct VIDMM_PHYSICAL_ADAPTER_PBMM *)a1);
  if ( (int)result >= 0 )
  {
    v4 = *(unsigned int *)(a1 + 136);
    v15 = 0LL;
    v17 = 0;
    if ( (unsigned int)v4 <= 4 )
    {
      v7 = v16;
      v15 = v16;
      if ( (_DWORD)v4 )
      {
        v8 = 0LL;
        v9 = v4;
        do
        {
          *(_OWORD *)&v7[v8] = 0LL;
          v7 = v15;
          v8 += 16LL;
          --v9;
        }
        while ( v9 );
      }
    }
    else
    {
      v5 = (unsigned int)v4;
      if ( 0xFFFFFFFFFFFFFFFFuLL / v4 < 0x10 )
        goto LABEL_11;
      v6 = 16LL * (unsigned int)v4;
      if ( !is_mul_ok((unsigned int)v4, 0x10uLL) )
        v6 = -1LL;
      v7 = (_BYTE *)operator new[](v6, 0x4B677844u, 256LL);
      v15 = v7;
    }
    v17 = v4;
    v5 = v4;
    if ( v7 )
    {
      if ( (_DWORD)v4 )
      {
        v3 = 0LL;
        v12 = v7 + 12;
        do
        {
          v13 = *(_QWORD *)(v3 + *(_QWORD *)(a1 + 1872));
          v3 += 8LL;
          v14 = *(_DWORD *)(v13 + 108);
          *(_QWORD *)(v12 - 12) = *(_QWORD *)(v13 + 40);
          *(_QWORD *)(v12 - 4) = v14 == 1;
          v12 += 16;
          --v5;
        }
        while ( v5 );
      }
      Allocator = PbmmCreateAllocator(a1, v4, (__int64)v7, v3, (_QWORD *)(a1 + 1864));
      if ( Allocator >= 0 )
        Allocator = 0;
      goto LABEL_17;
    }
LABEL_11:
    _InterlockedIncrement(&dword_14008A738);
    WdLogSingleEntry1(6LL, v5);
    WdLogGlobalForLineNumber = 1119;
    DxgkLogInternalTriageEvent(v10, 262145LL);
    Allocator = -1073741801;
LABEL_17:
    PagedPoolArray<PBMM_SEGMENT_DESC,4>::~PagedPoolArray<PBMM_SEGMENT_DESC,4>((void **)&v15);
    return (unsigned int)Allocator;
  }
  return result;
}
