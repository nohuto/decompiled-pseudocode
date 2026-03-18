/*
 * XREFs of ??$_Destroy_range@V?$allocator@VDeviceInfo@CDeviceManager@@@std@@@std@@YAXPEAVDeviceInfo@CDeviceManager@@QEAV12@AEAV?$allocator@VDeviceInfo@CDeviceManager@@@0@@Z @ 0x18021B758
 * Callers:
 *     ?OnShutdown@CComposition@@QEAAXXZ @ 0x18014F3A4 (-OnShutdown@CComposition@@QEAAXXZ.c)
 *     ?_Change_array@?$vector@VDeviceInfo@CDeviceManager@@V?$allocator@VDeviceInfo@CDeviceManager@@@std@@@std@@AEAAXQEAVDeviceInfo@CDeviceManager@@_K1@Z @ 0x180216E84 (-_Change_array@-$vector@VDeviceInfo@CDeviceManager@@V-$allocator@VDeviceInfo@CDeviceManager@@@st.c)
 *     ??1CDeviceManager@@QEAA@XZ @ 0x1802171FC (--1CDeviceManager@@QEAA@XZ.c)
 *     ??$_Uninitialized_move@PEAVDeviceInfo@CDeviceManager@@V?$allocator@VDeviceInfo@CDeviceManager@@@std@@@std@@YAPEAVDeviceInfo@CDeviceManager@@QEAV12@0PEAV12@AEAV?$allocator@VDeviceInfo@CDeviceManager@@@0@@Z @ 0x180295400 (--$_Uninitialized_move@PEAVDeviceInfo@CDeviceManager@@V-$allocator@VDeviceInfo@CDeviceManager@@@.c)
 *     ??1_Reallocation_guard@?$vector@VDeviceInfo@CDeviceManager@@V?$allocator@VDeviceInfo@CDeviceManager@@@std@@@std@@QEAA@XZ @ 0x180295544 (--1_Reallocation_guard@-$vector@VDeviceInfo@CDeviceManager@@V-$allocator@VDeviceInfo@CDeviceMana.c)
 * Callees:
 *     ??$ReleaseInterface@VCD3DDevice@@@@YAXAEAPEAVCD3DDevice@@@Z @ 0x1801D2530 (--$ReleaseInterface@VCD3DDevice@@@@YAXAEAPEAVCD3DDevice@@@Z.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<CDeviceManager::DeviceInfo>>(CD3DDevice **a1, CD3DDevice **a2)
{
  CD3DDevice **v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = ReleaseInterface<CD3DDevice>(v3);
      v3 += 2;
    }
    while ( v3 != a2 );
  }
  return result;
}
