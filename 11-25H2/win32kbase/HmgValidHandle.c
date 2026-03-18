/*
 * XREFs of HmgValidHandle @ 0x14006ECD0
 * Callers:
 *     GreValidateServerHandle @ 0x14006EC20 (GreValidateServerHandle.c)
 *     UserValidateCopyRgn @ 0x14006EC40 (UserValidateCopyRgn.c)
 * Callees:
 *     ?GetEntryFromIndex@GdiHandleManager@@QEAAPEAU_ENTRY@@I@Z @ 0x14006FBAC (-GetEntryFromIndex@GdiHandleManager@@QEAAPEAU_ENTRY@@I@Z.c)
 */

__int64 __fastcall HmgValidHandle(__int64 a1, char a2)
{
  unsigned int v3; // ebx
  __int64 SessionState; // rax
  struct _ENTRY *EntryFromIndex; // rax
  unsigned int v6; // ecx

  v3 = a1;
  SessionState = W32GetSessionState(a1);
  EntryFromIndex = GdiHandleManager::GetEntryFromIndex(
                     *(GdiHandleManager **)(*(_QWORD *)(SessionState + 88) + 5672LL),
                     (unsigned __int16)v3 | (v3 >> 8) & 0xFF0000);
  v6 = 0;
  if ( !EntryFromIndex || *((_BYTE *)EntryFromIndex + 14) != a2 )
    return 0LL;
  LOBYTE(v6) = *((_WORD *)EntryFromIndex + 6) == HIWORD(v3);
  return v6;
}
