/*
 * XREFs of sub_14003EB40 @ 0x14003EB40
 * Callers:
 *     sub_14004C30C @ 0x14004C30C (sub_14004C30C.c)
 *     sub_14004DF60 @ 0x14004DF60 (sub_14004DF60.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14003EB40(int a1)
{
  dword_1400E8488 = a1;
  return (unsigned int)_InterlockedIncrement(&dword_1400E84A0);
}
