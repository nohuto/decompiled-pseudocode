/*
 * XREFs of sub_14006770C @ 0x14006770C
 * Callers:
 *     sub_1400B277B @ 0x1400B277B (sub_1400B277B.c)
 * Callees:
 *     sub_140014E60 @ 0x140014E60 (sub_140014E60.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14006770C(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  _BYTE v4[16]; // [rsp+30h] [rbp-28h] BYREF

  if ( *(_BYTE *)(a1 + 1) )
  {
    *(_BYTE *)(a1 + 1) = 0;
    if ( (byte_1400E8400 & 0x20) != 0 )
      return sub_140014E60(a1, (unsigned int)&unk_1400C7260, a3, 1, (__int64)v4);
  }
  return result;
}
