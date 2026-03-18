/*
 * XREFs of PnpStopDeviceSubtree @ 0x1407B4344
 * Callers:
 *     PnpRebalance @ 0x1407B3F98 (PnpRebalance.c)
 *     PnpStopDeviceSubtree @ 0x1407B4344 (PnpStopDeviceSubtree.c)
 * Callees:
 *     PipSetDevNodeState @ 0x1404D2858 (PipSetDevNodeState.c)
 *     IopQueryReconfiguration @ 0x1407B2A78 (IopQueryReconfiguration.c)
 *     PnpStopDeviceSubtree @ 0x1407B4344 (PnpStopDeviceSubtree.c)
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
