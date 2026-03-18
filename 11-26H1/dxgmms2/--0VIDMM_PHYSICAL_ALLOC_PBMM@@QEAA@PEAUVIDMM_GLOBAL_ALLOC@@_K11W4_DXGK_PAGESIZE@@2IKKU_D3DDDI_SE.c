/*
 * XREFs of ??0VIDMM_PHYSICAL_ALLOC_PBMM@@QEAA@PEAUVIDMM_GLOBAL_ALLOC@@_K11W4_DXGK_PAGESIZE@@2IKKU_D3DDDI_SEGMENTPREFERENCE@@I@Z @ 0x1400B8178
 * Callers:
 *     CreatePhysicalAllocation @ 0x1400AF268 (CreatePhysicalAllocation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_PHYSICAL_ALLOC_PBMM::VIDMM_PHYSICAL_ALLOC_PBMM(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        __int64 a7,
        int a8,
        int a9,
        int a10,
        int a11,
        char a12)
{
  *(_QWORD *)(a1 + 24) = a5;
  *(_DWORD *)(a1 + 32) = a8;
  *(_DWORD *)(a1 + 36) = a10;
  *(_DWORD *)(a1 + 40) = a9;
  *(_DWORD *)(a1 + 44) = a11;
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a3;
  *(_QWORD *)(a1 + 16) = a4;
  *(_DWORD *)(a1 + 52) = (*(_DWORD *)(a1 + 52) | 1) ^ ((*(_BYTE *)(a1 + 52) | 1) ^ (unsigned __int8)(4 * a12)) & 0xFC;
  *(_QWORD *)(a1 + 104) = a1 + 96;
  *(_QWORD *)(a1 + 96) = a1 + 96;
  if ( a4 == 4096 << a6 )
    *(_DWORD *)(a1 + 52) |= 2u;
  return a1;
}
