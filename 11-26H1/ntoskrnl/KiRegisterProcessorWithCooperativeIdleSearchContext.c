/*
 * XREFs of KiRegisterProcessorWithCooperativeIdleSearchContext @ 0x1405FDC38
 * Callers:
 *     KiAssignCooperativeIdleSearchContexts @ 0x1405ECC18 (KiAssignCooperativeIdleSearchContexts.c)
 *     KiReconfigureSubNodeSchedulingInformation @ 0x1405EE0F8 (KiReconfigureSubNodeSchedulingInformation.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KiRegisterProcessorWithCooperativeIdleSearchContext(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // di
  __int64 v7; // rcx
  unsigned __int8 v8; // al
  unsigned __int8 v9; // al
  __int64 result; // rax

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
  *(_QWORD *)(a1 + 8LL * *(unsigned __int8 *)(a2 + 209) + 536) = a3;
  v7 = *(_QWORD *)(a1 + 1048);
  if ( !v7 )
    *(_WORD *)(a1 + 1062) = *(unsigned __int8 *)(a2 + 208);
  *(_QWORD *)(a1 + 1048) = *(_QWORD *)(a2 + 200) | v7;
  v8 = *(_BYTE *)(a2 + 209);
  if ( v8 < *(_BYTE *)(a1 + 1060) )
    *(_BYTE *)(a1 + 1060) = v8;
  v9 = *(_BYTE *)(a2 + 209);
  if ( v9 > *(_BYTE *)(a1 + 1061) )
    *(_BYTE *)(a1 + 1061) = v9;
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
