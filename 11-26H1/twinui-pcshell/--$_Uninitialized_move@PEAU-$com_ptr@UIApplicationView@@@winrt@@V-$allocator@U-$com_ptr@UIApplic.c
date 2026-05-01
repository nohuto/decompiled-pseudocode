/*
 * XREFs of ??$_Uninitialized_move@PEAU?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@YAPEAU?$com_ptr@UIApplicationView@@@winrt@@QEAU12@0PEAU12@AEAV?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@0@@Z @ 0x1802C03B0
 * Callers:
 *     ??$_Emplace_reallocate@AEAU?$com_ptr@UIApplicationView@@@winrt@@@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@AEAAPEAU?$com_ptr@UIApplicationView@@@winrt@@QEAU23@AEAU23@@Z @ 0x1801F64E0 (--$_Emplace_reallocate@AEAU-$com_ptr@UIApplicationView@@@winrt@@@-$vector@U-$com_ptr@UIApplicati.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@YAXPEAU?$com_ptr@UIApplicationView@@@winrt@@QEAU12@AEAV?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@0@@Z @ 0x1800E2758 (--$_Destroy_range@V-$allocator@U-$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@YAXPEAU-$com_pt.c)
 */

_QWORD *__fastcall std::_Uninitialized_move<winrt::com_ptr<IApplicationView> *,std::allocator<winrt::com_ptr<IApplicationView>>>(
        __int64 *a1,
        __int64 *a2,
        _QWORD *a3)
{
  __int64 v4; // r8

  while ( a1 != a2 )
  {
    v4 = *a1;
    *a1 = 0LL;
    *a3++ = v4;
    ++a1;
  }
  std::_Destroy_range<std::allocator<winrt::com_ptr<IApplicationView>>>(a3, a3);
  return a3;
}
