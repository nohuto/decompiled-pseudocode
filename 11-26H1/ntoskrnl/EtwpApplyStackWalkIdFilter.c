/*
 * XREFs of EtwpApplyStackWalkIdFilter @ 0x14044187C
 * Callers:
 *     EtwpEventWriteFull @ 0x14021344C (EtwpEventWriteFull.c)
 *     EtwpWriteUserEvent @ 0x140B85DAC (EtwpWriteUserEvent.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     EtwpPerfectHashFunctionSearch @ 0x140441960 (EtwpPerfectHashFunctionSearch.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

bool __fastcall EtwpApplyStackWalkIdFilter(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  __int64 v4; // rbp
  unsigned __int16 v6; // si
  bool v7; // di
  unsigned __int8 CurrentIrql; // bl
  unsigned __int8 v10; // al
  _BYTE *v11; // rdx
  unsigned __int8 v12; // al
  _BYTE *v13; // rdx

  v4 = a3;
  v6 = a1;
  v7 = 1;
  if ( a4 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
    }
    if ( *(_QWORD *)(104 * v4 + *(_QWORD *)(a2 + 640) + 48) )
    {
      v12 = EtwpPerfectHashFunctionSearch(v6);
      v7 = *v13 == v12;
    }
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  else if ( *(_QWORD *)(104LL * a3 + *(_QWORD *)(a2 + 640) + 48) )
  {
    v10 = EtwpPerfectHashFunctionSearch((unsigned __int16)a1);
    return *v11 == v10;
  }
  return v7;
}
