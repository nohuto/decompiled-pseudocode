/*
 * XREFs of ?DirChangeCallback@IsGameManager@@CAXPEAXE@Z @ 0x1800B5E70
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180093874 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?IsGameManager_DirChangeCallback@GameDVRTraceProvider@@SAXPEBG@Z @ 0x1800B6030 (-IsGameManager_DirChangeCallback@GameDVRTraceProvider@@SAXPEBG@Z.c)
 *     ?RegisterKGLLocationForNotifications@IsGameManager@@AEAAJPEAUKGLUpdateLocationInfo@@@Z @ 0x180140B9C (-RegisterKGLLocationForNotifications@IsGameManager@@AEAAJPEAUKGLUpdateLocationInfo@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall IsGameManager::DirChangeCallback(PVOID a1)
{
  __int64 v1; // rdi
  const WCHAR *StringRawBuffer; // rax
  const WCHAR *v4; // rax
  const WCHAR *v5; // rax
  const char *v6; // r9
  void *v7; // rdx
  const char *v8; // r9
  void *v9; // rcx
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *phNewWaitObject; // [rsp+40h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  GameDVRTraceProvider::IsGameManager_DirChangeCallback(*((const unsigned __int16 **)a1 + 1));
  if ( IsGameManager::_pStaticThis && *((_BYTE *)IsGameManager::_pStaticThis + 48) != 1 )
  {
    if ( *(_DWORD *)a1 == 1
      || (StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)a1 + 6), 0LL), PathFileExistsW(StringRawBuffer)) )
    {
      (*(void (__fastcall **)(IsGameManager *))(*(_QWORD *)IsGameManager::_pStaticThis + 48LL))(IsGameManager::_pStaticThis);
    }
    v4 = WindowsGetStringRawBuffer(*((HSTRING *)a1 + 7), 0LL);
    if ( *((_DWORD *)a1 + 7) == PathFileExistsW(v4)
      || (v5 = WindowsGetStringRawBuffer(*((HSTRING *)a1 + 8), 0LL), !PathFileExistsW(v5)) )
    {
      v10 = IsGameManager::RegisterKGLLocationForNotifications(
              IsGameManager::_pStaticThis,
              (struct KGLUpdateLocationInfo *)a1);
      if ( v10 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x863,
          (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
          (const char *)(unsigned int)v10);
    }
    else if ( v1 == *((_QWORD *)a1 + 4) )
    {
      if ( !FindNextChangeNotification(*((HANDLE *)a1 + 4)) )
        wil::details::in1diag3::_Log_GetLastError(
          retaddr,
          (void *)0x86B,
          (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
          v6);
      v7 = (void *)*((_QWORD *)a1 + 4);
      phNewWaitObject = (void *)-1LL;
      if ( RegisterWaitForSingleObject(&phNewWaitObject, v7, IsGameManager::DirChangeCallback, a1, 0xFFFFFFFF, 0xCu) )
      {
        v9 = (void *)_InterlockedExchange64((volatile __int64 *)a1 + 5, (__int64)phNewWaitObject);
        if ( v9 != (void *)-1LL )
          UnregisterWait(v9);
      }
      else
      {
        wil::details::in1diag3::_Log_GetLastError(
          retaddr,
          (void *)0x884,
          (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
          v8);
      }
    }
  }
}
