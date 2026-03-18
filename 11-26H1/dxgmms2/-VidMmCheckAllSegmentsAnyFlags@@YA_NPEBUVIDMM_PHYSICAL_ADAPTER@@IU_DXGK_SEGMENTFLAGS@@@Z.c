/*
 * XREFs of ?VidMmCheckAllSegmentsAnyFlags@@YA_NPEBUVIDMM_PHYSICAL_ADAPTER@@IU_DXGK_SEGMENTFLAGS@@@Z @ 0x140111C5C
 * Callers:
 *     ?VidMmVerifyBudgetGroups@@YA_NPEBUVIDMM_PHYSICAL_ADAPTER@@IPEBUVIDMM_SEGMENT_BASE@@PEAU_VIDMM_VERIFY_BUDGET_GROUPS@@@Z @ 0x140111AB8 (-VidMmVerifyBudgetGroups@@YA_NPEBUVIDMM_PHYSICAL_ADAPTER@@IPEBUVIDMM_SEGMENT_BASE@@PEAU_VIDMM_VE.c)
 * Callees:
 *     <none>
 */

char __fastcall VidMmCheckAllSegmentsAnyFlags(
        const struct VIDMM_PHYSICAL_ADAPTER *a1,
        unsigned int a2,
        struct _DXGK_SEGMENTFLAGS a3)
{
  unsigned int v3; // r9d
  __int64 v4; // r10
  __int64 v5; // rdx
  __int64 v6; // rax

  v3 = a2;
  if ( a2 )
  {
    while ( v3 )
    {
      _BitScanForward((unsigned int *)&v4, v3);
      v5 = *(_QWORD *)(*((_QWORD *)a1 + 219) + 8 * v4);
      v6 = v5 + 64;
      if ( !v5 )
        v6 = 56LL;
      if ( (a3.Value & *(_DWORD *)v6) == 0 )
        return 0;
      v3 &= ~(1 << v4);
    }
  }
  return 1;
}
