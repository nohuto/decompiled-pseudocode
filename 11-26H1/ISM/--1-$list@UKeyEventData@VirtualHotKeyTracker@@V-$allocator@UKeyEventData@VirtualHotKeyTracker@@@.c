/*
 * XREFs of ??1?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@QEAA@XZ @ 0x1801B5218
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_VirtualHotKeyTracker_VirtualHotKeyTracker__::_1_::dtor$5 @ 0x1801DD029 (_Microsoft--WRL--Details--MakeAndInitialize_VirtualHotKeyTracker_VirtualHotKeyTrack_ea_1801DD029.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::list<VirtualHotKeyTracker::KeyEventData>::~list<VirtualHotKeyTracker::KeyEventData>(void **a1)
{
  _QWORD **v1; // rdx
  _QWORD *v3; // rcx
  _QWORD *v4; // rbx

  v1 = (_QWORD **)*a1;
  **((_QWORD **)*a1 + 1) = 0LL;
  v3 = *v1;
  if ( *v1 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      std::_Deallocate<16>(v3, (struct std::nothrow_t *)0x30);
      v3 = v4;
    }
    while ( v4 );
  }
  std::_Deallocate<16>(*a1, (struct std::nothrow_t *)0x30);
}
