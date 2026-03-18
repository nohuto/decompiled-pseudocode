/*
 * XREFs of CleanupKeyboardLayouts @ 0x1401B57F0
 * Callers:
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x14019A350 (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 * Callees:
 *     HMAssignmentUnlock @ 0x14009B8C0 (HMAssignmentUnlock.c)
 *     _lambda_003a05ce5104f89dcc953024da4d9dc6_::operator() @ 0x140191374 (_lambda_003a05ce5104f89dcc953024da4d9dc6_--operator().c)
 *     Feature_PreserveActiveHklInDesktopSwitching__private_IsEnabledDeviceUsageNoInline @ 0x1401B58C4 (Feature_PreserveActiveHklInDesktopSwitching__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall CleanupKeyboardLayouts(int a1, int a2, int a3)
{
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  __int64 UserSessionState; // rax
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  __int64 v10; // rax
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  __int64 v14; // rax
  __int64 v15; // rcx
  int v16; // r8d
  __int64 result; // rax
  int v18; // edx
  int v19; // ecx
  int v20; // r8d
  __int64 v21; // rax
  __int64 v22; // rcx
  int v23; // r8d

  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 14232) )
  {
    UserSessionState = W32GetUserSessionState(v4, v3, v5);
    HMAssignmentUnlock((__int64 *)(UserSessionState + 14232));
  }
  if ( (unsigned int)Feature_PreserveActiveHklInDesktopSwitching__private_IsEnabledDeviceUsageNoInline()
    && *(_QWORD *)(W32GetUserSessionState(v8, v7, v9) + 14240) )
  {
    v10 = W32GetUserSessionState(v8, v7, v9);
    HMAssignmentUnlock((__int64 *)(v10 + 14240));
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v8, v7, v9) + 14704) )
  {
    v14 = W32GetUserSessionState(v12, v11, v13);
    lambda_003a05ce5104f89dcc953024da4d9dc6_::operator()(v15, *(_QWORD *)(v14 + 14704), v16);
  }
  result = W32GetUserSessionState(v12, v11, v13);
  if ( *(_QWORD *)(result + 14264) )
  {
    v21 = W32GetUserSessionState(v19, v18, v20);
    return lambda_003a05ce5104f89dcc953024da4d9dc6_::operator()(v22, *(_QWORD *)(v21 + 14264), v23);
  }
  return result;
}
