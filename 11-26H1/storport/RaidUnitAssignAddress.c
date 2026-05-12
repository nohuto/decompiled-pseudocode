/*
 * XREFs of RaidUnitAssignAddress @ 0x14003F778
 * Callers:
 *     StorProcessNVMeNewUnit @ 0x140191C34 (StorProcessNVMeNewUnit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidUnitAssignAddress(__int64 a1, int a2)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 24);
  *(_DWORD *)(a1 + 104) = a2;
  *(_WORD *)(a1 + 96) = 1;
  *(_DWORD *)(a1 + 100) = 4;
  *(_WORD *)(a1 + 98) = *(_WORD *)(result + 56);
  return result;
}
