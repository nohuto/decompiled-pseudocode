/*
 * XREFs of HalpIommuIsInPermanentPassthrough @ 0x140530BDC
 * Callers:
 *     HalpIommuJoinDmaDomain @ 0x14058DCF4 (HalpIommuJoinDmaDomain.c)
 *     HalpIommuLeaveDmaDomain @ 0x14058DE4C (HalpIommuLeaveDmaDomain.c)
 * Callees:
 *     <none>
 */

bool __fastcall HalpIommuIsInPermanentPassthrough(__int64 a1, __int64 a2)
{
  return *(_DWORD *)(a2 + 8) == 1 && (*(_DWORD *)(*(_QWORD *)(a1 + 32) + 464LL) & 0x100) == 0;
}
