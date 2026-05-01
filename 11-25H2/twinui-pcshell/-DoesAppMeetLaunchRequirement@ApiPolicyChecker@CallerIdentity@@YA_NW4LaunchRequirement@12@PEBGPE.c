/*
 * XREFs of ?DoesAppMeetLaunchRequirement@ApiPolicyChecker@CallerIdentity@@YA_NW4LaunchRequirement@12@PEBGPEAUHWND__@@@Z @ 0x1801F622C
 * Callers:
 *     ?ShouldAppBeAllowedToPerformPrivilegedOperationBasedOnForeground@ApiPolicyChecker@CallerIdentity@@YAJPEBG@Z @ 0x180654178 (-ShouldAppBeAllowedToPerformPrivilegedOperationBasedOnForeground@ApiPolicyChecker@CallerIdentity.c)
 * Callees:
 *     ?GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x1800B6C10 (-GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 *     ?IsAppBeingDebugged@ApiPolicyChecker@CallerIdentity@@YAJPEBGPEAH@Z @ 0x1801F6358 (-IsAppBeingDebugged@ApiPolicyChecker@CallerIdentity@@YAJPEBGPEAH@Z.c)
 *     CallerIdentity::ApiPolicyChecker::_ForEachApplicationViewByAppID__lambda_aed1de138aa46e36192d6ffea72541fd___ @ 0x180653E78 (CallerIdentity--ApiPolicyChecker--_ForEachApplicationViewByAppID__lambda_aed1de138aa46e36192d6ff.c)
 *     ?IsApplicationInteractive@ApiPolicyChecker@CallerIdentity@@YAJPEBGPEAH@Z @ 0x180654110 (-IsApplicationInteractive@ApiPolicyChecker@CallerIdentity@@YAJPEBGPEAH@Z.c)
 */

bool __fastcall CallerIdentity::ApiPolicyChecker::DoesAppMeetLaunchRequirement(
        int a1,
        CallerIdentity::ApiPolicyChecker *a2,
        int *a3)
{
  bool v3; // bl
  HWND Window; // rsi
  int v6; // ecx
  int v7; // ecx
  LPCWCH lpString2[4]; // [rsp+30h] [rbp-20h] BYREF
  int v10; // [rsp+70h] [rbp+20h] BYREF
  int *v11; // [rsp+88h] [rbp+38h] BYREF

  v3 = 0;
  Window = (HWND)a3;
  if ( !a1 )
    goto LABEL_15;
  v6 = a1 - 1;
  if ( !v6 )
    goto LABEL_8;
  v7 = v6 - 1;
  if ( !v7 )
  {
LABEL_7:
    v10 = 0;
    CallerIdentity::ApiPolicyChecker::IsApplicationInteractive(a2, (const unsigned __int16 *)&v10, a3);
    if ( v10 )
      return 1;
LABEL_8:
    while ( Window )
    {
      lpString2[0] = 0LL;
      lpString2[1] = (LPCWCH)-1LL;
      lpString2[2] = (LPCWCH)-1LL;
      if ( (int)CallerIdentity::GetImmersiveAppIdFromWindow(
                  (CallerIdentity *)Window,
                  (HWND)lpString2,
                  (unsigned __int16 **)a3) >= 0 )
        v3 = CompareStringOrdinal((LPCWCH)a2, -1, lpString2[0], -1, 1) == 2;
      Window = GetWindow(Window, 4u);
      if ( lpString2[0] )
        CoTaskMemFree((LPVOID)lpString2[0]);
      if ( v3 )
        return v3;
    }
LABEL_15:
    v10 = 0;
    CallerIdentity::ApiPolicyChecker::IsAppBeingDebugged(a2, (const unsigned __int16 *)&v10, a3);
    return v10 != 0;
  }
  if ( v7 == 1 )
  {
    v10 = 0;
    v11 = &v10;
    CallerIdentity::ApiPolicyChecker::_ForEachApplicationViewByAppID__lambda_aed1de138aa46e36192d6ffea72541fd___(
      a2,
      &v11);
    if ( v10 )
      return 1;
    goto LABEL_7;
  }
  return v3;
}
