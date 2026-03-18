/*
 * XREFs of ?CheckLowestAddress@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEA_NPEAX@Z @ 0x1400B6000
 * Callers:
 *     ?UpdateActiveVPRAfterMove@VIDMM_SEGMENT@@QEAAJXZ @ 0x140126570 (-UpdateActiveVPRAfterMove@VIDMM_SEGMENT@@QEAAJXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall VIDMM_SEGMENT::CheckLowestAddress(
        VIDMM_SEGMENT *this,
        struct VIDMM_PHYSICAL_ALLOC_LEGACY *a2,
        bool *a3,
        _QWORD *a4)
{
  __int64 v4; // rax
  __int64 v6; // rcx

  if ( a2 )
  {
    if ( *((_QWORD *)a2 + 8) )
      v4 = *((_QWORD *)a2 + 9);
    else
      v4 = *((_QWORD *)a2 + 15);
    *a4 = v4;
    return 3221225473LL;
  }
  else
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5909;
    DxgkLogInternalTriageEvent(v6, 0x40000LL);
    return 3221226021LL;
  }
}
