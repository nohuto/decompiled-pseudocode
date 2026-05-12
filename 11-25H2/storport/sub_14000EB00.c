/*
 * XREFs of sub_14000EB00 @ 0x14000EB00
 * Callers:
 *     sub_14000E060 @ 0x14000E060 (sub_14000E060.c)
 *     sub_14000E940 @ 0x14000E940 (sub_14000E940.c)
 *     sub_14000EF0C @ 0x14000EF0C (sub_14000EF0C.c)
 *     sub_14006D4DC @ 0x14006D4DC (sub_14006D4DC.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_14000EB00(__int64 a1)
{
  return *(_DWORD *)(a1 + 28) || ((*(__int64 *)(a1 + 88) >> 2) & 0x3FFFFFFF) >= *(_DWORD *)(a1 + 4);
}
