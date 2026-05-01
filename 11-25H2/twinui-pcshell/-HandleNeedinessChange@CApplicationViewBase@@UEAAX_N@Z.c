/*
 * XREFs of ?HandleNeedinessChange@CApplicationViewBase@@UEAAX_N@Z @ 0x180230E60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CApplicationViewBase::HandleNeedinessChange(RTL_SRWLOCK *this, char a2)
{
  RTL_SRWLOCK *v2; // rsi

  v2 = this + 4;
  AcquireSRWLockExclusive(this + 4);
  LOBYTE(this[14].Ptr) = a2;
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
