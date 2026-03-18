/*
 * XREFs of _SetWindowStationUser @ 0x1401F9BE8
 * Callers:
 *     NtUserSetWindowStationUser @ 0x1401F9AC0 (NtUserSetWindowStationUser.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     memmove @ 0x140342600 (memmove.c)
 */

__int64 __fastcall SetWindowStationUser(__int64 a1, _QWORD *a2, const void *a3, unsigned int a4)
{
  size_t v4; // r14
  HANDLE v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  void *v10; // rcx
  __int64 v11; // rax
  int v13; // ecx

  v4 = a4;
  v7 = *(HANDLE *)(W32GetUserSessionState(a1, a2) + 63544);
  if ( PsGetCurrentProcessId() == v7 )
  {
    if ( *(_QWORD *)(a1 + 56) == W32GetUserSessionState(v9, v8) + 68464 )
      CitUserChange(*a2);
    v10 = *(void **)(a1 + 192);
    if ( v10 )
      Win32FreePool(v10);
    if ( !a3 )
    {
      *(_QWORD *)(a1 + 192) = 0LL;
      goto LABEL_9;
    }
    v11 = Win32AllocPoolWithQuotaZInit(v4, 1702064981LL);
    *(_QWORD *)(a1 + 192) = v11;
    if ( v11 )
    {
      memmove(*(void **)(a1 + 192), a3, v4);
LABEL_9:
      *(_QWORD *)(a1 + 184) = *a2;
      return 1LL;
    }
    v13 = 14;
  }
  else
  {
    v13 = 5;
  }
  UserSetLastError(v13);
  return 0LL;
}
