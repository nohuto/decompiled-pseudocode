/*
 * XREFs of ?GetLaunchRequirementForActiveBand@ApiPolicyChecker@CallerIdentity@@YA?AW4LaunchRequirement@12@W4ZBID@@@Z @ 0x180654010
 * Callers:
 *     ?ShouldAppBeAllowedToPerformPrivilegedOperationBasedOnForeground@ApiPolicyChecker@CallerIdentity@@YAJPEBG@Z @ 0x180654178 (-ShouldAppBeAllowedToPerformPrivilegedOperationBasedOnForeground@ApiPolicyChecker@CallerIdentity.c)
 * Callees:
 *     IsGetThreadDesktopPresent @ 0x1802DB624 (IsGetThreadDesktopPresent.c)
 */

__int64 __fastcall CallerIdentity::ApiPolicyChecker::GetLaunchRequirementForActiveBand(int a1)
{
  unsigned int v1; // ebx
  int v2; // ecx
  int v3; // ecx
  DWORD CurrentThreadId; // eax
  HDESK ThreadDesktop; // rax
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  unsigned int pvInfo; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  if ( a1 > 8 )
  {
    v6 = a1 - 12;
    if ( !v6 )
      return 2;
    v7 = v6 - 1;
    if ( !v7 )
      return 2;
    v8 = v7 - 1;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( !v9 )
        return 2;
      v10 = v9 - 1;
      if ( v10 )
      {
        if ( (unsigned int)(v10 - 1) <= 1 )
          return 2;
      }
    }
  }
  else
  {
    if ( a1 == 8 )
      return 1;
    if ( a1 )
    {
      v2 = a1 - 1;
      if ( v2 )
      {
        v3 = v2 - 1;
        if ( v3 && (unsigned int)(v3 - 1) >= 2 )
          return v1;
        return 2;
      }
      return 1;
    }
    pvInfo = 0;
    if ( IsGetThreadDesktopPresent() && IsGetThreadDesktopPresent() )
    {
      CurrentThreadId = GetCurrentThreadId();
      ThreadDesktop = GetThreadDesktop(CurrentThreadId);
      if ( !ThreadDesktop || GetUserObjectInformationW(ThreadDesktop, 6, &pvInfo, 4u, 0LL) )
        v1 = pvInfo;
    }
    else
    {
      v1 = 1;
    }
    return v1 != 0 ? 2 : 0;
  }
  return v1;
}
