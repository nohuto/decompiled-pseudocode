/*
 * XREFs of NvmeControllerReuseExtendedCommand @ 0x14011FE74
 * Callers:
 *     NvmeControllerGetTelemetryLog @ 0x1400F4BE8 (NvmeControllerGetTelemetryLog.c)
 *     NvmeNamespaceReinitializeMediaRecoverWorker @ 0x14010CBE0 (NvmeNamespaceReinitializeMediaRecoverWorker.c)
 *     NvmeQueryProtocolInfoCompletion @ 0x14011FFE0 (NvmeQueryProtocolInfoCompletion.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

void __fastcall NvmeControllerReuseExtendedCommand(__int64 a1, __int64 a2)
{
  int v3; // edi
  __int64 v4; // rbx
  __int64 v5; // rsi
  KIRQL v6; // bp
  __int64 v7; // r8

  if ( a2 && *(_QWORD *)(*(_QWORD *)a2 + 4176LL) )
  {
    v3 = *(_DWORD *)(*(_QWORD *)a2 + 4256LL);
    v4 = *(_QWORD *)(a1 + 128);
    v5 = *(_QWORD *)(*(_QWORD *)a2 + 4176LL);
    v6 = KfRaiseIrql(2u);
    LOBYTE(v7) = (v3 & 0x200) != 0;
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(v4 + 1160) + 8LL) + 96LL))(
      *(_QWORD *)(v4 + 1160),
      v5,
      v7);
    if ( v6 < 2u )
      KeLowerIrql(v6);
    *(_QWORD *)(*(_QWORD *)a2 + 4176LL) = 0LL;
  }
}
