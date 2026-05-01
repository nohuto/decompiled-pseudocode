/*
 * XREFs of ?InvokeCommand@CPinnedList@@UEAAJPEAU_CMINVOKECOMMANDINFO@@@Z @ 0x1806938F0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ?GetVerbFromInvokeCommandInfo@@YAJPEAUIContextMenu@@PEAU_CMINVOKECOMMANDINFO@@PEAGK@Z @ 0x180683B14 (-GetVerbFromInvokeCommandInfo@@YAJPEAUIContextMenu@@PEAU_CMINVOKECOMMANDINFO@@PEAGK@Z.c)
 *     ?_TogglePinned@CPinnedList@@IEAAJW4PINNEDLISTMODIFYCALLER@@@Z @ 0x18069A358 (-_TogglePinned@CPinnedList@@IEAAJW4PINNEDLISTMODIFYCALLER@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPinnedList::InvokeCommand(unsigned __int64 this, struct _CMINVOKECOMMANDINFO *a2)
{
  unsigned int v4; // esi
  unsigned int i; // ebx
  char *v6; // rdi
  char *v7; // r14
  const WCHAR *v8; // rax
  WCHAR String1[128]; // [rsp+30h] [rbp-128h] BYREF

  v4 = -2147024809;
  if ( a2->lpVerb >= (LPCSTR)0x10000 )
  {
    memset_0(String1, 0, sizeof(String1));
    v7 = (char *)(this - 8);
    GetVerbFromInvokeCommandInfo((struct IContextMenu *)(this & -(__int64)(this != 8)), a2, (char *)String1, 0x80u);
    for ( i = 0; i < 2; ++i )
    {
      v6 = v7;
      v8 = (const WCHAR *)(*(__int64 (__fastcall **)(char *, _QWORD))(*(_QWORD *)v7 + 160LL))(v7, i);
      if ( CompareStringOrdinal(String1, -1, v8, -1, 1) == 2 )
        break;
    }
  }
  else
  {
    i = (unsigned int)a2->lpVerb;
    v6 = (char *)(this - 8);
  }
  if ( i == *((_DWORD *)v6 + 24) && (*(unsigned int (__fastcall **)(char *, _QWORD))(*(_QWORD *)v6 + 200LL))(v6, i) )
    return (unsigned int)CPinnedList::_TogglePinned(v6, 4LL);
  return v4;
}
