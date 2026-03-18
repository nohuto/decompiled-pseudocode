/*
 * XREFs of ?InitializeUserTypeIsolation@@YA_NXZ @ 0x140191774
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1402F04E0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?Initialize@UserTypeIsolationAllocators@@QEAA_NXZ @ 0x1401B8744 (-Initialize@UserTypeIsolationAllocators@@QEAA_NXZ.c)
 */

bool InitializeUserTypeIsolation(void)
{
  __int64 v0; // rbx
  int v1; // edx
  int v2; // ecx
  int v3; // r8d
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  __int64 UserSessionState; // rax

  v0 = Win32AllocPoolZInitImpl(256LL, 0xA0uLL, 0x6F736955u);
  *(_QWORD *)(W32GetUserSessionState(v2, v1, v3) + 19832) = v0;
  if ( !*(_QWORD *)(W32GetUserSessionState(v5, v4, v6) + 19832) )
    return 0;
  UserSessionState = W32GetUserSessionState(v8, v7, v9);
  return UserTypeIsolationAllocators::Initialize(*(UserTypeIsolationAllocators **)(UserSessionState + 19832));
}
