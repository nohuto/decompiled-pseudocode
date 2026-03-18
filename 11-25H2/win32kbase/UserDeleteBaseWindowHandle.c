/*
 * XREFs of UserDeleteBaseWindowHandle @ 0x1401C1A00
 * Callers:
 *     NtMITMinuserWindowDestroyed @ 0x1401BAD40 (NtMITMinuserWindowDestroyed.c)
 * Callees:
 *     _HMPheFromObject @ 0x14003F320 (_HMPheFromObject.c)
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     HMValidateHandleNoSecure @ 0x140067260 (HMValidateHandleNoSecure.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     HMDestroyUnlockedObject @ 0x1401A5770 (HMDestroyUnlockedObject.c)
 */

__int64 __fastcall UserDeleteBaseWindowHandle(int a1)
{
  __int64 v2; // rdi
  struct tagTHREADINFO *v3; // rsi
  int *v4; // rax
  __int64 v5; // rdx
  int *v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 UserSessionState; // rax
  struct tagTHREADINFO *v11; // r14
  __int64 v12; // r15
  __int64 CurrentProcessWin32Process; // rax
  __int64 v14; // rdx
  int v15; // ecx

  v2 = 0LL;
  v3 = PtiCurrent();
  if ( (*((_DWORD *)v3 + 340) & 0x1000000) == 0 )
    goto LABEL_11;
  v4 = (int *)HMValidateHandleNoSecure(a1, 23);
  v6 = v4;
  if ( !v4 )
  {
    v15 = 6;
    goto LABEL_12;
  }
  v7 = HMPheFromObject(v4, v5);
  UserSessionState = W32GetUserSessionState(v9, v8);
  v11 = *(struct tagTHREADINFO **)(*(_QWORD *)(UserSessionState + 19832)
                                 + 40LL * (unsigned int)((v7 - *(_QWORD *)(UserSessionState + 19888)) >> 5)
                                 + 8);
  v12 = *((_QWORD *)v11 + 58);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(5LL * (unsigned int)((v7
                                                                                   - *(_QWORD *)(UserSessionState + 19888)) >> 5));
  v14 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v14 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  if ( v14 != v12 || v3 != v11 )
  {
    v15 = 5;
LABEL_12:
    UserSetLastError(v15);
    return v2;
  }
  if ( (*(_BYTE *)(v7 + 25) & 1) != 0 )
  {
LABEL_11:
    v15 = 4317;
    goto LABEL_12;
  }
  v2 = *((_QWORD *)v6 + 7);
  *((_QWORD *)v6 + 7) = 0LL;
  HMDestroyUnlockedObject((struct _HANDLEENTRY *)v7, v14);
  return v2;
}
