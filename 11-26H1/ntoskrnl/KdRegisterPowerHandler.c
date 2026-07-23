/*
 * XREFs of KdRegisterPowerHandler @ 0x1405E6150
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall KdRegisterPowerHandler(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 Pool2; // rax
  _QWORD *v7; // rbx
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // di
  _QWORD *v10; // rax

  Pool2 = ExAllocatePool2(0x40uLL);
  v7 = (_QWORD *)Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  *(_QWORD *)(Pool2 + 16) = a1;
  *(_QWORD *)(Pool2 + 24) = a2;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 15 )
    __writecr8(0xFuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
  KxAcquireSpinLock(&KdpPowerSpinLock);
  v10 = (_QWORD *)qword_140F5D828;
  if ( *(__int64 **)qword_140F5D828 != &KdpPowerListHead )
    __fastfail(3u);
  *v7 = &KdpPowerListHead;
  v7[1] = v10;
  *v10 = v7;
  qword_140F5D828 = (__int64)v7;
  KeReleaseSpinLock(&KdpPowerSpinLock, CurrentIrql);
  result = 0LL;
  *a3 = v7;
  return result;
}
