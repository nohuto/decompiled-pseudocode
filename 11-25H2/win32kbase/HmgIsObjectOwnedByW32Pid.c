/*
 * XREFs of HmgIsObjectOwnedByW32Pid @ 0x140075780
 * Callers:
 *     HmgCheckDCForPrivateReferences @ 0x140178FFC (HmgCheckDCForPrivateReferences.c)
 * Callees:
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x140075800 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 */

__int64 __fastcall HmgIsObjectOwnedByW32Pid(struct OBJECT *a1, int a2)
{
  unsigned int v4; // ebx
  __int64 SessionState; // rax
  struct _ENTRY *EntryFromObject; // rax

  v4 = 0;
  SessionState = W32GetSessionState(a1);
  if ( a1 )
  {
    if ( *(_QWORD *)a1 )
    {
      EntryFromObject = GdiHandleManager::GetEntryFromObject(
                          *(GdiHandleManager **)(*(_QWORD *)(SessionState + 88) + 5672LL),
                          a1);
      if ( EntryFromObject )
      {
        if ( *((_BYTE *)EntryFromObject + 14) )
          return ((*((_DWORD *)EntryFromObject + 2) ^ a2 & 0xFFFFFFFD) & 0xFFFFFFFE) == 0;
      }
    }
  }
  return v4;
}
