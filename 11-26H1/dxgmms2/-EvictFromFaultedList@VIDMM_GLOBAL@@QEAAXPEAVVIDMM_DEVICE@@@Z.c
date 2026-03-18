/*
 * XREFs of ?EvictFromFaultedList@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@@Z @ 0x14009AFF0
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400CFED0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     McTemplateK0x_EtwWriteTransfer @ 0x140031A48 (McTemplateK0x_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

void __fastcall VIDMM_GLOBAL::EvictFromFaultedList(VIDMM_GLOBAL *this, struct VIDMM_DEVICE *a2, __int64 a3)
{
  char *v3; // rdi
  __int64 i; // rbx
  __int64 *v6; // rsi
  __int64 v7; // rbp
  __int64 v8; // rcx
  __int64 v9; // rcx
  int v10; // [rsp+20h] [rbp-38h]

  v3 = (char *)a2 + 136;
  for ( i = *((_QWORD *)a2 + 18); (char *)i != v3; i = *(_QWORD *)(i + 8) )
  {
    v6 = **(__int64 ***)(i - 56);
    v7 = *v6;
    if ( g_IsInternalReleaseOrDbg )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace() + 24) = i - 56;
      WdLogGlobalForLineNumber = 10488;
    }
    if ( *((_DWORD *)v6 + 18) == 1 )
    {
      LOBYTE(a3) = 1;
      LOBYTE(v10) = 0;
      v8 = *(_QWORD *)(*((_QWORD *)this + 5040) + 8LL * ((*(_DWORD *)(v7 + 52) >> 2) & 0x3F));
      (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD, int, _QWORD))(*(_QWORD *)v8 + 240LL))(
        v8,
        v7,
        a3,
        0LL,
        v10,
        0LL);
      if ( (byte_14008A201 & 1) != 0 )
        McTemplateK0x_EtwWriteTransfer(v9, &EventEvictAllocation, a3, v6);
    }
  }
}
