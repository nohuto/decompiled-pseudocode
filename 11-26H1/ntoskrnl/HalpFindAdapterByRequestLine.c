/*
 * XREFs of HalpFindAdapterByRequestLine @ 0x14058F354
 * Callers:
 *     HalGetAdapterV3 @ 0x140785E68 (HalGetAdapterV3.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

_QWORD *__fastcall HalpFindAdapterByRequestLine(__int64 a1, int a2)
{
  unsigned __int64 v4; // rdx
  _QWORD *v5; // rdi
  unsigned __int8 CurrentIrql; // bl
  KSPIN_LOCK *v7; // rbp
  _QWORD **v8; // rsi
  _QWORD *i; // rax

  v4 = *(unsigned __int8 *)(a1 + 176);
  v5 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v4 )
    __writecr8(v4);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v4);
  v7 = (KSPIN_LOCK *)(a1 + 168);
  KxAcquireSpinLock((PKSPIN_LOCK)(a1 + 168));
  v8 = (_QWORD **)(a1 + 16);
  for ( i = *v8; i != v8; i = (_QWORD *)*i )
  {
    if ( *((_DWORD *)i - 20) == a2 )
    {
      v5 = i - 58;
      break;
    }
  }
  KxReleaseSpinLock(v7);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return v5;
}
