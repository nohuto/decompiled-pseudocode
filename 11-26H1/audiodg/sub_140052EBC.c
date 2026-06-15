/*
 * XREFs of sub_140052EBC @ 0x140052EBC
 * Callers:
 *     sub_140052AF0 @ 0x140052AF0 (sub_140052AF0.c)
 * Callees:
 *     sub_140006470 @ 0x140006470 (sub_140006470.c)
 *     sub_140019980 @ 0x140019980 (sub_140019980.c)
 */

_DWORD *__fastcall sub_140052EBC(__int64 a1)
{
  _DWORD *result; // rax
  __int64 v3; // r9
  __int64 *v4; // rcx
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF
  __int64 v6; // [rsp+50h] [rbp+18h] BYREF

  result = (_DWORD *)sub_140006470(a1);
  if ( *result > 4u )
  {
    v4 = *(__int64 **)a1;
    v5 = **(_QWORD **)(a1 + 8);
    v6 = *v4;
    return (_DWORD *)sub_140019980((__int64)result, byte_1400D1829, v5, v3, (__int64)&v6, (__int64)&v5);
  }
  return result;
}
