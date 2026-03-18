/*
 * XREFs of VfDriverInitSuccess @ 0x140C282F0
 * Callers:
 *     MiIssueDllInitializeCall @ 0x1408752E8 (MiIssueDllInitializeCall.c)
 *     PnpInitializeBootStartDriver @ 0x140D08CFC (PnpInitializeBootStartDriver.c)
 * Callees:
 *     ViDriverReApplyVerifierForAll @ 0x140C284F8 (ViDriverReApplyVerifierForAll.c)
 */

__int64 __fastcall VfDriverInitSuccess(int a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( ViActiveVerifierThunks != a1 )
    return ViDriverReApplyVerifierForAll();
  return result;
}
