/*
 * XREFs of ?IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z @ 0x1401226B8
 * Callers:
 *     ValidateHandleSecure @ 0x1401A87C0 (ValidateHandleSecure.c)
 *     ?ValidateHandleSecure_New@@YAHPEAXK@Z @ 0x1401CE67C (-ValidateHandleSecure_New@@YAHPEAXK@Z.c)
 * Callees:
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     EtwTraceUIPIHandleValidationError @ 0x14014C6B4 (EtwTraceUIPIHandleValidationError.c)
 *     Feature_ID51538523__private_IsEnabledPreCheck @ 0x140162568 (Feature_ID51538523__private_IsEnabledPreCheck.c)
 *     ?UIPIFailure@Win32k@InputTraceLogging@@SAXAEBUtagUIPI_INFO@@0_N@Z @ 0x1401A8534 (-UIPIFailure@Win32k@InputTraceLogging@@SAXAEBUtagUIPI_INFO@@0_N@Z.c)
 *     Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline @ 0x1401CAC9C (Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall IsHandleEntryAccessibleForIL(struct _HANDLEENTRY *a1, int a2, int a3)
{
  __int64 UserSessionState; // rax
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rcx
  _QWORD *CurrentProcessWin32Process; // rax
  _DWORD *v9; // rbp
  __int16 v10; // ax
  __int64 v11; // rdi
  __int64 v12; // rdi
  _DWORD *v13; // r14
  _DWORD *v14; // rsi
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  unsigned int v18; // ebx
  int v19; // edx
  int v20; // ecx
  int v21; // r8d
  __int64 v22; // rax

  UserSessionState = W32GetUserSessionState((_DWORD)a1, a2, a3);
  v5 = *(_QWORD *)(UserSessionState + 19864);
  v6 = 5LL * (unsigned int)(((__int64)a1 - *(_QWORD *)(UserSessionState + 19920)) >> 5);
  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v7);
  v9 = CurrentProcessWin32Process;
  if ( !CurrentProcessWin32Process || !*CurrentProcessWin32Process )
    return 1LL;
  v10 = *((_WORD *)&unk_14025552C + 12 * *((unsigned __int8 *)a1 + 24));
  if ( (v10 & 2) != 0 )
  {
    v11 = *(_QWORD *)(v5 + 8 * v6 + 8);
  }
  else
  {
    if ( (v10 & 1) == 0 )
      return 1LL;
    v12 = *(_QWORD *)(v5 + 8 * v6 + 8);
    if ( !v12 )
      return 1LL;
    v11 = *(_QWORD *)(v12 + 456);
  }
  if ( v11 )
  {
    if ( *(_QWORD *)v11 != *(_QWORD *)(W32GetUserGdiSessionState(3LL * *((unsigned __int8 *)a1 + 24)) + 40) )
    {
      v13 = (_DWORD *)(v11 + 864);
      v14 = v9 + 216;
      if ( (unsigned int)Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline()
        || UIPrivilegeIsolation::fEnforceUIPI )
      {
        if ( (Feature_ID51538523__private_IsEnabledPreCheck(), (v15 = *(_DWORD *)(v11 + 872)) != 0) && v9[218] != v15
          || *v14 <= *v13
          && (*v14 != *v13 || (v16 = *(_DWORD *)(v11 + 868), v17 = v9[217], v17 != v16) && v17 != -1 && v16 != -1) )
        {
          InputTraceLogging::Win32k::UIPIFailure(
            (const struct tagUIPI_INFO *)(v9 + 216),
            (const struct tagUIPI_INFO *)(v11 + 864),
            0);
          v18 = *((unsigned __int8 *)a1 + 24);
          v22 = W32GetUserSessionState(v20, v19, v21);
          EtwTraceUIPIHandleValidationError(
            v9,
            v11,
            **(_QWORD **)(*(_QWORD *)(v22 + 19864) + 40LL
                                                   * (unsigned int)(((__int64)a1 - *(_QWORD *)(v22 + 19920)) >> 5)),
            v18);
          UserSetLastError(5);
          return 0LL;
        }
      }
    }
  }
  return 1LL;
}
