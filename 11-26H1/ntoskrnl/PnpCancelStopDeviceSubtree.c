/*
 * XREFs of PnpCancelStopDeviceSubtree @ 0x1407B3B68
 * Callers:
 *     PnpCancelStopDeviceSubtree @ 0x1407B3B68 (PnpCancelStopDeviceSubtree.c)
 *     PnpRebalance @ 0x1407B3F98 (PnpRebalance.c)
 * Callees:
 *     PnpCancelStopDeviceNode @ 0x1407B3AD4 (PnpCancelStopDeviceNode.c)
 *     PnpCancelStopDeviceSubtree @ 0x1407B3B68 (PnpCancelStopDeviceSubtree.c)
 */

void __fastcall PnpCancelStopDeviceSubtree(ULONG_PTR a1)
{
  _QWORD *i; // rbx

  PnpCancelStopDeviceNode(a1);
  for ( i = *(_QWORD **)(a1 + 8); i; i = (_QWORD *)*i )
    PnpCancelStopDeviceSubtree(i);
}
