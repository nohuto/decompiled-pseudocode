/*
 * XREFs of ?GetInputDelegationStateInfo@TextInputStateAdapter@@UEAAJPEAUDelegationStateInfo@@@Z @ 0x1801D2600
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TextInputStateAdapter::GetInputDelegationStateInfo(
        TextInputStateAdapter *this,
        struct DelegationStateInfo *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct DelegationStateInfo *))(**((_QWORD **)this + 4) + 304LL))(
           *((_QWORD *)this + 4),
           a2);
}
