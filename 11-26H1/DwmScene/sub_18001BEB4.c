/*
 * XREFs of sub_18001BEB4 @ 0x18001BEB4
 * Callers:
 *     sub_180018CF0 @ 0x180018CF0 (sub_180018CF0.c)
 * Callees:
 *     sub_18000B9A0 @ 0x18000B9A0 (sub_18000B9A0.c)
 *     sub_18000BA60 @ 0x18000BA60 (sub_18000BA60.c)
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 */

__int64 __fastcall sub_18001BEB4(unsigned __int64 a1)
{
  __int64 v1; // rdi
  const __m128i *v3; // rsi
  const __m128i *v4; // rax
  __int64 result; // rax
  __int64 v6; // rcx

  v1 = qword_1801C8518;
  *(_QWORD *)a1 = off_1800EE698;
  v3 = *(const __m128i **)(v1 + 120);
  v4 = sub_18000B9A0(*(const __m128i **)(v1 + 112), v3, a1);
  if ( v4 != v3 )
    v4 = sub_18000BA60(v4, v3, a1);
  if ( v4 != *(const __m128i **)(v1 + 120) )
    *(_QWORD *)(v1 + 120) = v4;
  sub_18000F938((__int64 *)(a1 + 40));
  result = sub_18000F938((__int64 *)(a1 + 32));
  v6 = *(_QWORD *)(a1 + 24);
  if ( v6 )
    result = sub_180010EC8(v6);
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
