/*
 * XREFs of ?_Erase_unchecked@?$_Tree@V?$_Tmap_traits@U?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@U?$less@U?$com_ptr@UIApplicationView@@@winrt@@@4@V?$allocator@U?$pair@$$CBU?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@std@@@4@$0A@@std@@@std@@AEAAPEAU?$_Tree_node@U?$pair@$$CBU?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x180155F8C
 * Callers:
 *     ?OnApplicationViewChanged@InteractionTracker@SnapInteraction@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180028450 (-OnApplicationViewChanged@InteractionTracker@SnapInteraction@@UEAAJPEAUIApplicationView@@W4APPLI.c)
 * Callees:
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@PEAX@2@PEAU32@@Z @ 0x18005A364 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$al.c)
 *     ??1?$pair@$$CBU?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@std@@QEAA@XZ @ 0x180156008 (--1-$pair@$$CBU-$com_ptr@UIApplicationView@@@winrt@@V-$shared_ptr@VInteractionRecord@SnapInterac.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBU?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x180156034 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBU-$com_ptr@UIApplicationView@@@winrt@@V-.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<winrt::com_ptr<IApplicationView>,std::shared_ptr<SnapInteraction::InteractionRecord>,std::less<winrt::com_ptr<IApplicationView>>,std::allocator<std::pair<winrt::com_ptr<IApplicationView> const,std::shared_ptr<SnapInteraction::InteractionRecord>>>,0>>::_Erase_unchecked(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // r9
  _QWORD *v3; // r8
  __int64 v4; // rcx
  _QWORD *v5; // rax
  _QWORD *i; // rbx
  char *v7; // rdi

  v2 = a1;
  v3 = a2;
  v4 = a2[2];
  v5 = a2;
  if ( *(_BYTE *)(v4 + 25) )
  {
    for ( i = (_QWORD *)a2[1]; !*((_BYTE *)i + 25) && v5 == (_QWORD *)i[2]; i = (_QWORD *)i[1] )
      v5 = i;
  }
  else
  {
    i = std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::shared_ptr<Win32AppInfo>>>>::_Min((_QWORD *)v4);
  }
  v7 = (char *)std::_Tree_val<std::_Tree_simple_types<std::pair<winrt::com_ptr<IApplicationView> const,std::shared_ptr<SnapInteraction::InteractionRecord>>>>::_Extract(
                 v2,
                 v3);
  std::pair<winrt::com_ptr<IApplicationView> const,std::shared_ptr<SnapInteraction::InteractionRecord>>::~pair<winrt::com_ptr<IApplicationView> const,std::shared_ptr<SnapInteraction::InteractionRecord>>(v7 + 32);
  operator delete(v7, (const struct std::nothrow_t *)0x38);
  return i;
}
