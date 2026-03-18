/*
 * XREFs of ?VidMmiInitializeAdlForPfn@@YAXPEAU_DXGK_ADL@@_K1@Z @ 0x1400A4C38
 * Callers:
 *     ?MapPageTableToGpuVa@@YAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGE_TABLE_BASE@@I@Z @ 0x1400D9BF4 (-MapPageTableToGpuVa@@YAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGE_TABLE_BASE@@I@Z.c)
 *     InitializeAdlForPageTable @ 0x140117D94 (InitializeAdlForPageTable.c)
 * Callees:
 *     <none>
 */

void __fastcall VidMmiInitializeAdlForPfn(struct _DXGK_ADL *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r8

  if ( a3 )
    v3 = a3 >> 12;
  else
    v3 = a2;
  *((_QWORD *)a1 + 1) = v3;
  *((_DWORD *)a1 + 1) = 1;
  *(_DWORD *)a1 = 1;
}
