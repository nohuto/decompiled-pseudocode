/*
 * XREFs of PnpTraceStartDevice @ 0x140493B60
 * Callers:
 *     PnpDeviceCompletionRoutine @ 0x1404937E0 (PnpDeviceCompletionRoutine.c)
 *     PnpStartDeviceNode @ 0x140910A7C (PnpStartDeviceNode.c)
 * Callees:
 *     PnpDiagnosticTraceDeviceOperation @ 0x140493C2C (PnpDiagnosticTraceDeviceOperation.c)
 */

__int64 __fastcall PnpTraceStartDevice(__int64 a1, __int64 a2, __int64 a3)
{
  __int16 v3; // r10
  unsigned __int64 v5; // r9
  unsigned __int64 v6; // r8
  signed int v7; // ecx

  LOBYTE(v3) = 0;
  if ( a3 )
  {
    v5 = 0LL;
    v6 = *(_QWORD *)(a3 + 24);
    if ( !v6 || v6 == -1LL )
    {
      v7 = -1073741811;
    }
    else if ( *(_WORD *)v6 == 23117
           && (v5 = v6 + *(unsigned int *)(v6 + 60), v5 >= v6)
           && (v6 >= 0x7FFFFFFF0000LL || v5 + 264 <= 0x7FFFFFFF0000LL && v5 + 264 > v5) )
    {
      v7 = *(_DWORD *)v5 != 17744 ? 0xC000007B : 0;
    }
    else
    {
      v7 = -1073741701;
    }
    if ( v7 < 0 )
      v5 = 0LL;
    v3 = *(_WORD *)(v5 + 70);
  }
  PnpDiagnosticTraceDeviceOperation(&KMPnPEvt_DeviceStart_Stop, v3);
  return 0LL;
}
