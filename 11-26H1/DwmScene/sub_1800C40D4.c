/*
 * XREFs of sub_1800C40D4 @ 0x1800C40D4
 * Callers:
 *     sub_1800C2F2C @ 0x1800C2F2C (sub_1800C2F2C.c)
 *     sub_1800C37E0 @ 0x1800C37E0 (sub_1800C37E0.c)
 * Callees:
 *     sub_1800C48B0 @ 0x1800C48B0 (sub_1800C48B0.c)
 */

__int64 sub_1800C40D4()
{
  __int64 result; // rax

  result = sub_1800C48B0();
  if ( (_DWORD)result == 45 )
    return 44LL;
  if ( (_DWORD)result == 40 )
    return 39LL;
  return result;
}
