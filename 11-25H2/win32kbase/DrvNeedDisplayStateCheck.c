/*
 * XREFs of DrvNeedDisplayStateCheck @ 0x14014FD98
 * Callers:
 *     NtUserFunctionalizeDisplayConfig @ 0x14016F770 (NtUserFunctionalizeDisplayConfig.c)
 *     NtUserSetDisplayConfig @ 0x1401744E0 (NtUserSetDisplayConfig.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DrvNeedDisplayStateCheck(_DWORD *a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 && (*a1 != -1 || a1[1] != -1 || a1[2] != -1) )
    return 1LL;
  return result;
}
