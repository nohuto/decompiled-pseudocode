/*
 * XREFs of ?OnAttachedToInputSite@InputDelegationInputObjectProxy@@UEAAXPEAVInputSite@@@Z @ 0x18007CF70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall InputDelegationInputObjectProxy::OnAttachedToInputSite(
        InputDelegationInputObjectProxy *this,
        struct InputSite *a2)
{
  *((_QWORD *)this + 4) = a2;
}
