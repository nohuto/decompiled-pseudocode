/*
 * XREFs of KeEnumerateProcessorDpcs @ 0x1405F3A30
 * Callers:
 *     DbgkpLkmdSnapGlobals @ 0x1405B65E4 (DbgkpLkmdSnapGlobals.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     DbgkpLkmdSnapDataEx @ 0x1405B65AC (DbgkpLkmdSnapDataEx.c)
 */

__int64 __fastcall KeEnumerateProcessorDpcs(int a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  unsigned __int8 CurrentIrql; // si
  KSPIN_LOCK *v6; // rbx
  __int64 v7; // rbp
  _QWORD *i; // rdi
  __int64 result; // rax

  v4 = KiProcessorBlock[a1];
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 15 )
    __writecr8(0xFuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
  v6 = (KSPIN_LOCK *)(v4 + 14416);
  v7 = 2LL;
  do
  {
    KxAcquireSpinLock(v6);
    for ( i = (_QWORD *)*(v6 - 2); i; i = (_QWORD *)*i )
      DbgkpLkmdSnapDataEx(a3, (__int64)(i - 1));
    KxReleaseSpinLock(v6);
    v6 += 6;
    --v7;
  }
  while ( v7 );
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
