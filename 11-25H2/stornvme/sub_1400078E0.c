/*
 * XREFs of sub_1400078E0 @ 0x1400078E0
 * Callers:
 *     sub_140006F00 @ 0x140006F00 (sub_140006F00.c)
 *     sub_14000DBA0 @ 0x14000DBA0 (sub_14000DBA0.c)
 *     sub_140012550 @ 0x140012550 (sub_140012550.c)
 *     sub_140014030 @ 0x140014030 (sub_140014030.c)
 *     sub_14002B6F0 @ 0x14002B6F0 (sub_14002B6F0.c)
 * Callees:
 *     sub_1400092F0 @ 0x1400092F0 (sub_1400092F0.c)
 *     sub_140009580 @ 0x140009580 (sub_140009580.c)
 */

__int64 __fastcall sub_1400078E0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // r9
  bool v6; // zf

  sub_140009580(a1, a2);
  *(_BYTE *)(*(_QWORD *)(a2 + 96) + 4225LL) |= 1u;
  *(_BYTE *)(*(_QWORD *)(a2 + 96) + 4225LL) &= ~2u;
  *(_WORD *)(*(_QWORD *)(a2 + 96) + 4212LL) = 0;
  *(_BYTE *)(*(_QWORD *)(a2 + 96) + 4096LL) = 12;
  *(_QWORD *)(*(_QWORD *)(a2 + 96) + 4192LL) = sub_140012550;
  result = sub_1400092F0(a1, a2 + 8);
  if ( *(_BYTE *)(a2 + 11) < 2u )
  {
    if ( (*(_BYTE *)(a1 + 21) & 8) == 0 )
      return result;
    v5 = 0LL;
    return StorPortExtendedFunction(85LL, a1, 0LL, v5);
  }
  v6 = (*(_BYTE *)(a1 + 21) & 2) == 0;
  ++*(_DWORD *)(a1 + 4212);
  if ( !v6 )
  {
    v5 = 1LL;
    return StorPortExtendedFunction(85LL, a1, 0LL, v5);
  }
  return result;
}
