/*
 * XREFs of HalpIommuIsInPermanentPassthrough @ 0x1405330DC
 * Callers:
 *     HalpIommuJoinDmaDomain @ 0x140590474 (HalpIommuJoinDmaDomain.c)
 *     HalpIommuLeaveDmaDomain @ 0x1405905CC (HalpIommuLeaveDmaDomain.c)
 * Callees:
 *     <none>
 */

bool __fastcall HalpIommuIsInPermanentPassthrough(__int64 a1, __int64 a2)
{
  return *(_DWORD *)(a2 + 8) == 1 && (*(_DWORD *)(*(_QWORD *)(a1 + 32) + 464LL) & 0x100) == 0;
}
