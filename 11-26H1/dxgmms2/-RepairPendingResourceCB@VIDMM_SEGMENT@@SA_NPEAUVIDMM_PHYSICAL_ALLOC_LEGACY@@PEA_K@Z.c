/*
 * XREFs of ?RepairPendingResourceCB@VIDMM_SEGMENT@@SA_NPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEA_K@Z @ 0x1400B6FAC
 * Callers:
 *     ?RollbackPlacementOfPendingResources@VIDMM_LINEAR_POOL@@QEAAX_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P6A_NPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEA_K@Z@Z @ 0x1400BFF54 (-RollbackPlacementOfPendingResources@VIDMM_LINEAR_POOL@@QEAAX_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P6.c)
 * Callees:
 *     <none>
 */

bool __fastcall VIDMM_SEGMENT::RepairPendingResourceCB(struct VIDMM_PHYSICAL_ALLOC_LEGACY *a1, unsigned __int64 *a2)
{
  bool result; // al

  if ( !a1 || !*((_QWORD *)a1 + 16) )
    return 0;
  *a2 = *((_QWORD *)a1 + 9);
  result = 1;
  *((_QWORD *)a1 + 14) = 0LL;
  *((_QWORD *)a1 + 16) = 0LL;
  return result;
}
