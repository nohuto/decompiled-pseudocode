/*
 * XREFs of VidMmProcessPendingTerminations @ 0x1400CFDF0
 * Callers:
 *     VidMmFlushDeferredEvictions @ 0x14010065C (VidMmFlushDeferredEvictions.c)
 *     VidMmWorkerThreadProc @ 0x140128480 (VidMmWorkerThreadProc.c)
 * Callees:
 *     ?GetNextPendingTermination@VIDMM_GLOBAL@@QEAAPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1400360F0 (-GetNextPendingTermination@VIDMM_GLOBAL@@QEAAPEAUVIDMM_ALLOC@@PEA_N@Z.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400CFED0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 */

__int64 __fastcall VidMmProcessPendingTerminations(KSPIN_LOCK **a1, char a2, bool *a3)
{
  unsigned __int8 v3; // si
  struct VIDMM_ALLOC *NextPendingTermination; // rax
  KSPIN_LOCK *v8; // rcx
  _OWORD v10[5]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v11; // [rsp+90h] [rbp-28h]
  bool v12; // [rsp+C0h] [rbp+8h] BYREF
  struct VIDMM_ALLOC *v13; // [rsp+D8h] [rbp+20h] BYREF

  v3 = 0;
  do
  {
    NextPendingTermination = VIDMM_GLOBAL::GetNextPendingTermination(*a1, a3);
    if ( !NextPendingTermination )
      break;
    v13 = 0LL;
    v10[1] = (unsigned __int64)NextPendingTermination;
    v11 = 0LL;
    v12 = 0;
    v8 = *a1;
    v10[0] = 0LL;
    memset(&v10[2], 0, 48);
    LODWORD(v10[0]) = 200;
    VIDMM_GLOBAL::ProcessDeferredCommand(
      (VIDMM_GLOBAL *)v8,
      (struct _VIDMM_DEFERRED_COMMAND *)v10,
      &v12,
      0,
      0LL,
      0LL,
      0,
      &v13);
    v3 = 1;
  }
  while ( a2 );
  return v3;
}
