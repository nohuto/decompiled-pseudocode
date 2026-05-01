/*
 * XREFs of ?_IsEmpty@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEBA_NXZ @ 0x1801C5530
 * Callers:
 *     ?_AddLinkToCommands@CLauncherTipContextMenu@@AEAAXPEAUIShellItem2@@_NI@Z @ 0x1801927C4 (-_AddLinkToCommands@CLauncherTipContextMenu@@AEAAXPEAUIShellItem2@@_NI@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_IsEmpty(
        _QWORD *a1)
{
  char result; // al

  result = 0;
  if ( !*a1 || !*(_WORD *)*a1 )
    return 1;
  return result;
}
