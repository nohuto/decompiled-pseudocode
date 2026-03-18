/*
 * XREFs of ?vReleaseCurrentpMapProcForSurfaces@@YAXXZ @ 0x14006E4E4
 * Callers:
 *     ?GrepCloseCurrentProcess@@YAHXZ @ 0x1400845B0 (-GrepCloseCurrentProcess@@YAHXZ.c)
 * Callees:
 *     ?GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z @ 0x14006F370 (-GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x14006FA70 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 */

void __fastcall vReleaseCurrentpMapProcForSurfaces(__int64 a1)
{
  __int64 SessionState; // rax
  unsigned int v2; // edx
  __int64 v3; // rsi
  struct OBJECT *EntryObject; // rax
  __int64 v5; // rcx
  struct OBJECT *v6; // rbx
  __int64 CurrentProcessWin32Process; // rax
  GdiHandleManager *v8; // rbx
  unsigned int NextEntryIndex; // eax
  unsigned int v10; // edi
  struct _ENTRY *v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = 0LL;
  SessionState = W32GetSessionState(a1);
  v2 = 0;
  v3 = *(_QWORD *)(SessionState + 88);
  while ( 1 )
  {
    v8 = *(GdiHandleManager **)(v3 + 5672);
    NextEntryIndex = GdiHandleManager::GetNextEntryIndex(v8, v2, &v11);
    v10 = NextEntryIndex;
    if ( !NextEntryIndex )
      break;
    if ( *((_BYTE *)v11 + 14) == 5 )
    {
      EntryObject = GdiHandleManager::GetEntryObject(v8, NextEntryIndex);
      v6 = EntryObject;
      if ( EntryObject )
      {
        if ( *((_QWORD *)EntryObject + 31) )
        {
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
          if ( CurrentProcessWin32Process )
            CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
          if ( *((_QWORD *)v6 + 33) == CurrentProcessWin32Process )
          {
            *((_QWORD *)v6 + 33) = 0LL;
            *((_QWORD *)v6 + 32) = 0LL;
          }
        }
      }
    }
    v2 = v10;
  }
}
