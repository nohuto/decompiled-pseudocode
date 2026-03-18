/*
 * XREFs of ?Free@CObjectCache@@QEAAXPEAX@Z @ 0x18009E7F0
 * Callers:
 *     ??_ECColorDrawListBrush@@UEAAPEAXI@Z @ 0x18009CC70 (--_ECColorDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??_GCWarpRenderingEffect@@MEAAPEAXI@Z @ 0x18009D630 (--_GCWarpRenderingEffect@@MEAAPEAXI@Z.c)
 *     ??_GCReconstructableDrawListEntry_UVx0@@UEAAPEAXI@Z @ 0x18009D6D0 (--_GCReconstructableDrawListEntry_UVx0@@UEAAPEAXI@Z.c)
 *     ??R?$default_delete@VCNineGridDrawListBrush@@@std@@QEBAXPEAVCNineGridDrawListBrush@@@Z @ 0x18009E24C (--R-$default_delete@VCNineGridDrawListBrush@@@std@@QEBAXPEAVCNineGridDrawListBrush@@@Z.c)
 *     ??_ECPrimitiveGroupDrawListBrush@@UEAAPEAXI@Z @ 0x18009E2F0 (--_ECPrimitiveGroupDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??_GCEmptyRegionDrawListBrush@@UEAAPEAXI@Z @ 0x18009E3D0 (--_GCEmptyRegionDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??1?$unique_ptr@VCNineGridDrawListBrush@@U?$default_delete@VCNineGridDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x18009E84C (--1-$unique_ptr@VCNineGridDrawListBrush@@U-$default_delete@VCNineGridDrawListBrush@@@std@@@std@@.c)
 *     ??R?$default_delete@VCEmptyRegionDrawListBrush@@@std@@QEBAXPEAVCEmptyRegionDrawListBrush@@@Z @ 0x1801B3C98 (--R-$default_delete@VCEmptyRegionDrawListBrush@@@std@@QEBAXPEAVCEmptyRegionDrawListBrush@@@Z.c)
 *     ??R?$default_delete@VCColorDrawListBrush@@@std@@QEBAXPEAVCColorDrawListBrush@@@Z @ 0x1801CDE90 (--R-$default_delete@VCColorDrawListBrush@@@std@@QEBAXPEAVCColorDrawListBrush@@@Z.c)
 *     ??_GCSpectreCallbackRenderer@@UEAAPEAXI@Z @ 0x18025A720 (--_GCSpectreCallbackRenderer@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CObjectCache::Free(CObjectCache *this, _QWORD *a2)
{
  HANDLE ProcessHeap; // rax

  if ( *((_DWORD *)this + 1) < *(_DWORD *)this )
  {
    *a2 = *((_QWORD *)this + 1);
    ++*((_DWORD *)this + 1);
    *((_QWORD *)this + 1) = a2;
  }
  else if ( a2 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, a2);
  }
}
