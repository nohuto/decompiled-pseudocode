/*
 * XREFs of ?_GetBackupShortcutToDelete@CPinList@@AEAAXPEAVCPinnedList@@PEFBU_ITEMIDLIST@@PEAG@Z @ 0x180672AA0
 * Callers:
 *     ?AppendPidl@CPinList@@QEAAHPEAVCPinnedList@@PEFBU_ITEMIDLIST@@@Z @ 0x180665FE4 (-AppendPidl@CPinList@@QEAAHPEAVCPinnedList@@PEFBU_ITEMIDLIST@@@Z.c)
 *     ?ILWriteCallback@CPinList@@CAHPEAVPINENTRY@@PEAUILWRITEINFO@1@@Z @ 0x18066C2B0 (-ILWriteCallback@CPinList@@CAHPEAVPINENTRY@@PEAUILWRITEINFO@1@@Z.c)
 *     ?ReplacePidl@CPinList@@QEAAJPEAVCPinnedList@@PEFBU_ITEMIDLIST@@1W4PinnedListModifyFlags@@PEAPEFAU3@@Z @ 0x18066EF00 (-ReplacePidl@CPinList@@QEAAJPEAVCPinnedList@@PEFBU_ITEMIDLIST@@1W4PinnedListModifyFlags@@PEAPEFA.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     ??_GCBackupLocationManager@@QEAAPEAXI@Z @ 0x180665FB4 (--_GCBackupLocationManager@@QEAAPEAXI@Z.c)
 *     ?IsBackupLink@CBackupLocationManager@@QEBAJPEFBU_ITEMIDLIST@@@Z @ 0x18066D130 (-IsBackupLink@CBackupLocationManager@@QEBAJPEFBU_ITEMIDLIST@@@Z.c)
 *     ?IsTombstoneLink@CBackupLocationManager@@QEBAJPEFBU_ITEMIDLIST@@@Z @ 0x18066D658 (-IsTombstoneLink@CBackupLocationManager@@QEBAJPEFBU_ITEMIDLIST@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CPinList::_GetBackupShortcutToDelete(
        CPinList *this,
        struct CPinnedList *a2,
        const struct _ITEMIDLIST *a3,
        unsigned __int16 *a4)
{
  LPWSTR *v6; // rbx
  WCHAR psz[264]; // [rsp+30h] [rbp-238h] BYREF

  if ( (*(int (__fastcall **)(struct CPinnedList *, WCHAR *, __int64))(*(_QWORD *)a2 + 104LL))(a2, psz, 260LL) >= 0 )
  {
    v6 = (LPWSTR *)operator new(8uLL);
    *v6 = 0LL;
    *v6 = 0LL;
    if ( SHStrDupW(psz, v6) >= 0
      && (!(unsigned int)CBackupLocationManager::IsBackupLink((const WCHAR **)v6, a3)
       || !(unsigned int)CBackupLocationManager::IsTombstoneLink((char **)v6, a3)) )
    {
      SHGetPathFromIDListW(a3, a4);
    }
    CBackupLocationManager::`scalar deleting destructor'((LPVOID *)v6);
  }
}
