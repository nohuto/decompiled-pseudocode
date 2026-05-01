/*
 * XREFs of ?SetGestureState@MultitaskingViewGestureState@@UEAAXW4GestureState@@@Z @ 0x180228670
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall MultitaskingViewGestureState::SetGestureState(__int64 a1, int a2)
{
  RTL_SRWLOCK *v2; // rsi

  v2 = (RTL_SRWLOCK *)(a1 + 48);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 48));
  *(_DWORD *)(a1 + 56) = a2;
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
