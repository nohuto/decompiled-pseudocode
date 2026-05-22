/*
 * XREFs of ??1?$_Hash@V?$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@std@@V?$allocator@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x180054858
 * Callers:
 *     ??1GestureServices@@UEAA@XZ @ 0x180144B20 (--1GestureServices@@UEAA@XZ.c)
 *     ??1ControllerProcessor@@MEAA@XZ @ 0x18017C944 (--1ControllerProcessor@@MEAA@XZ.c)
 *     ??1ISMHeatFrameworkHost@@MEAA@XZ @ 0x180197284 (--1ISMHeatFrameworkHost@@MEAA@XZ.c)
 *     ??1PenEventsDispatcherPrincipal@@UEAA@XZ @ 0x180198B64 (--1PenEventsDispatcherPrincipal@@UEAA@XZ.c)
 *     _GestureServices::GestureServices_::_1_::dtor$8 @ 0x1801D5726 (_GestureServices--GestureServices_--_1_--dtor$8.c)
 *     _PenEventsDispatcherPrincipal::PenEventsDispatcherPrincipal_::_1_::dtor$2 @ 0x1801D59E1 (_PenEventsDispatcherPrincipal--PenEventsDispatcherPrincipal_--_1_--dtor$2.c)
 *     _ViewHierarchyWithWindowManager::ViewHierarchyWithWindowManager_::_1_::dtor$5 @ 0x1801D6C91 (_ViewHierarchyWithWindowManager--ViewHierarchyWithWindowManager_--_1_--dtor$5.c)
 *     _ControllerProcessor::ControllerProcessor_::_1_::dtor$1 @ 0x1801DC0DB (_ControllerProcessor--ControllerProcessor_--_1_--dtor$1.c)
 *     _ISMHeatFrameworkHost::ISMHeatFrameworkHost_::_1_::dtor$2 @ 0x1801DC876 (_ISMHeatFrameworkHost--ISMHeatFrameworkHost_--_1_--dtor$2.c)
 *     _ISMHeatFrameworkHost::ISMHeatFrameworkHost_::_1_::dtor$4 @ 0x1801DC8A2 (_ISMHeatFrameworkHost--ISMHeatFrameworkHost_--_1_--dtor$4.c)
 *     _dynamic_atexit_destructor_for__ControllerProcessor::s_controllerCurrentKeyMap__ @ 0x1801DDE30 (_dynamic_atexit_destructor_for__ControllerProcessor--s_controllerCurrentKeyMap__.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned short,ControllerProcessor::ActiveKeyProperties,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,ControllerProcessor::ActiveKeyProperties>>,0>>::~_Hash<std::_Umap_traits<unsigned short,ControllerProcessor::ActiveKeyProperties,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,ControllerProcessor::ActiveKeyProperties>>,0>>(
        _QWORD *a1)
{
  __int64 v2; // rcx
  _QWORD **v3; // rcx
  _QWORD *v4; // rcx
  _QWORD *v5; // rbx

  v2 = a1[3];
  if ( v2 )
  {
    std::_Deallocate<16>(v2, (a1[5] - v2) & 0xFFFFFFFFFFFFFFF8uLL);
    a1[3] = 0LL;
    a1[4] = 0LL;
    a1[5] = 0LL;
  }
  v3 = (_QWORD **)a1[1];
  *v3[1] = 0LL;
  v4 = *v3;
  if ( v4 )
  {
    do
    {
      v5 = (_QWORD *)*v4;
      std::_Deallocate<16>(v4, 24LL);
      v4 = v5;
    }
    while ( v5 );
  }
  return std::_Deallocate<16>(a1[1], 24LL);
}
