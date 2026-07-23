/*
 * XREFs of HalpAddAdapterToSystemList @ 0x14058EEC0
 * Callers:
 *     HalGetAdapterV3 @ 0x140785E68 (HalGetAdapterV3.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall HalpAddAdapterToSystemList(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rdx
  unsigned __int8 CurrentIrql; // bl
  _QWORD *v6; // rdx
  _QWORD *v7; // rax
  __int64 result; // rax

  v4 = *(unsigned __int8 *)(a1 + 176);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v4 )
    __writecr8(v4);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v4);
  KxAcquireSpinLock((PKSPIN_LOCK)(a1 + 168));
  v6 = *(_QWORD **)(a1 + 24);
  v7 = (_QWORD *)(a2 + 464);
  if ( *v6 != a1 + 16 )
    __fastfail(3u);
  *v7 = a1 + 16;
  *(_QWORD *)(a2 + 472) = v6;
  *v6 = v7;
  *(_QWORD *)(a1 + 24) = v7;
  KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 168));
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
