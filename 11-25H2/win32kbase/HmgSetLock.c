/*
 * XREFs of HmgSetLock @ 0x14006ED3C
 * Callers:
 *     ?GrepCloseCurrentProcess@@YAHXZ @ 0x1400845B0 (-GrepCloseCurrentProcess@@YAHXZ.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1400856CC (-vCleanupDCs@@YAXK@Z.c)
 * Callees:
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x14006FA70 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?GetEntryFromIndex@GdiHandleManager@@QEAAPEAU_ENTRY@@I@Z @ 0x14006FBAC (-GetEntryFromIndex@GdiHandleManager@@QEAAPEAU_ENTRY@@I@Z.c)
 */

__int64 __fastcall HmgSetLock(__int64 a1)
{
  __int16 v1; // edi^2
  unsigned int v2; // esi
  GdiHandleManager *v3; // rbp
  struct _ENTRY *EntryFromIndex; // rax
  unsigned int v5; // ebx

  v1 = WORD1(a1);
  v2 = (unsigned __int16)a1 | ((unsigned int)a1 >> 8) & 0xFF0000;
  v3 = *(GdiHandleManager **)(*(_QWORD *)(W32GetSessionState(a1) + 88) + 5672LL);
  EntryFromIndex = GdiHandleManager::GetEntryFromIndex(v3, v2);
  v5 = (unsigned int)EntryFromIndex;
  if ( EntryFromIndex && *((_WORD *)EntryFromIndex + 6) == v1 )
    *((_WORD *)GdiHandleManager::GetEntryObject(v3, v2) + 6) = 0;
  else
    return 0;
  return v5;
}
