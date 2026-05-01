/*
 * XREFs of ?GetCount@AgileCallbackArray@AgileRegistrationList@@UEAAJPEAI@Z @ 0x18018A320
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AgileRegistrationList::AgileCallbackArray::GetCount(
        AgileRegistrationList::AgileCallbackArray *this,
        unsigned int *a2)
{
  *a2 = (__int64)(*((_QWORD *)this + 7) - *((_QWORD *)this + 6)) >> 3;
  return 0LL;
}
