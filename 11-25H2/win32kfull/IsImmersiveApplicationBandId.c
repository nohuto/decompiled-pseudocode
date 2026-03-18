/*
 * XREFs of IsImmersiveApplicationBandId @ 0x140029E44
 * Callers:
 *     ?WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEBUtagWND@@KW4ShellWindowManagementStates@@W4AdditionalWindowCheck@1@@Z @ 0x140029D80 (-WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEBUtagWND@@KW4ShellWindowManagementStates@@.c)
 *     xxxRealDefWindowProc @ 0x140259FFC (xxxRealDefWindowProc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsImmersiveApplicationBandId(int a1)
{
  unsigned int v1; // edx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx

  v1 = 0;
  v2 = a1 - 8;
  if ( !v2 )
    return 1;
  v3 = v2 - 1;
  if ( !v3 )
    return 1;
  v4 = v3 - 1;
  if ( !v4 )
    return 1;
  v5 = v4 - 1;
  if ( !v5 || v5 == 2 )
    return 1;
  return v1;
}
