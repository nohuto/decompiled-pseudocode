/*
 * XREFs of ?ValidateHandleSecure_New@@YAHPEAXK@Z @ 0x1401CE67C
 * Callers:
 *     ValidateHandleSecure @ 0x1401A87C0 (ValidateHandleSecure.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z @ 0x1401226B8 (-IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z.c)
 *     IsHandleEntrySecure @ 0x1401CE84C (IsHandleEntrySecure.c)
 */

__int64 __fastcall ValidateHandleSecure_New(__int64 a1, __int64 a2)
{
  char v2; // si
  struct tagTHREADINFO *v4; // r14
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  int v8; // edx
  int v9; // ecx
  __int64 v10; // r8
  __int64 UserSessionState; // rbx
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  __int64 v15; // rcx
  __int64 v16; // rdi
  int v17; // edx
  int v18; // r8d
  __int64 v19; // rdx
  int v20; // r8d
  unsigned int v21; // ebx
  __int16 v22; // ax

  v2 = a2;
  v4 = PtiCurrent(a1, a2);
  v10 = *(_QWORD *)(W32GetUserSessionState(v6, v5, v7) + 19904);
  if ( (unsigned __int64)(unsigned __int16)a1 >= *(_QWORD *)(v10 + 8) )
    return 0LL;
  UserSessionState = W32GetUserSessionState(v9, v8, v10);
  v15 = *(_DWORD *)(W32GetUserSessionState(v13, v12, v14) + 19928) * (unsigned int)(unsigned __int16)a1;
  v16 = v15 + *(_QWORD *)(UserSessionState + 19920);
  W32GetUserSessionState(v15, v17, v18);
  v21 = 0;
  v22 = WORD1(a1) & 0x7FFF;
  if ( (WORD1(a1) & 0x7FFF) != *(_WORD *)(v16 + 26)
    && v22 != 0x7FFF
    && (v22 || !PsGetCurrentProcessWow64Process(0x7FFFLL, v19)) )
  {
    return 0LL;
  }
  if ( !*(_BYTE *)(v16 + 24) || (v2 & 1) != 0 && !(unsigned int)IsHandleEntrySecure(a1, v16) || (v2 & 2) == 0 )
    return 0LL;
  if ( !*((_BYTE *)v4 + 1708) || (unsigned int)IsHandleEntryAccessibleForIL((struct _HANDLEENTRY *)v16, v19, v20) )
    return 1;
  return v21;
}
