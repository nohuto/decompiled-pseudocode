/*
 * XREFs of ??$_Destroy_range@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@YAXPEAU?$com_ptr@UIApplicationView@@@winrt@@QEAU12@AEAV?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@0@@Z @ 0x1800E2758
 * Callers:
 *     ??$_Uninitialized_move@PEAU?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@YAPEAU?$com_ptr@UIApplicationView@@@winrt@@QEAU12@0PEAU12@AEAV?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@0@@Z @ 0x1802C03B0 (--$_Uninitialized_move@PEAU-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplic.c)
 *     ?_Tidy@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@AEAAXXZ @ 0x1802C2560 (-_Tidy@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationView@.c)
 *     ??1_Reallocation_guard@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@QEAA@XZ @ 0x1805B9B64 (--1_Reallocation_guard@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UI.c)
 * Callees:
 *     ??1?$com_ptr@UISnapComponent@@@winrt@@QEAA@XZ @ 0x1800252D4 (--1-$com_ptr@UISnapComponent@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<winrt::com_ptr<IApplicationView>>>(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
      result = winrt::com_ptr<ISnapComponent>::~com_ptr<ISnapComponent>(v3++);
    while ( v3 != a2 );
  }
  return result;
}
