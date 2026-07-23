/*
 * XREFs of IoFreeMapRegistersV2 @ 0x14035B860
 * Callers:
 *     IoFreeAdapterChannelV2 @ 0x14035CB20 (IoFreeAdapterChannelV2.c)
 *     IoFreeMapRegistersThunk @ 0x14057C140 (IoFreeMapRegistersThunk.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     HalpDmaFreeMapRegisters @ 0x14035B5C0 (HalpDmaFreeMapRegisters.c)
 *     HalpDmaProcessMapRegisterQueueV2 @ 0x14035B920 (HalpDmaProcessMapRegisterQueueV2.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall IoFreeMapRegistersV2(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r15
  __int64 v6; // rsi
  char v7; // di
  unsigned __int8 CurrentIrql; // bl
  __int64 v9; // rdx
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 160);
  v6 = a1;
  if ( v3 && a2 )
  {
    v7 = 0;
    CurrentIrql = 0;
    v9 = 2LL;
    if ( KeGetCurrentIrql() < 2u )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(a1) = CurrentIrql;
        KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
      }
      v7 = 1;
    }
    if ( a3 )
      HalpDmaFreeMapRegisters(v6, a2, a3);
    LOBYTE(v9) = *(_BYTE *)(v6 + 442);
    result = HalpDmaProcessMapRegisterQueueV2(v3, v9);
    if ( v7 )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      result = CurrentIrql;
      __writecr8(CurrentIrql);
    }
  }
  return result;
}
