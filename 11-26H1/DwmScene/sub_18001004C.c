/*
 * XREFs of sub_18001004C @ 0x18001004C
 * Callers:
 *     sub_18000F968 @ 0x18000F968 (sub_18000F968.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18001004C(int a1)
{
  dword_1801C8464 = a1;
  return (unsigned int)_InterlockedIncrement(&dword_1801C84E4);
}
