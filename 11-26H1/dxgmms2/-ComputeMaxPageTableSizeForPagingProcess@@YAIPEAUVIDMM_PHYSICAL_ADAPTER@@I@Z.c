/*
 * XREFs of ?ComputeMaxPageTableSizeForPagingProcess@@YAIPEAUVIDMM_PHYSICAL_ADAPTER@@I@Z @ 0x14009A93C
 * Callers:
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1400E2908 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 * Callees:
 *     ?DdiGetRootPageTableSize@ADAPTER_RENDER@@QEAA_KPEAU_DXGKARG_GETROOTPAGETABLESIZE@@@Z @ 0x1400470E0 (-DdiGetRootPageTableSize@ADAPTER_RENDER@@QEAA_KPEAU_DXGKARG_GETROOTPAGETABLESIZE@@@Z.c)
 */

__int64 __fastcall ComputeMaxPageTableSizeForPagingProcess(struct VIDMM_PHYSICAL_ADAPTER *a1, unsigned int a2)
{
  __int64 v2; // rdi
  unsigned int v3; // ebx
  _DXGKARG_GETROOTPAGETABLESIZE v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)a1 + 7);
  v3 = *(_DWORD *)(*((_QWORD *)a1 + 70) + 36LL);
  v5.NumberOfPte = ((unsigned __int64)a2 >> 12) / *((_QWORD *)a1 + 31) + 1;
  v5.PhysicalAdapterIndex = *((unsigned __int16 *)a1 + 36);
  if ( v3 <= (unsigned int)ADAPTER_RENDER::DdiGetRootPageTableSize(*(ADAPTER_RENDER **)(v2 + 16), &v5) )
    return (unsigned int)ADAPTER_RENDER::DdiGetRootPageTableSize(*(ADAPTER_RENDER **)(v2 + 16), &v5);
  return v3;
}
