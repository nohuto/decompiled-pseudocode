/*
 * XREFs of ??$emplace_back@AEAPEAVCD3DDevice@@@?$vector@VDeviceInfo@CDeviceManager@@V?$allocator@VDeviceInfo@CDeviceManager@@@std@@@std@@QEAAAEAVDeviceInfo@CDeviceManager@@AEAPEAVCD3DDevice@@@Z @ 0x1802954B4
 * Callers:
 *     ?CreateNewDevice@CDeviceManager@@AEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x1800F7F70 (-CreateNewDevice@CDeviceManager@@AEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ??$_Emplace_reallocate@AEAPEAVCD3DDevice@@@?$vector@VDeviceInfo@CDeviceManager@@V?$allocator@VDeviceInfo@CDeviceManager@@@std@@@std@@AEAAPEAVDeviceInfo@CDeviceManager@@QEAV23@AEAPEAVCD3DDevice@@@Z @ 0x180295280 (--$_Emplace_reallocate@AEAPEAVCD3DDevice@@@-$vector@VDeviceInfo@CDeviceManager@@V-$allocator@VDe.c)
 */

char *__fastcall std::vector<CDeviceManager::DeviceInfo>::emplace_back<CD3DDevice * &>(__int64 *a1, __int64 *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx

  v4 = a1[1];
  if ( v4 == a1[2] )
    return std::vector<CDeviceManager::DeviceInfo>::_Emplace_reallocate<CD3DDevice * &>(a1, v4, a2);
  v5 = *a2;
  *(_BYTE *)(v4 + 8) = 0;
  *(_QWORD *)v4 = v5;
  if ( v5 )
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v5 + 8));
  v6 = a1[1];
  a1[1] = v6 + 16;
  return (char *)v6;
}
