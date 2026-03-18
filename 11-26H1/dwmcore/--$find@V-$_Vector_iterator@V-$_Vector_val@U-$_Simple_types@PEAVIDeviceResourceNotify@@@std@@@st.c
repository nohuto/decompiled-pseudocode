/*
 * XREFs of ??$find@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAVIDeviceResourceNotify@@@std@@@std@@@std@@PEBVIDeviceResourceNotify@@@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAVIDeviceResourceNotify@@@std@@@std@@@0@V10@V10@AEBQEBVIDeviceResourceNotify@@@Z @ 0x1801B16A0
 * Callers:
 *     ?RemoveResourceNotifier@?$CDeviceResourceT@V?$CMILCOMBaseT@VISwapChainRealization@@VIDeviceResource@@VCMilObjectDeleter@@@@@@UEAAXPEBVIDeviceResourceNotify@@@Z @ 0x1802AE2D0 (-RemoveResourceNotifier@-$CDeviceResourceT@V-$CMILCOMBaseT@VISwapChainRealization@@VIDeviceResou.c)
 * Callees:
 *     __std_find_trivial_8 @ 0x180220100 (__std_find_trivial_8.c)
 */

_QWORD *__fastcall std::find<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<IDeviceResourceNotify *>>>,IDeviceResourceNotify const *>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  *a1 = _std_find_trivial_8(a2, a3, *a4);
  return a1;
}
