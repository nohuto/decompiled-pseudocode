/*
 * XREFs of ?IsApplicationInteractive@ApiPolicyChecker@CallerIdentity@@YAJPEBGPEAH@Z @ 0x18067A0C0
 * Callers:
 *     ?DoesAppMeetLaunchRequirement@ApiPolicyChecker@CallerIdentity@@YA_NW4LaunchRequirement@12@PEBGPEAUHWND__@@@Z @ 0x1801EC348 (-DoesAppMeetLaunchRequirement@ApiPolicyChecker@CallerIdentity@@YA_NW4LaunchRequirement@12@PEBGPE.c)
 * Callees:
 *     ?IsAppBeingDebugged@ApiPolicyChecker@CallerIdentity@@YAJPEBGPEAH@Z @ 0x1801EC480 (-IsAppBeingDebugged@ApiPolicyChecker@CallerIdentity@@YAJPEBGPEAH@Z.c)
 *     CallerIdentity::ApiPolicyChecker::_ForEachApplicationByAppID__lambda_66c33cbe5bd20407278e6b687b296685___ @ 0x180679C20 (CallerIdentity--ApiPolicyChecker--_ForEachApplicationByAppID__lambda_66c33cbe5bd20407278e6b687b2.c)
 */

__int64 __fastcall CallerIdentity::ApiPolicyChecker::IsApplicationInteractive(
        struct IUnknown *this,
        unsigned __int16 *a2,
        int *a3)
{
  int v5; // edi
  int *v6; // r8
  unsigned __int16 *v8; // [rsp+38h] [rbp+10h] BYREF

  *(_DWORD *)a2 = 0;
  v8 = a2;
  v5 = CallerIdentity::ApiPolicyChecker::_ForEachApplicationByAppID__lambda_66c33cbe5bd20407278e6b687b296685___(
         this,
         &v8);
  if ( v5 >= 0 && !*(_DWORD *)a2 )
  {
    LODWORD(v8) = 0;
    if ( (int)CallerIdentity::ApiPolicyChecker::IsAppBeingDebugged(
                (CallerIdentity::ApiPolicyChecker *)this,
                (unsigned __int16 *)&v8,
                v6) >= 0 )
      *(_DWORD *)a2 = (_DWORD)v8;
  }
  return (unsigned int)v5;
}
