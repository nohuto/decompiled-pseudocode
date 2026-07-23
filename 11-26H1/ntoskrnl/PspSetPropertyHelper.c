/*
 * XREFs of PspSetPropertyHelper @ 0x1404593E8
 * Callers:
 *     PsSetThreadProperty @ 0x140459320 (PsSetThreadProperty.c)
 *     PsSetJobProperty @ 0x140617E90 (PsSetJobProperty.c)
 * Callees:
 *     PspInsertProperty @ 0x14045940C (PspInsertProperty.c)
 *     PspRemoveProperty @ 0x1404594F0 (PspRemoveProperty.c)
 */

__int64 __fastcall PspSetPropertyHelper(__int64 a1, __int64 a2, __int64 a3)
{
  if ( a3 )
    return PspInsertProperty();
  else
    return PspRemoveProperty();
}
