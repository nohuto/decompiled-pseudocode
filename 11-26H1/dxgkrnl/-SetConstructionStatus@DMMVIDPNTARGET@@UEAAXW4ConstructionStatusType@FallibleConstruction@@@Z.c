/*
 * XREFs of ?SetConstructionStatus@DMMVIDPNTARGET@@UEAAXW4ConstructionStatusType@FallibleConstruction@@@Z @ 0x14006DD20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DMMVIDPNTARGET::SetConstructionStatus(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 24) = a2;
}
