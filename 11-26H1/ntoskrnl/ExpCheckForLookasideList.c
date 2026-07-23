/*
 * XREFs of ExpCheckForLookasideList @ 0x14034737C
 * Callers:
 *     ExpCheckForLookaside @ 0x140346FF8 (ExpCheckForLookaside.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     DbgPrintEx @ 0x1403992B0 (DbgPrintEx.c)
 */

void __fastcall ExpCheckForLookasideList(_QWORD *a1, __int64 a2, _QWORD **a3, KSPIN_LOCK *a4)
{
  unsigned __int64 v5; // r12
  int v8; // r15d
  KIRQL v9; // al
  _QWORD *i; // rbx

  v5 = (unsigned __int64)a1 + a2;
  v8 = a2;
  v9 = KeAcquireSpinLockRaiseToDpc(a4);
  for ( i = *a3; i != a3; i = (_QWORD *)*i )
  {
    if ( i - 8 >= a1 && (unsigned __int64)(i - 8) < v5 )
    {
      DbgPrintEx(
        0,
        0,
        "EX: ExFreePool( %p, %Ix ) contains a lookaside structure that has not been deleted first\n",
        a1,
        v8);
      __debugbreak();
    }
  }
  KeReleaseSpinLock(a4, v9);
}
