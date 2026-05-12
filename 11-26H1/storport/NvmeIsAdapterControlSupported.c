/*
 * XREFs of NvmeIsAdapterControlSupported @ 0x1400787E0
 * Callers:
 *     NvmeCallMiniportAdapterControlSafe @ 0x140078794 (NvmeCallMiniportAdapterControlSafe.c)
 *     NvmeAdapterStop @ 0x1400DEC40 (NvmeAdapterStop.c)
 *     NvmeAdapterStopAdapter @ 0x1400DF15C (NvmeAdapterStopAdapter.c)
 *     NvmeAdapterSendPowerToMiniport @ 0x140126054 (NvmeAdapterSendPowerToMiniport.c)
 *     NvmeAdapterFilterResourceRequirementsIrp @ 0x140199CA8 (NvmeAdapterFilterResourceRequirementsIrp.c)
 *     NvmeAdapterSurpriseRemovalIrp @ 0x1401A0664 (NvmeAdapterSurpriseRemovalIrp.c)
 * Callees:
 *     RaMiniportIsFeatureSupported @ 0x14005073C (RaMiniportIsFeatureSupported.c)
 *     NvmeCallMiniportAdapterControl @ 0x140078740 (NvmeCallMiniportAdapterControl.c)
 */

char __fastcall NvmeIsAdapterControlSupported(__int64 a1, int a2)
{
  __int64 v3; // rsi
  char v4; // di
  __int64 v5; // rcx
  _DWORD *v6; // r9
  __int64 v7; // rcx
  _DWORD *v8; // r9
  __int64 v9; // rcx
  _DWORD *v10; // r9
  __int64 v11; // rcx
  _DWORD *v12; // r9
  __int64 v13; // rcx
  _DWORD *v14; // r9
  __int64 v15; // rcx
  _DWORD *v16; // r9
  __int64 v17; // rcx
  _DWORD *v18; // r9
  __int64 v19; // rcx
  _DWORD *v20; // r9
  __int64 v21; // rcx
  _DWORD *v22; // r9
  __int64 v23; // rcx
  _DWORD *v24; // r9
  __int64 v25; // rcx
  _DWORD *v26; // r9

  v3 = a2;
  if ( (*(_DWORD *)(a1 + 248) & 0x20) != 0 )
    return *(_BYTE *)(a2 + a1 + 292);
  v4 = 0;
  *(_QWORD *)(a1 + 292) = 0LL;
  *(_QWORD *)(a1 + 300) = 0LL;
  *(_QWORD *)(a1 + 308) = 0LL;
  *(_QWORD *)(a1 + 316) = 0LL;
  *(_DWORD *)(a1 + 288) = 19;
  if ( RaMiniportIsFeatureSupported(a1, 2) )
    *v6 = 20;
  if ( RaMiniportIsFeatureSupported(v5, 3) )
    *v8 = 21;
  if ( RaMiniportIsFeatureSupported(v7, 5) )
    *v10 = 22;
  if ( RaMiniportIsFeatureSupported(v9, 6) )
    *v12 = 23;
  if ( RaMiniportIsFeatureSupported(v11, 7) )
    *v14 = 24;
  if ( RaMiniportIsFeatureSupported(v13, 8) )
    *v16 = 25;
  if ( RaMiniportIsFeatureSupported(v15, 9) )
    *v18 = 26;
  if ( RaMiniportIsFeatureSupported(v17, 10) )
    *v20 = 27;
  if ( RaMiniportIsFeatureSupported(v19, 12) )
    *v22 = 28;
  if ( RaMiniportIsFeatureSupported(v21, 13) )
    *v24 = 29;
  if ( RaMiniportIsFeatureSupported(v23, 15) )
    *v26 = 30;
  if ( (int)NvmeCallMiniportAdapterControl(v25) >= 0 )
  {
    *(_DWORD *)(a1 + 248) |= 0x20u;
    return *(_BYTE *)(v3 + a1 + 292);
  }
  return v4;
}
