/*
 * XREFs of ?RegisterKGLLocationForNotifications@IsGameManager@@AEAAJPEAUKGLUpdateLocationInfo@@@Z @ 0x180127A30
 * Callers:
 *     ?UpdateGameDVRKGLCopy@IsGameManager@@AEAAXKPEA_N@Z @ 0x180126170 (-UpdateGameDVRKGLCopy@IsGameManager@@AEAAXKPEA_N@Z.c)
 *     ?DirChangeCallback@IsGameManager@@CAXPEAXE@Z @ 0x1801276C0 (-DirChangeCallback@IsGameManager@@CAXPEAXE@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1800C1DF4 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x180127C68 (-Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ?Initialize@String@Internal@Windows@@QEAAJPEBGI@Z @ 0x1801B2264 (-Initialize@String@Internal@Windows@@QEAAJPEBGI@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802C6380 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

int __fastcall IsGameManager::RegisterKGLLocationForNotifications(
        IsGameManager *this,
        struct KGLUpdateLocationInfo *a2)
{
  void *v3; // rcx
  void *v4; // rcx
  const WCHAR *StringRawBuffer; // rax
  HSTRING *v6; // r14
  HANDLE v7; // rsi
  int v8; // ebx
  const char *v9; // r9
  __int64 v11; // rdx
  HSTRING v12; // rcx
  const unsigned __int16 *v13; // rax
  __int64 v14; // r8
  bool v15; // zf
  const WCHAR *v16; // rax
  wil::details *v17; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  IsGameManager *length; // [rsp+50h] [rbp+8h] BYREF
  void *phNewWaitObject; // [rsp+58h] [rbp+10h] BYREF

  length = this;
  v3 = (void *)_InterlockedExchange64((volatile __int64 *)a2 + 5, -1LL);
  phNewWaitObject = v3;
  if ( v3 != (void *)-1LL )
    UnregisterWait(v3);
  v4 = (void *)_InterlockedExchange64((volatile __int64 *)a2 + 4, -1LL);
  if ( v4 != (void *)-1LL )
    FindCloseChangeNotification(v4);
  *((_DWORD *)a2 + 7) = 0;
  StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)a2 + 7), 0LL);
  v6 = (HSTRING *)((char *)a2 + 64);
  v7 = FindFirstChangeNotificationW(StringRawBuffer, 0, 0x117u);
  v8 = Windows::Internal::String::Initialize((struct KGLUpdateLocationInfo *)((char *)a2 + 64), (HSTRING *)a2 + 7);
  if ( v8 < 0 )
  {
    v11 = 2214LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
      (const char *)(unsigned int)v8);
    return v8;
  }
  if ( v7 != (HANDLE)-1LL )
    goto LABEL_7;
  v12 = *v6;
  LODWORD(length) = 0;
  v13 = WindowsGetStringRawBuffer(v12, (UINT32 *)&length);
  if ( !(_DWORD)length || (v14 = (unsigned int)((_DWORD)length - 1), (_DWORD)length == 1) )
  {
LABEL_19:
    v8 = -2147418113;
    v11 = 2230LL;
    goto LABEL_14;
  }
  while ( v13[v14] != 92 )
  {
    v15 = (_DWORD)v14 == 1;
    v14 = (unsigned int)(v14 - 1);
    if ( v15 )
      goto LABEL_19;
  }
  v8 = Windows::Internal::String::Initialize((struct KGLUpdateLocationInfo *)((char *)a2 + 64), v13, v14);
  if ( v8 < 0 )
  {
    v11 = 2232LL;
    goto LABEL_14;
  }
  *((_DWORD *)a2 + 7) = 1;
  v16 = WindowsGetStringRawBuffer(*v6, 0LL);
  v7 = FindFirstChangeNotificationW(v16, 0, 0x117u);
  if ( v7 == (HANDLE)-1LL )
    return wil::details::GetLastErrorFailHr(v17);
LABEL_7:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)a2 + 4, (signed __int64)v7, -1LL) != -1 )
    FindCloseChangeNotification(v7);
  if ( !RegisterWaitForSingleObject(
          &phNewWaitObject,
          *((HANDLE *)a2 + 4),
          (WAITORTIMERCALLBACK)IsGameManager::DirChangeCallback,
          a2,
          0xFFFFFFFF,
          8u) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x8CD,
             (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
             v9);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)a2 + 5, (signed __int64)phNewWaitObject, -1LL) != -1 )
    UnregisterWait(phNewWaitObject);
  return 0;
}
