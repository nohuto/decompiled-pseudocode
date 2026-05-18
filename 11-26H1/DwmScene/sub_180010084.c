/*
 * XREFs of sub_180010084 @ 0x180010084
 * Callers:
 *     sub_18000F968 @ 0x18000F968 (sub_18000F968.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180010084(int a1)
{
  dword_1801C8510 = a1;
  return (unsigned int)_InterlockedIncrement(&dword_1801C84E0);
}
