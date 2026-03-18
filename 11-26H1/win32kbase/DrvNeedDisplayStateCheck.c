/*
 * XREFs of DrvNeedDisplayStateCheck @ 0x140186E8C
 * Callers:
 *     NtUserFunctionalizeDisplayConfig @ 0x1401E3DB0 (NtUserFunctionalizeDisplayConfig.c)
 *     NtUserSetDisplayConfig @ 0x1401E82B0 (NtUserSetDisplayConfig.c)
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
