/*
 * XREFs of NtMITGetCursorUpdateHandle @ 0x14019C080
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     EnterSharedCrit @ 0x14003D800 (EnterSharedCrit.c)
 *     IsInputThread @ 0x140067910 (IsInputThread.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     IsInputProcessingActivated @ 0x1400D10D0 (IsInputProcessingActivated.c)
 *     GetCursorUpdateHandle @ 0x14021B574 (GetCursorUpdateHandle.c)
 */

__int64 __fastcall NtMITGetCursorUpdateHandle(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  __int64 CursorUpdateHandle; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9

  EnterSharedCrit(0LL, 1LL, a3, a4);
  if ( !IsInputThread(v5, v4, v6) || IsInputProcessingActivated(v8, v7, v9) )
  {
    CursorUpdateHandle = -1LL;
    UserSetLastError(5);
  }
  else
  {
    CursorUpdateHandle = GetCursorUpdateHandle();
  }
  UserSessionSwitchLeaveCritWithNonPaged(v12, v11, v13, v14);
  return CursorUpdateHandle;
}
