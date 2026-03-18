/*
 * XREFs of VidMmCreateAllocation @ 0x140037D00
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KW4_DXGK_PAGESIZE@@2KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@U_DXGK_ALLOCATIONINFOFLAGS2@@PEBVDXGADAPTERALLOCATION@@PEAX77KE7PEAVVIDMM_PAGE_TABLE_BASE@@PEAPEAUVIDMM_CROSSADAPTER_ALLOC@@PEAVVIDMM_FENCE_STORAGE_PAGE@@PEAPEAUVIDMM_GLOBAL_ALLOC@@PEAE@Z @ 0x1400DEEC4 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KW4_DXGK_PAGESIZE@@2KKKU_D3DDDI_SE.c)
 */

__int64 __fastcall VidMmCreateAllocation(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7,
        __int64 a8)
{
  int v8; // r11d
  char v10; // [rsp+98h] [rbp-40h]

  v8 = *(_DWORD *)(a2 + 84);
  v10 = 0;
  *a7 = 0LL;
  return VIDMM_GLOBAL::CreateOneAllocation(
           *a1,
           a1,
           *(unsigned int *)(a2 + 52),
           *(_QWORD *)(a2 + 16),
           *(_QWORD *)(a2 + 24),
           *(_DWORD *)(a2 + 12),
           *(unsigned __int16 *)(a2 + 12),
           *(unsigned __int16 *)(a2 + 14),
           *(_DWORD *)(a2 + 44),
           *(_DWORD *)(a2 + 48),
           *(_DWORD *)(a2 + 40),
           *(_DWORD *)(a2 + 36),
           *(_DWORD *)(a2 + 64),
           v8,
           a3,
           a4,
           a5,
           0LL,
           *(_DWORD *)(a2 + 80),
           v10,
           0LL,
           0LL,
           a6,
           0LL,
           a7,
           a8);
}
