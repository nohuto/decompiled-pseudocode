/*
 * XREFs of sub_18004F094 @ 0x18004F094
 * Callers:
 *     sub_18004F21C @ 0x18004F21C (sub_18004F21C.c)
 * Callees:
 *     memcpy @ 0x18000CED0 (memcpy.c)
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 */

__int64 __fastcall sub_18004F094(void **a1)
{
  void *v1; // rbx
  __int64 result; // rax

  v1 = *a1;
  memcpy(a1, *a1, (size_t)a1[2] + 1);
  result = sub_18000E26C(v1, (unsigned __int64)a1[3] + 1);
  a1[3] = (void *)15;
  return result;
}
