/*
 * XREFs of sub_14002C400 @ 0x14002C400
 * Callers:
 *     sub_14002C3A8 @ 0x14002C3A8 (sub_14002C3A8.c)
 * Callees:
 *     sub_14002C420 @ 0x14002C420 (sub_14002C420.c)
 */

__int64 sub_14002C400()
{
  __int64 v0; // rcx
  __int64 result; // rax

  sub_14002C420();
  result = v0;
  *(_DWORD *)(v0 + 28) = 1;
  return result;
}
