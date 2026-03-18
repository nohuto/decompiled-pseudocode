/*
 * XREFs of PspSetPropertyHelper @ 0x140460FE8
 * Callers:
 *     PsSetThreadProperty @ 0x140460F20 (PsSetThreadProperty.c)
 *     PsSetJobProperty @ 0x140614FD0 (PsSetJobProperty.c)
 * Callees:
 *     PspInsertProperty @ 0x14046100C (PspInsertProperty.c)
 *     PspRemoveProperty @ 0x1404610F0 (PspRemoveProperty.c)
 */

__int64 __fastcall PspSetPropertyHelper(__int64 a1, __int64 a2, __int64 a3)
{
  if ( a3 )
    return PspInsertProperty();
  else
    return PspRemoveProperty();
}
