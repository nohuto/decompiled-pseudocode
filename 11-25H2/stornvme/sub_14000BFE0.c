/*
 * XREFs of sub_14000BFE0 @ 0x14000BFE0
 * Callers:
 *     sub_14000DBA0 @ 0x14000DBA0 (sub_14000DBA0.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_14000BFE0(__int64 a1)
{
  return (*(_DWORD *)(a1 + 1600) & 2) != 0
      && *(_BYTE *)(a1 + 1607) != *(_BYTE *)(a1 + 1608)
      && (unsigned int)StorPortExtendedFunction(66LL, a1, 0LL, 0LL) == 0;
}
