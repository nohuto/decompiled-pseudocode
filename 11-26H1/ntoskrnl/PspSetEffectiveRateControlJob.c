/*
 * XREFs of PspSetEffectiveRateControlJob @ 0x1407F92D8
 * Callers:
 *     PspEstablishJobHierarchy @ 0x1407F836C (PspEstablishJobHierarchy.c)
 *     PspSetRateControlJobPreCallback @ 0x1407F9DF0 (PspSetRateControlJobPreCallback.c)
 * Callees:
 *     <none>
 */

void __fastcall PspSetEffectiveRateControlJob(__int64 a1, __int64 a2)
{
  if ( a2 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1552), 0x2000000u);
  else
    _InterlockedAnd((volatile signed __int32 *)(a1 + 1552), 0xFDFFFFFF);
  *(_QWORD *)(a1 + 1040) = a2;
}
