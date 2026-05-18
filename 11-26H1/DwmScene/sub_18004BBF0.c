/*
 * XREFs of sub_18004BBF0 @ 0x18004BBF0
 * Callers:
 *     sub_18004CEA4 @ 0x18004CEA4 (sub_18004CEA4.c)
 *     sub_18005BBE8 @ 0x18005BBE8 (sub_18005BBE8.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 */

__int64 sub_18004BBF0()
{
  __int64 result; // rax

  result = sub_180011790(0x40uLL);
  *(_QWORD *)result = result;
  *(_QWORD *)(result + 8) = result;
  *(_QWORD *)(result + 16) = result;
  *(_WORD *)(result + 24) = 257;
  return result;
}
