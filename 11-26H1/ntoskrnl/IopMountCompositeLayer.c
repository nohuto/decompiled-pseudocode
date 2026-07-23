/*
 * XREFs of IopMountCompositeLayer @ 0x140D09874
 * Callers:
 *     IopMountBootLayerCallout @ 0x140CC3D20 (IopMountBootLayerCallout.c)
 * Callees:
 *     PnpBootDeviceWait @ 0x1405DADA4 (PnpBootDeviceWait.c)
 *     IoMountBootLayer @ 0x140796AB0 (IoMountBootLayer.c)
 */

__int64 __fastcall IopMountCompositeLayer(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 44) & 1) == 0
    || (result = PnpBootDeviceWait(KeLoaderBlock_0, 1, (__int64)IopFormatBootDevice, 0LL), (int)result >= 0) )
  {
    IoMountBootLayer(*(_QWORD *)(a1 + 8), a2, a3);
    return 0LL;
  }
  return result;
}
