/*
 * XREFs of ?NodeUsageTelemetryThread@DXGGLOBAL@@CAXPEAX@Z @ 0x1401DF020
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?SetNodeUsageTelemetryTimer@DXGGLOBAL@@AEAAXXZ @ 0x1401DFD08 (-SetNodeUsageTelemetryTimer@DXGGLOBAL@@AEAAXXZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x14033D68C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 */

void __fastcall DXGGLOBAL::NodeUsageTelemetryThread(_QWORD *P)
{
  DXGGLOBAL *v1; // rsi
  int v3; // eax
  __int64 v4; // rbx

  v1 = (DXGGLOBAL *)P[4];
  v3 = DXGGLOBAL::IterateAdaptersWithCallback(v1, DXGGLOBAL::NodeUsageTelemetryCallback, 0LL, 2LL);
  if ( v3 < 0 )
  {
    v4 = v3;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1383;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to iterate adapters: 0x%I64x",
      v4,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGGLOBAL::SetNodeUsageTelemetryTimer(v1);
  ExFreePoolWithTag(P, 0x4B677844u);
}
