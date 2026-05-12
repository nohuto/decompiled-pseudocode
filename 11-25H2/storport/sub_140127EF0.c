/*
 * XREFs of sub_140127EF0 @ 0x140127EF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140126F38 @ 0x140126F38 (sub_140126F38.c)
 *     sub_14012A294 @ 0x14012A294 (sub_14012A294.c)
 *     sub_14012B5F8 @ 0x14012B5F8 (sub_14012B5F8.c)
 */

BOOLEAN __fastcall sub_140127EF0(__int64 a1)
{
  BOOLEAN result; // al

  result = sub_140126F38(a1);
  if ( result )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 400) + 184LL) & 0x40000000) != 0 )
      sub_14012B5F8(*(PVOID *)(a1 + 1136));
    _interlockedbittestandreset((volatile signed __int32 *)(*(_QWORD *)(a1 + 160) + 212LL), 0);
    return sub_14012A294(a1);
  }
  return result;
}
