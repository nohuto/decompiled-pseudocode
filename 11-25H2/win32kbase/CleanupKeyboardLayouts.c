/*
 * XREFs of CleanupKeyboardLayouts @ 0x1402130B4
 * Callers:
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x14016A0DC (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 * Callees:
 *     HMAssignmentUnlock @ 0x1400379C0 (HMAssignmentUnlock.c)
 *     _lambda_003a05ce5104f89dcc953024da4d9dc6_::operator() @ 0x14014CA0C (_lambda_003a05ce5104f89dcc953024da4d9dc6_--operator().c)
 *     Feature_PreserveActiveHklInDesktopSwitching__private_IsEnabledDeviceUsageNoInline @ 0x140213188 (Feature_PreserveActiveHklInDesktopSwitching__private_IsEnabledDeviceUsageNoInline.c)
 */

int *__fastcall CleanupKeyboardLayouts(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 UserSessionState; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  int *result; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx

  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 14240) )
  {
    UserSessionState = W32GetUserSessionState(v3, v2);
    HMAssignmentUnlock((__int64 *)(UserSessionState + 14240));
  }
  if ( (unsigned int)Feature_PreserveActiveHklInDesktopSwitching__private_IsEnabledDeviceUsageNoInline()
    && *(_QWORD *)(W32GetUserSessionState(v6, v5) + 14248) )
  {
    v7 = W32GetUserSessionState(v6, v5);
    HMAssignmentUnlock((__int64 *)(v7 + 14248));
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v6, v5) + 14712) )
  {
    v10 = W32GetUserSessionState(v9, v8);
    lambda_003a05ce5104f89dcc953024da4d9dc6_::operator()(v11, *(_QWORD *)(v10 + 14712));
  }
  result = (int *)W32GetUserSessionState(v9, v8);
  if ( *((_QWORD *)result + 1784) )
  {
    v15 = W32GetUserSessionState(v14, v13);
    return lambda_003a05ce5104f89dcc953024da4d9dc6_::operator()(v16, *(_QWORD *)(v15 + 14272));
  }
  return result;
}
