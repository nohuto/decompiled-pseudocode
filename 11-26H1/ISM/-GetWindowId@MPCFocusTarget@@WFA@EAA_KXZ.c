/*
 * XREFs of ?GetWindowId@MPCFocusTarget@@WFA@EAA_KXZ @ 0x180101370
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MPCFocusTarget::GetWindowId(__int64 a1)
{
  return InputDelegationInputObjectProxy::GetSourceWindowId((InputDelegationInputObjectProxy *)(a1 - 80));
}
