/*
 * XREFs of ??1?$list@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAA@XZ @ 0x1801E11A4
 * Callers:
 *     _StartupAppMonitor::StartupToastNotifier_::_1_::dtor$4 @ 0x1806A696F (_StartupAppMonitor--StartupToastNotifier_--_1_--dtor$4.c)
 *     _StartupRegKeyNotification::CheckForRemovedStartupApp_::_1_::dtor$1 @ 0x1806A6D15 (_StartupRegKeyNotification--CheckForRemovedStartupApp_--_1_--dtor$1.c)
 * Callees:
 *     ??$_Freenode@V?$allocator@U?$_List_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@std@@@std@@@?$_List_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1802A3B28 (--$_Freenode@V-$allocator@U-$_List_node@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@.c)
 */

void __fastcall std::list<std::wstring>::~list<std::wstring>(void **a1)
{
  _QWORD **v1; // rdx
  _QWORD *v3; // rdx
  _QWORD *v4; // rbx

  v1 = (_QWORD **)*a1;
  **((_QWORD **)*a1 + 1) = 0LL;
  v3 = *v1;
  if ( v3 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      std::_List_node<std::wstring,void *>::_Freenode<std::allocator<std::_List_node<std::wstring,void *>>>();
      v3 = v4;
    }
    while ( v4 );
  }
  operator delete(*a1, (const struct std::nothrow_t *)0x30);
}
