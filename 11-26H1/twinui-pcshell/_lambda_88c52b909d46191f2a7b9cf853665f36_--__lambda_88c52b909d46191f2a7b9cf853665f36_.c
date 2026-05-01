/*
 * XREFs of _lambda_88c52b909d46191f2a7b9cf853665f36_::__lambda_88c52b909d46191f2a7b9cf853665f36_ @ 0x1802856F4
 * Callers:
 *     _StartupFolderNotification::CheckForRemovedStartupApp_::_1_::dtor$3 @ 0x1806DA8EF (_StartupFolderNotification--CheckForRemovedStartupApp_--_1_--dtor$3.c)
 *     _StartupRegKeyNotification::CheckForRemovedStartupApp_::_1_::dtor$2 @ 0x1806DAD05 (_StartupRegKeyNotification--CheckForRemovedStartupApp_--_1_--dtor$2.c)
 * Callees:
 *     ??$_Freenode@V?$allocator@U?$_List_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@std@@@std@@@?$_List_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180285684 (--$_Freenode@V-$allocator@U-$_List_node@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@.c)
 */

__int64 __fastcall lambda_88c52b909d46191f2a7b9cf853665f36_::__lambda_88c52b909d46191f2a7b9cf853665f36_(__int64 a1)
{
  _QWORD **v1; // rdx
  _QWORD *v3; // rdx
  _QWORD *v4; // rbx

  v1 = *(_QWORD ***)(a1 + 8);
  *v1[1] = 0LL;
  v3 = *v1;
  if ( v3 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      std::_List_node<std::wstring,void *>::_Freenode<std::allocator<std::_List_node<std::wstring,void *>>>(
        a1,
        (__int64)v3);
      v3 = v4;
    }
    while ( v4 );
  }
  return std::_Deallocate<16>(*(_QWORD *)(a1 + 8), 48LL);
}
