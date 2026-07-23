/*
 * XREFs of MiVadBytes @ 0x1404C31C0
 * Callers:
 *     MiAllocateChildVads @ 0x140A077C4 (MiAllocateChildVads.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiVadBytes(__int64 a1)
{
  return (-(__int64)((*(_DWORD *)(a1 + 48) & 0x80000) != 0) & 0xFFFFFFFFFFFFFFB8uLL) + 144;
}
