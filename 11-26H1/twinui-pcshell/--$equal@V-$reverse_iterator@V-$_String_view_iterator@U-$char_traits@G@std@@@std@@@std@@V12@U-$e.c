/*
 * XREFs of ??$equal@V?$reverse_iterator@V?$_String_view_iterator@U?$char_traits@G@std@@@std@@@std@@V12@U?$equal_to@X@2@@std@@YA_NV?$reverse_iterator@V?$_String_view_iterator@U?$char_traits@G@std@@@std@@@0@000U?$equal_to@X@0@@Z @ 0x180032384
 * Callers:
 *     ?XamlExplorerHost_get_activation_factory@@YAPEAXAEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18003226C (-XamlExplorerHost_get_activation_factory@@YAPEAXAEBV-$basic_string_view@GU-$char_traits@G@std@@@.c)
 *     ?Windows_Internal_Shell_DesktopTaskGroups_get_activation_factory@@YAPEAXAEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800323C4 (-Windows_Internal_Shell_DesktopTaskGroups_get_activation_factory@@YAPEAXAEBV-$basic_string_view@.c)
 *     ?XamlExplorerHost_WASDK_get_activation_factory@@YAPEAXAEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1804544AC (-XamlExplorerHost_WASDK_get_activation_factory@@YAPEAXAEBV-$basic_string_view@GU-$char_traits@G@.c)
 * Callees:
 *     <none>
 */

char __fastcall std::equal<std::reverse_iterator<std::_String_view_iterator<std::char_traits<unsigned short>>>,std::reverse_iterator<std::_String_view_iterator<std::char_traits<unsigned short>>>,std::equal_to<void>>(
        __int64 a1,
        _WORD *a2,
        __int64 a3,
        __int64 a4)
{
  _WORD *v4; // r9
  __int64 v5; // r8

  if ( a1 - (_QWORD)a2 != a3 - a4 )
    return 0;
  v4 = (_WORD *)(a1 - 2);
  v5 = a3 - a1;
  while ( v4 + 1 != a2 )
  {
    if ( *v4 != *(_WORD *)((char *)v4 + v5) )
      return 0;
    --v4;
  }
  return 1;
}
