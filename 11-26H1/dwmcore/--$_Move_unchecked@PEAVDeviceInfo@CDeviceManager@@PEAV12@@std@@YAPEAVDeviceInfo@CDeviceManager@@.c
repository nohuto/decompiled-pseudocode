/*
 * XREFs of ??$_Move_unchecked@PEAVDeviceInfo@CDeviceManager@@PEAV12@@std@@YAPEAVDeviceInfo@CDeviceManager@@PEAV12@00@Z @ 0x1801D255C
 * Callers:
 *     ?ProcessDeviceLost@CDeviceManager@@IEAAXXZ @ 0x180032674 (-ProcessDeviceLost@CDeviceManager@@IEAAXXZ.c)
 * Callees:
 *     ??$ReleaseInterface@VCD3DDevice@@@@YAXAEAPEAVCD3DDevice@@@Z @ 0x1801D2530 (--$ReleaseInterface@VCD3DDevice@@@@YAXAEAPEAVCD3DDevice@@@Z.c)
 */

__int64 __fastcall std::_Move_unchecked<CDeviceManager::DeviceInfo *,CDeviceManager::DeviceInfo *>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 i; // rbx

  for ( i = a1; i != a2; i += 16LL )
  {
    if ( a3 != i )
    {
      ReleaseInterface<CD3DDevice>((CD3DDevice **)a3);
      *(_QWORD *)a3 = *(_QWORD *)i;
      *(_BYTE *)(a3 + 8) = *(_BYTE *)(i + 8);
      *(_QWORD *)i = 0LL;
    }
    a3 += 16LL;
  }
  return a3;
}
