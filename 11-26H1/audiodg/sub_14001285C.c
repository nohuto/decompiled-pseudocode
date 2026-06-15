/*
 * XREFs of sub_14001285C @ 0x14001285C
 * Callers:
 *     sub_14006E6C0 @ 0x14006E6C0 (sub_14006E6C0.c)
 * Callees:
 *     sub_140011318 @ 0x140011318 (sub_140011318.c)
 *     sub_14004639C @ 0x14004639C (sub_14004639C.c)
 */

__int64 *__fastcall sub_14001285C(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 *result; // rax
  __int64 v7; // rdx
  _QWORD *v8; // r9
  __int64 v9; // r8
  __int64 *i; // rdx
  __int64 v11; // rdx

  result = (__int64 *)qword_1400E7C58;
  if ( !qword_1400E7C58 )
  {
    v8 = sub_140011318(&qword_1400E7C50, (unsigned int)dword_1400E7C60, 0x18uLL);
    if ( !v8 )
      sub_14004639C(2147942414LL, v7);
    v9 = (unsigned int)(dword_1400E7C60 - 1);
    result = (__int64 *)qword_1400E7C58;
    for ( i = &v8[2 * v9 + 1 + v9]; (int)v9 >= 0; LODWORD(v9) = v9 - 1 )
    {
      *i = (__int64)result;
      result = i;
      qword_1400E7C58 = (__int64)i;
      i -= 3;
    }
  }
  v11 = *result;
  result[2] = *a2;
  qword_1400E7C58 = v11;
  *result = a4;
  result[1] = 0LL;
  ++qword_1400E7C48;
  return result;
}
