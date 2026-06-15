/*
 * XREFs of sub_1400805E0 @ 0x1400805E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140016858 @ 0x140016858 (sub_140016858.c)
 */

__int64 __fastcall sub_1400805E0(__int64 a1, void **a2)
{
  void *v3; // rdx
  __int64 result; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *a2;
  if ( !v3 || v3 == (void *)-1LL )
  {
    sub_14000C2A8(
      (int)retaddr,
      48,
      (int)"avcore\\audiocore\\engine\\core\\crossprocessengineobjects\\cpbasememory.cpp",
      -2147024890);
    return 2147942406LL;
  }
  else
  {
    sub_140016858((void **)(a1 + 16), v3);
    result = 0LL;
    *a2 = 0LL;
  }
  return result;
}
