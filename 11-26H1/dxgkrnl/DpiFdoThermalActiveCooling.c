/*
 * XREFs of DpiFdoThermalActiveCooling @ 0x14024F910
 * Callers:
 *     DxgkHandleThermalCoolingDrtEscape @ 0x140250124 (DxgkHandleThermalCoolingDrtEscape.c)
 * Callees:
 *     McTemplateK0pt_EtwWriteTransfer @ 0x140012744 (McTemplateK0pt_EtwWriteTransfer.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1400321CC (DpiCheckForOutstandingD3Requests.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x14030CE44 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x14030E12C (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiEnableD3Requests @ 0x14030EA10 (DpiEnableD3Requests.c)
 */

void __fastcall DpiFdoThermalActiveCooling(__int64 a1, char a2)
{
  __int64 v2; // rbx
  __int64 v5; // rdx

  v2 = *(_QWORD *)(a1 + 64);
  if ( IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v2 + 64), DpiFdoThermalActiveCooling, File, 1u, 0x20u) >= 0 )
  {
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(v2 + 484) )
      DpiCheckForOutstandingD3Requests(v2);
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v2 + 168), 1u);
    if ( (int)DpiAcquireCoreSyncAccessSafe(a1, 0LL) < 0 )
    {
      **(_BYTE **)(v2 + 5008) = 1;
    }
    else
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
        McTemplateK0pt_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, (__int64)&EventDpiFdoThermalActiveCooling);
      LOBYTE(v5) = a2;
      (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(v2 + 5008) + 48LL))(
        *(_QWORD *)(*(_QWORD *)(v2 + 5008) + 16LL),
        v5);
      DpiReleaseCoreSyncAccessSafe(a1, 0LL);
    }
    *(_BYTE *)(*(_QWORD *)(v2 + 5008) + 2LL) = a2;
    if ( *(_BYTE *)(v2 + 484) )
      DpiEnableD3Requests(*(_QWORD *)(v2 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v2 + 168));
    KeLeaveCriticalRegion();
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v2 + 64), DpiFdoThermalActiveCooling, 0x20u);
  }
  else
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 602;
  }
}
