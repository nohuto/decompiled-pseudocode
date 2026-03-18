/*
 * XREFs of UserDeleteBaseWindowHandle @ 0x1401EA590
 * Callers:
 *     NtMITMinuserWindowDestroyed @ 0x1401E1140 (NtMITMinuserWindowDestroyed.c)
 * Callees:
 *     _HMPheFromObject @ 0x1400488F0 (_HMPheFromObject.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     HMValidateHandleNoSecure @ 0x14006E810 (HMValidateHandleNoSecure.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     HMDestroyUnlockedObject @ 0x1401DF3D0 (HMDestroyUnlockedObject.c)
 */

__int64 __fastcall UserDeleteBaseWindowHandle(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdx
  struct tagTHREADINFO *v5; // rsi
  _DWORD *v6; // rax
  int v7; // edx
  int v8; // r8d
  _DWORD *v9; // rbx
  __int64 v10; // rbp
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  __int64 UserSessionState; // rax
  struct tagTHREADINFO *v15; // r14
  __int64 v16; // r15
  __int64 CurrentProcessWin32Process; // rax
  int v18; // r8d
  __int64 v19; // rdx
  int v20; // ecx

  v3 = 0LL;
  v5 = PtiCurrent(a1, a2);
  if ( (*((_DWORD *)v5 + 340) & 0x1000000) == 0 )
    goto LABEL_11;
  LOBYTE(v4) = 23;
  v6 = (_DWORD *)HMValidateHandleNoSecure(a1, v4);
  v9 = v6;
  if ( !v6 )
  {
    v20 = 6;
    goto LABEL_12;
  }
  v10 = HMPheFromObject(v6, v7, v8);
  UserSessionState = W32GetUserSessionState(v12, v11, v13);
  v15 = *(struct tagTHREADINFO **)(*(_QWORD *)(UserSessionState + 19864)
                                 + 40LL * (unsigned int)((v10 - *(_QWORD *)(UserSessionState + 19920)) >> 5)
                                 + 8);
  v16 = *((_QWORD *)v15 + 57);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(5LL * (unsigned int)((v10
                                                                                   - *(_QWORD *)(UserSessionState + 19920)) >> 5));
  v19 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v19 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  if ( v19 != v16 || v5 != v15 )
  {
    v20 = 5;
LABEL_12:
    UserSetLastError(v20);
    return v3;
  }
  if ( (*(_BYTE *)(v10 + 25) & 1) != 0 )
  {
LABEL_11:
    v20 = 4317;
    goto LABEL_12;
  }
  v3 = *((_QWORD *)v9 + 7);
  *((_QWORD *)v9 + 7) = 0LL;
  HMDestroyUnlockedObject((struct _HANDLEENTRY *)v10, v19, v18);
  return v3;
}
