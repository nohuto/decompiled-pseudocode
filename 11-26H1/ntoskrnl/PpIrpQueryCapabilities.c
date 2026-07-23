/*
 * XREFs of PpIrpQueryCapabilities @ 0x1409B0694
 * Callers:
 *     IoGetDeviceProperty @ 0x1409556D0 (IoGetDeviceProperty.c)
 *     PnpQueryAndSaveDeviceNodeCapabilities @ 0x1409ABBD8 (PnpQueryAndSaveDeviceNodeCapabilities.c)
 *     PiProcessNewDeviceNode @ 0x1409D9370 (PiProcessNewDeviceNode.c)
 *     PiControlGetDevicePowerData @ 0x140A93788 (PiControlGetDevicePowerData.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     IopSynchronousCall @ 0x1409B0720 (IopSynchronousCall.c)
 */

__int64 __fastcall PpIrpQueryCapabilities(int a1, _DWORD *a2)
{
  __int16 v5; // [rsp+30h] [rbp-58h] BYREF
  _DWORD *v6; // [rsp+38h] [rbp-50h]

  memset_0(a2, 0, 0x40uLL);
  *a2 = 65600;
  a2[3] = -1;
  a2[2] = -1;
  memset_0(&v5, 0, 0x48uLL);
  v5 = 2331;
  v6 = a2;
  return IopSynchronousCall(a1, (unsigned int)&v5, -1073741637, 0, 0LL);
}
