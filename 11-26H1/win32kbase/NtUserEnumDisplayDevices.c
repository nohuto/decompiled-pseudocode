/*
 * XREFs of NtUserEnumDisplayDevices @ 0x1400463F0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     EnterSharedCrit @ 0x14003D800 (EnterSharedCrit.c)
 *     DrvEnumDisplayDevices @ 0x140046490 (DrvEnumDisplayDevices.c)
 */

__int64 __fastcall NtUserEnumDisplayDevices(int a1, int a2, __int64 a3, __int64 a4)
{
  int v6; // ebx
  int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 UserSessionState; // rax
  unsigned int v13; // ebx

  v6 = a4;
  v7 = a3;
  EnterSharedCrit(0LL, 1LL, a3, a4);
  if ( *(_DWORD *)(W32GetUserGdiSessionState() + 32) )
  {
    UserSessionState = W32GetUserSessionState(v9, v8, v10);
    v13 = DrvEnumDisplayDevices(
            a1,
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(UserSessionState + 56968) + 96LL) + 80LL),
            a2,
            v7,
            v6,
            1);
  }
  else
  {
    v13 = -1073741823;
  }
  UserSessionSwitchLeaveCritWithNonPaged(v9, v8, v10, v11);
  return v13;
}
