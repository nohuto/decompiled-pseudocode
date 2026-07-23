/*
 * XREFs of ExInterlockedAddLargeInteger @ 0x1403E2CA0
 * Callers:
 *     <none>
 * Callees:
 *     ExpAcquireSpinLockDisabled @ 0x1403E16F0 (ExpAcquireSpinLockDisabled.c)
 *     ExpReleaseSpinLockDisabled @ 0x1403E2CF8 (ExpReleaseSpinLockDisabled.c)
 */

LARGE_INTEGER __stdcall ExInterlockedAddLargeInteger(PLARGE_INTEGER Addend, LARGE_INTEGER Increment, PKSPIN_LOCK Lock)
{
  bool v6; // al
  LARGE_INTEGER v7; // rbx
  LONGLONG v8; // rdx

  v6 = ExpAcquireSpinLockDisabled((volatile signed __int32 *)Lock);
  v7 = *Addend;
  v8 = Addend->QuadPart + Increment.QuadPart;
  Addend->QuadPart = v8;
  LOBYTE(v8) = v6;
  ExpReleaseSpinLockDisabled(Lock, v8);
  return v7;
}
