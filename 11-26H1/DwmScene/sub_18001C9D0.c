/*
 * XREFs of sub_18001C9D0 @ 0x18001C9D0
 * Callers:
 *     sub_18001D430 @ 0x18001D430 (sub_18001D430.c)
 *     sub_18001D9D0 @ 0x18001D9D0 (sub_18001D9D0.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 */

__int64 sub_18001C9D0()
{
  __int64 result; // rax

  result = sub_180011790(0x68uLL);
  *(_QWORD *)result = result;
  *(_QWORD *)(result + 8) = result;
  *(_QWORD *)(result + 16) = result;
  *(_WORD *)(result + 24) = 257;
  return result;
}
