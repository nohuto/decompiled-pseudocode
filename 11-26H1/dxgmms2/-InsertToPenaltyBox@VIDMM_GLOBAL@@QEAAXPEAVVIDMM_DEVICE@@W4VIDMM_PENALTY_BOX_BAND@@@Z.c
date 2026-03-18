/*
 * XREFs of ?InsertToPenaltyBox@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@W4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x14003FAB4
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400CFED0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?MoveToPenaltyBoxBandNoLock@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x140102ABC (-MoveToPenaltyBoxBandNoLock@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
LONG __fastcall VIDMM_GLOBAL::InsertToPenaltyBox(_DWORD *a1, __int64 a2, unsigned __int8 a3)
{
  _QWORD *v3; // rax
  _DWORD *v4; // r8
  _QWORD *v5; // rdx
  __int64 v6; // r9

  if ( a3 == 4 && (v6 = *(unsigned int *)(a2 + 64), (_DWORD)v6) && a1[2] != 213 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    v3 = (_QWORD *)WdLogSingleEntry5(0LL, 270LL, 57LL, a2, v6, 0LL);
    WdLogGlobalForLineNumber = 213;
  }
  else
  {
    v3 = (_QWORD *)(a2 + 184);
    v4 = &a1[4 * a3 + 11254];
    v5 = (_QWORD *)*((_QWORD *)v4 + 1);
    if ( (_DWORD *)*v5 != v4 )
      __fastfail(3u);
  }
  *v3 = v4;
  v3[1] = v5;
  *v5 = v3;
  *((_QWORD *)v4 + 1) = v3;
  return KeSetEvent(*(PRKEVENT *)(*(_QWORD *)a1 + 24LL), 0, 0);
}
