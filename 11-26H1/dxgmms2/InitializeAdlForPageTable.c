/*
 * XREFs of InitializeAdlForPageTable @ 0x140117D94
 * Callers:
 *     ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAUVIDMM_SYSTEM_ADDRESS_CONTEXT@@@Z @ 0x1400D5AD4 (-GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAUV.c)
 * Callees:
 *     ?SysMmGetLogicalAddress@@YA_KQEAX@Z @ 0x14003B2E8 (-SysMmGetLogicalAddress@@YA_KQEAX@Z.c)
 *     ?VidMmiInitializeAdlForPfn@@YAXPEAU_DXGK_ADL@@_K1@Z @ 0x1400A4C38 (-VidMmiInitializeAdlForPfn@@YAXPEAU_DXGK_ADL@@_K1@Z.c)
 */

void __fastcall InitializeAdlForPageTable(struct _DXGK_ADL *a1, __int64 a2)
{
  void *const *v4; // rcx
  unsigned __int64 LogicalAddress; // rax
  int v6; // eax

  v4 = *(void *const **)(a2 + 24);
  if ( (*((_DWORD *)*v4 + 14) & 4) != 0 )
  {
    LogicalAddress = SysMmGetLogicalAddress(v4[43]);
    VidMmiInitializeAdlForPfn(a1, *(_QWORD *)(a2 + 8) >> 12, LogicalAddress);
  }
  else
  {
    v6 = *((_DWORD *)*v4 + 4) >> 12;
    *((_QWORD *)a1 + 1) = *(_QWORD *)(a2 + 8) >> 12;
    *((_DWORD *)a1 + 1) = 1;
    *(_DWORD *)a1 = v6;
  }
}
