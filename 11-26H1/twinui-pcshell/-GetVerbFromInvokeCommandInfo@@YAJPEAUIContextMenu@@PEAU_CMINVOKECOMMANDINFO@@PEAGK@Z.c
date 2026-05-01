/*
 * XREFs of ?GetVerbFromInvokeCommandInfo@@YAJPEAUIContextMenu@@PEAU_CMINVOKECOMMANDINFO@@PEAGK@Z @ 0x180683B14
 * Callers:
 *     ?InvokeCommand@CPinnedList@@UEAAJPEAU_CMINVOKECOMMANDINFO@@@Z @ 0x1806938F0 (-InvokeCommand@CPinnedList@@UEAAJPEAU_CMINVOKECOMMANDINFO@@@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800AAC98 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?ContextMenu_GetCommandStringVerb@@YAJPEAUIContextMenu@@IPEAGH@Z @ 0x1806839E0 (-ContextMenu_GetCommandStringVerb@@YAJPEAUIContextMenu@@IPEAGH@Z.c)
 */

__int64 __fastcall GetVerbFromInvokeCommandInfo(
        struct IContextMenu *a1,
        struct _CMINVOKECOMMANDINFO *a2,
        char *a3,
        unsigned int a4)
{
  const CHAR *lpVerb; // rcx
  unsigned int v7; // ebx
  unsigned int CommandStringVerb; // eax
  char *hwnd; // r8

  *(_WORD *)a3 = 0;
  lpVerb = a2->lpVerb;
  v7 = -2147467259;
  if ( (unsigned __int64)lpVerb >= 0x10000 )
  {
    if ( a2->cbSize >= 0x60 && (a2->fMask & 0x4000) != 0 && (hwnd = (char *)a2[1].hwnd) != 0LL )
      CommandStringVerb = StringCchCopyW(a3, a4, hwnd);
    else
      CommandStringVerb = SHAnsiToUnicode(lpVerb, (PWSTR)a3, a4) == 0 ? 0x80004005 : 0;
  }
  else
  {
    CommandStringVerb = ContextMenu_GetCommandStringVerb(a1, (unsigned __int16)lpVerb, a3, a4);
  }
  if ( *(_WORD *)a3 )
    return CommandStringVerb;
  return v7;
}
