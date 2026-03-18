/*
 * XREFs of ?VidMmPbmmVerifyResidentLimitCB@@YA_NPEBUVIDMM_PHYSICAL_ADAPTER@@PEBUVIDMM_PHYSICAL_ALLOC@@II@Z @ 0x1400B1068
 * Callers:
 *     TrimSystemMemoryResources @ 0x140051DE4 (TrimSystemMemoryResources.c)
 * Callees:
 *     <none>
 */

char __fastcall VidMmPbmmVerifyResidentLimitCB(
        const struct VIDMM_PHYSICAL_ADAPTER *a1,
        const struct VIDMM_PHYSICAL_ALLOC *a2,
        __int64 a3,
        unsigned int a4)
{
  _QWORD *v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rax

  v4 = *(_QWORD **)(*(_QWORD *)a2 + 328LL);
  v5 = *v4;
  if ( *(_QWORD *)(*v4 + 64LL) + ((unsigned __int64)a4 << 12) <= v4[2] )
    return 1;
  if ( g_IsInternalReleaseOrDbg )
  {
    v6 = WdLogNewEntry5_WdTrace(a1);
    *(_QWORD *)(v6 + 24) = v4[2];
    *(_QWORD *)(v6 + 32) = *(_QWORD *)(v5 + 64);
    WdLogGlobalForLineNumber = 3671;
  }
  return 0;
}
