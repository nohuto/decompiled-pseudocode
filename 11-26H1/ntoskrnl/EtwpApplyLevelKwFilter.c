/*
 * XREFs of EtwpApplyLevelKwFilter @ 0x14047E280
 * Callers:
 *     EtwpEventWriteFull @ 0x14021344C (EtwpEventWriteFull.c)
 *     EtwpWriteUserEvent @ 0x140B85DAC (EtwpWriteUserEvent.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     EtwpApplyLevelKwFilterInner @ 0x14047E36C (EtwpApplyLevelKwFilterInner.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

char __fastcall EtwpApplyLevelKwFilter(__int64 a1, unsigned int a2, unsigned __int8 a3, __int64 a4, char a5)
{
  __int64 v7; // rbp
  __int64 v8; // r14
  unsigned __int8 CurrentIrql; // di
  __int64 v10; // rdx
  unsigned __int8 v11; // al
  char v12; // bl

  v7 = a2;
  v8 = a1;
  if ( !a5 )
    return EtwpApplyLevelKwFilterInner(a1, a2);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
  }
  v10 = *(_QWORD *)(104 * v7 + *(_QWORD *)(v8 + 640) + 64);
  if ( v10 )
  {
    v11 = *(_BYTE *)(v10 + 16);
    if ( (a3 <= v11 || !v11)
      && (!a4 || (a4 & *(_QWORD *)v10) != 0 && (a4 & *(_QWORD *)(v10 + 8)) == *(_QWORD *)(v10 + 8)) )
    {
      v12 = *(_BYTE *)(v10 + 17);
    }
    else
    {
      v12 = *(_BYTE *)(v10 + 17) == 0;
    }
  }
  else
  {
    v12 = 1;
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return v12;
}
