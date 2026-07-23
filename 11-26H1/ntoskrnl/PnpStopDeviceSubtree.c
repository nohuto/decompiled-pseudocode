/*
 * XREFs of PnpStopDeviceSubtree @ 0x1407B73A4
 * Callers:
 *     PnpRebalance @ 0x1407B6FF8 (PnpRebalance.c)
 *     PnpStopDeviceSubtree @ 0x1407B73A4 (PnpStopDeviceSubtree.c)
 * Callees:
 *     PipSetDevNodeState @ 0x1404CC0D0 (PipSetDevNodeState.c)
 *     IopQueryReconfiguration @ 0x1407B5AD8 (IopQueryReconfiguration.c)
 *     PnpStopDeviceSubtree @ 0x1407B73A4 (PnpStopDeviceSubtree.c)
 */

void __fastcall PnpStopDeviceSubtree(__int64 a1)
{
  _QWORD *i; // rbx

  for ( i = *(_QWORD **)(a1 + 8); i; i = (_QWORD *)*i )
    PnpStopDeviceSubtree(i);
  if ( *(_DWORD *)(a1 + 300) == 779 )
  {
    IopQueryReconfiguration(4, *(_QWORD *)(a1 + 32));
    PipSetDevNodeState(a1, 780);
  }
}
