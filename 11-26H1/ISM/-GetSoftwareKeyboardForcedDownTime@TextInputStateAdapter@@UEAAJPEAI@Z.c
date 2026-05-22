/*
 * XREFs of ?GetSoftwareKeyboardForcedDownTime@TextInputStateAdapter@@UEAAJPEAI@Z @ 0x1801D27E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TextInputStateAdapter::GetSoftwareKeyboardForcedDownTime(
        TextInputStateAdapter *this,
        unsigned int *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 4) + 176LL))(
           *((_QWORD *)this + 4),
           a2);
}
