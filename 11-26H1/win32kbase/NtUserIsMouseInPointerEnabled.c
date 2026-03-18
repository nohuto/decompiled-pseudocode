/*
 * XREFs of NtUserIsMouseInPointerEnabled @ 0x140190990
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     EnterSharedCrit @ 0x14003D800 (EnterSharedCrit.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall NtUserIsMouseInPointerEnabled(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9

  EnterSharedCrit(0LL, 1LL, a3, a4);
  v6 = (*(_DWORD *)(*((_QWORD *)PtiCurrent(v5, v4) + 57) + 808LL) >> 2) & 1;
  UserSessionSwitchLeaveCritWithNonPaged(v8, v7, v9, v10);
  return v6;
}
