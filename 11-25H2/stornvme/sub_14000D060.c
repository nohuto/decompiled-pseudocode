/*
 * XREFs of sub_14000D060 @ 0x14000D060
 * Callers:
 *     sub_140012550 @ 0x140012550 (sub_140012550.c)
 *     sub_1400130E0 @ 0x1400130E0 (sub_1400130E0.c)
 *     sub_14001ED94 @ 0x14001ED94 (sub_14001ED94.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_14000D060(__int64 a1)
{
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 176) + 28LL) & 2) == 0 )
    return 0;
  StorPortExtendedFunction(98LL, a1, 0LL, 7LL);
  return 1;
}
