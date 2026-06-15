/*
 * XREFs of sub_14004E4C8 @ 0x14004E4C8
 * Callers:
 *     sub_14004C278 @ 0x14004C278 (sub_14004C278.c)
 *     sub_14007CF28 @ 0x14007CF28 (sub_14007CF28.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14004E4C8(__int64 a1)
{
  int v1; // ebx
  __int64 result; // rax

  v1 = a1;
  if ( (int)a1 >= 0 )
    return 0LL;
  if ( (_DWORD)a1 == -1073741801 )
    return 2147942414LL;
  if ( !qword_1400E83F0 )
    return v1 | 0x10000000u;
  result = sub_1400B6010(a1);
  if ( !(_DWORD)result || (_DWORD)result == 317 )
    return v1 | 0x10000000u;
  if ( (int)result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
