/*
 * XREFs of sub_14004E998 @ 0x14004E998
 * Callers:
 *     sub_14004DF60 @ 0x14004DF60 (sub_14004DF60.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14004E998(int a1)
{
  dword_1400E8408 = a1;
  return (unsigned int)_InterlockedIncrement(&dword_1400E8484);
}
