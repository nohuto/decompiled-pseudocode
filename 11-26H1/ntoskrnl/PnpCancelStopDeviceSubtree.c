/*
 * XREFs of PnpCancelStopDeviceSubtree @ 0x1407B6BC8
 * Callers:
 *     PnpCancelStopDeviceSubtree @ 0x1407B6BC8 (PnpCancelStopDeviceSubtree.c)
 *     PnpRebalance @ 0x1407B6FF8 (PnpRebalance.c)
 * Callees:
 *     PnpCancelStopDeviceNode @ 0x1407B6B34 (PnpCancelStopDeviceNode.c)
 *     PnpCancelStopDeviceSubtree @ 0x1407B6BC8 (PnpCancelStopDeviceSubtree.c)
 */

void __fastcall PnpCancelStopDeviceSubtree(ULONG_PTR a1)
{
  _QWORD *i; // rbx

  PnpCancelStopDeviceNode(a1);
  for ( i = *(_QWORD **)(a1 + 8); i; i = (_QWORD *)*i )
    PnpCancelStopDeviceSubtree(i);
}
