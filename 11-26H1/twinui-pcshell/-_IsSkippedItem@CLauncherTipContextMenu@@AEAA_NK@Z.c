/*
 * XREFs of ?_IsSkippedItem@CLauncherTipContextMenu@@AEAA_NK@Z @ 0x1806043B8
 * Callers:
 *     ?_AddLinkToCommands@CLauncherTipContextMenu@@AEAAXPEAUIShellItem2@@_NI@Z @ 0x1801927C4 (-_AddLinkToCommands@CLauncherTipContextMenu@@AEAAXPEAUIShellItem2@@_NI@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CLauncherTipContextMenu::_IsSkippedItem(CLauncherTipContextMenu *this, int a2)
{
  _DWORD *i; // rax
  unsigned int v4; // eax
  _DWORD *v5; // rcx

  for ( i = &CLauncherTipContextMenu::c_rgSkippedItems; i != (_DWORD *)&unk_1807BF014; ++i )
  {
    if ( *i == a2 )
      return 1;
  }
  v4 = 0;
  v5 = &CLauncherTipContextMenu::c_rgSkippedDuplicateItems;
  while ( v4 < 3 )
  {
    if ( *v5 == a2 )
    {
      if ( *((_BYTE *)this + (int)v4 + 346) )
        return 1;
      *((_BYTE *)this + (int)v4 + 346) = 1;
      return 0;
    }
    ++v4;
    ++v5;
  }
  return 0;
}
