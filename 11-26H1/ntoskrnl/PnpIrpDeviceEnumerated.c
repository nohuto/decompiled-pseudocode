/*
 * XREFs of PnpIrpDeviceEnumerated @ 0x1404E30E8
 * Callers:
 *     PiProcessNewDeviceNode @ 0x1409D9370 (PiProcessNewDeviceNode.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     IopSynchronousCall @ 0x1409B0720 (IopSynchronousCall.c)
 */

__int64 __fastcall PnpIrpDeviceEnumerated(int a1)
{
  _WORD v3[44]; // [rsp+30h] [rbp-58h] BYREF

  memset_0(v3, 0, 0x48uLL);
  v3[0] = 6427;
  return IopSynchronousCall(a1, (unsigned int)v3, -1073741637, 0, 0LL);
}
