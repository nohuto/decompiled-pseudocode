/*
 * XREFs of ?BlockMemoryRanges@VIDMM_SEGMENT@@QEAAJW4VIDMM_POOL_BLOCK_STATE@@W4_DXGK_QUERYADAPTERINFOTYPE@@IAEA_K@Z @ 0x14009A15C
 * Callers:
 *     ?Init@VIDMM_SEGMENT@@UEAAJP6AXPEAX0@Z@Z @ 0x1400B6430 (-Init@VIDMM_SEGMENT@@UEAAJP6AXPEAX0@Z@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1400048C0 (--3@YAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140037CC0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x14004CE78 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     ?ValidateMemoryRanges@VIDMM_SEGMENT@@QEAAJIPEAU_DXGK_MEMORYRANGE@@AEA_K@Z @ 0x1400B8014 (-ValidateMemoryRanges@VIDMM_SEGMENT@@QEAAJIPEAU_DXGK_MEMORYRANGE@@AEA_K@Z.c)
 *     ?MarkMemoryBlocks@VIDMM_LINEAR_POOL@@QEAAJW4VIDMM_POOL_BLOCK_STATE@@IPEAU_DXGK_MEMORYRANGE@@@Z @ 0x1400BFDCC (-MarkMemoryBlocks@VIDMM_LINEAR_POOL@@QEAAJW4VIDMM_POOL_BLOCK_STATE@@IPEAU_DXGK_MEMORYRANGE@@@Z.c)
 */

__int64 __fastcall VIDMM_SEGMENT::BlockMemoryRanges(
        __int64 a1,
        unsigned __int8 a2,
        int a3,
        unsigned int a4,
        unsigned __int64 *a5)
{
  unsigned int v5; // esi
  __int64 v7; // r12
  __int64 v9; // r15
  __int64 v10; // rax
  struct _DXGK_MEMORYRANGE *v11; // r14
  __int64 v12; // rcx
  __int64 v14; // rcx
  __int16 v15; // ax
  int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rdx
  int v20; // eax
  _WORD v21[2]; // [rsp+58h] [rbp-1h] BYREF
  unsigned int v22; // [rsp+5Ch] [rbp+3h]
  struct _DXGK_MEMORYRANGE *v23; // [rsp+60h] [rbp+7h]
  struct _DXGKARG_QUERYADAPTERINFO v24; // [rsp+68h] [rbp+Fh] BYREF

  v5 = 0;
  v7 = a3;
  v9 = a2;
  if ( !a4 )
    return v5;
  v10 = 16LL * a4;
  if ( !is_mul_ok(a4, 0x10uLL) )
    v10 = -1LL;
  v11 = (struct _DXGK_MEMORYRANGE *)operator new[](v10, 0x30306956u, 256LL);
  if ( !v11 )
  {
    _InterlockedIncrement(&dword_14008A704);
    WdLogSingleEntry2(6LL, (unsigned int)v9, -1073741801LL);
    WdLogGlobalForLineNumber = 637;
    DxgkLogInternalTriageEvent(v12, 262145LL);
    return 3221225495LL;
  }
  v14 = *(_QWORD *)(a1 + 8);
  v21[0] = *(_WORD *)(a1 + 70);
  v15 = *(_WORD *)(a1 + 68);
  *((_DWORD *)&v24.Type + 1) = 0;
  v21[1] = v15;
  memset(&v24.InputDataSize, 0, 32);
  v24.pInputData = v21;
  v22 = a4;
  v23 = v11;
  v24.InputDataSize = 16;
  v24.Type = v7;
  v16 = DXGADAPTER::DdiQueryAdapterInfo(*(DXGADAPTER **)(v14 + 24), &v24);
  v5 = v16;
  if ( v16 < 0 )
  {
    WdLogSingleEntry2(1LL, v7, v16);
    WdLogGlobalForLineNumber = 656;
LABEL_12:
    DxgkLogInternalTriageEvent(v17, 0x40000LL);
    goto LABEL_13;
  }
  v18 = VIDMM_SEGMENT::ValidateMemoryRanges((VIDMM_SEGMENT *)a1, a4, v11, a5);
  v5 = v18;
  if ( v18 < 0 )
  {
    WdLogSingleEntry2(1LL, v9, v18);
    WdLogGlobalForLineNumber = 666;
    goto LABEL_12;
  }
  LOBYTE(v19) = v9;
  v20 = VIDMM_LINEAR_POOL::MarkMemoryBlocks(*(_QWORD *)(a1 + 256), v19, a4, v11);
  v5 = v20;
  if ( v20 < 0 )
  {
    WdLogSingleEntry2(1LL, v9, v20);
    WdLogGlobalForLineNumber = 676;
    goto LABEL_12;
  }
LABEL_13:
  operator delete(v11);
  return v5;
}
