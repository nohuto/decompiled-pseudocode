/*
 * XREFs of GetKeyboardInputThreadId @ 0x14021B640
 * Callers:
 *     NtUserGetKeyboardInputThreadId @ 0x1401E49A0 (NtUserGetKeyboardInputThreadId.c)
 * Callees:
 *     ?GetTID@tagTHREADINFO@@QEBAKXZ @ 0x140137220 (-GetTID@tagTHREADINFO@@QEBAKXZ.c)
 */

__int64 __fastcall GetKeyboardInputThreadId(int a1, int a2, int a3)
{
  unsigned int v3; // ebx
  int v4; // edx
  __int64 v5; // rcx
  int v6; // r8d
  unsigned int v7; // eax
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  __int64 UserSessionState; // rax

  v3 = 0;
  v5 = *(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 19632);
  if ( (*(_DWORD *)(v5 + 8) & 1) != 0 )
  {
    v7 = *(_DWORD *)(v5 + 4);
    if ( v7 )
      return v7;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v5, v4, v6) + 18944) )
  {
    UserSessionState = W32GetUserSessionState(v9, v8, v10);
    return (unsigned int)tagTHREADINFO::GetTID(*(PETHREAD **)(UserSessionState + 18944));
  }
  return v3;
}
