/*
 * XREFs of ?GetProcessId@InputDelegationInputObjectProxy@@UEAAKXZ @ 0x180135DA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall InputDelegationInputObjectProxy::GetProcessId(InputSite **this)
{
  return InputSite::GetProcessId(this[3]);
}
