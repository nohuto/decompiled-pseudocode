/*
 * XREFs of ??1VirtualHotKeyTracker@@UEAA@XZ @ 0x1801B5354
 * Callers:
 *     ??_GVirtualHotKeyTracker@@UEAAPEAXI@Z @ 0x1801B53D0 (--_GVirtualHotKeyTracker@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18006BB00 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??1?$_Tree@V?$_Tmap_traits@U_GUID@@V?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@UCompareGuids@VirtualHotKeyTracker@@V?$allocator@U?$pair@$$CBU_GUID@@V?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@@std@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x1801B51E8 (--1-$_Tree@V-$_Tmap_traits@U_GUID@@V-$list@UKeyEventData@VirtualHotKeyTracker@@V-$allocator@UKey.c)
 */

void __fastcall VirtualHotKeyTracker::~VirtualHotKeyTracker(void **this)
{
  _QWORD **v2; // rdx
  _QWORD *v3; // rcx
  _QWORD *v4; // rbx
  std::_Ref_count_base *v5; // rcx

  std::_Tree<std::_Tmap_traits<_GUID,std::list<VirtualHotKeyTracker::KeyEventData>,VirtualHotKeyTracker::CompareGuids,std::allocator<std::pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>>,0>>::~_Tree<std::_Tmap_traits<_GUID,std::list<VirtualHotKeyTracker::KeyEventData>,VirtualHotKeyTracker::CompareGuids,std::allocator<std::pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>>,0>>(this + 6);
  v2 = (_QWORD **)this[4];
  *v2[1] = 0LL;
  v3 = *v2;
  if ( *v2 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      std::_Deallocate<16>(v3, (struct std::nothrow_t *)0x30);
      v3 = v4;
    }
    while ( v4 );
  }
  std::_Deallocate<16>(this[4], (struct std::nothrow_t *)0x30);
  v5 = (std::_Ref_count_base *)this[3];
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  *((_DWORD *)this + 3) = -1073741823;
}
