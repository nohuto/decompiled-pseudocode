/*
 * XREFs of sub_1800100A4 @ 0x1800100A4
 * Callers:
 *     sub_18000DD9C @ 0x18000DD9C (sub_18000DD9C.c)
 *     sub_18000F968 @ 0x18000F968 (sub_18000F968.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800100A4(int a1)
{
  dword_1801C84E8 = a1;
  return (unsigned int)_InterlockedIncrement(&dword_1801C8500);
}
