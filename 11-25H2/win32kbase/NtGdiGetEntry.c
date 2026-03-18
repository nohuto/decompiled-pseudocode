/*
 * XREFs of NtGdiGetEntry @ 0x14006F450
 * Callers:
 *     <none>
 * Callees:
 *     ?GetEntryFromIndex@GdiHandleManager@@QEAAPEAU_ENTRY@@I@Z @ 0x14006FBAC (-GetEntryFromIndex@GdiHandleManager@@QEAAPEAU_ENTRY@@I@Z.c)
 */

__int64 __fastcall NtGdiGetEntry(__int64 a1, unsigned __int64 a2)
{
  unsigned int v3; // ebx
  __int64 SessionState; // rax
  struct _ENTRY *EntryFromIndex; // rdx

  v3 = a1;
  SessionState = W32GetSessionState(a1);
  EntryFromIndex = GdiHandleManager::GetEntryFromIndex(
                     *(GdiHandleManager **)(*(_QWORD *)(SessionState + 88) + 5672LL),
                     v3);
  if ( !EntryFromIndex )
    return 3221225473LL;
  if ( a2 + 24 > MmUserProbeAddress || a2 + 24 <= a2 )
    *(_BYTE *)MmUserProbeAddress = 0;
  *(_OWORD *)a2 = *(_OWORD *)EntryFromIndex;
  *(_QWORD *)(a2 + 16) = *((_QWORD *)EntryFromIndex + 2);
  return 0LL;
}
