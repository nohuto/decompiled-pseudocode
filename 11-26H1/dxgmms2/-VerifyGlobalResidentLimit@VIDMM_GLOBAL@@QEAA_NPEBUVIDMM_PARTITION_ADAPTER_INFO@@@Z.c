/*
 * XREFs of ?VerifyGlobalResidentLimit@VIDMM_GLOBAL@@QEAA_NPEBUVIDMM_PARTITION_ADAPTER_INFO@@@Z @ 0x14010FBF0
 * Callers:
 *     ?TrimResidentBytes@VIDMM_SEGMENT@@QEAAXPEBUVIDMM_PARTITION_ADAPTER_INFO@@@Z @ 0x1400D351C (-TrimResidentBytes@VIDMM_SEGMENT@@QEAAXPEBUVIDMM_PARTITION_ADAPTER_INFO@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall VIDMM_GLOBAL::VerifyGlobalResidentLimit(
        VIDMM_GLOBAL *this,
        const struct VIDMM_PARTITION_ADAPTER_INFO *a2)
{
  __int64 v4; // rax

  if ( *(_QWORD *)(*(_QWORD *)a2 + 64LL) <= *((_QWORD *)a2 + 2) )
    return 1;
  if ( g_IsInternalReleaseOrDbg )
  {
    v4 = WdLogNewEntry5_WdTrace(*(_QWORD *)a2);
    *(_QWORD *)(v4 + 24) = *((_QWORD *)a2 + 2);
    *(_QWORD *)(v4 + 32) = *(_QWORD *)(*(_QWORD *)a2 + 64LL);
    WdLogGlobalForLineNumber = 26808;
  }
  return 0;
}
