/*
 * XREFs of VfDriverInitSuccess @ 0x140B7A4B4
 * Callers:
 *     MiIssueDllInitializeCall @ 0x1407D77CC (MiIssueDllInitializeCall.c)
 *     PnpInitializeBootStartDriver @ 0x140C5421C (PnpInitializeBootStartDriver.c)
 * Callees:
 *     ViDriverReApplyVerifierForAll @ 0x140B7A904 (ViDriverReApplyVerifierForAll.c)
 */

__int64 __fastcall VfDriverInitSuccess(int a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( ViActiveVerifierThunks != a1 )
    return ViDriverReApplyVerifierForAll();
  return result;
}
