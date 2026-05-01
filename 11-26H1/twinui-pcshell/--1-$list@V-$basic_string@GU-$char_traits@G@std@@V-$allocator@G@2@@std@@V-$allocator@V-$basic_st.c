/*
 * XREFs of ??1?$list@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAA@XZ @ 0x1801D54EC
 * Callers:
 *     _StartupAppMonitor::StartupToastNotifier_::_1_::dtor$4 @ 0x1806CE036 (_StartupAppMonitor--StartupToastNotifier_--_1_--dtor$4.c)
 *     _StartupRegKeyNotification::CheckForRemovedStartupApp_::_1_::dtor$1 @ 0x1806DA8DD (_StartupRegKeyNotification--CheckForRemovedStartupApp_--_1_--dtor$1.c)
 * Callees:
 *     ??$_Freenode@V?$allocator@U?$_List_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@std@@@std@@@?$_List_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180285684 (--$_Freenode@V-$allocator@U-$_List_node@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@.c)
 */

__int64 __fastcall std::list<std::wstring>::~list<std::wstring>(_QWORD *a1)
{
  _QWORD **v1; // rdx
  _QWORD *v3; // rdx
  _QWORD *v5; // rbx

  v1 = (_QWORD **)*a1;
  **(_QWORD **)(*a1 + 8LL) = 0LL;
  v3 = *v1;
  if ( v3 )
  {
    do
    {
      v5 = (_QWORD *)*v3;
      std::_List_node<std::wstring,void *>::_Freenode<std::allocator<std::_List_node<std::wstring,void *>>>();
      v3 = v5;
    }
    while ( v5 );
  }
  return std::_Deallocate<16>(*a1, 48LL);
}
