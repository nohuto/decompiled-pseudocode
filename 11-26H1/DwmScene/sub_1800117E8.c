/*
 * XREFs of sub_1800117E8 @ 0x1800117E8
 * Callers:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 * Callees:
 *     sub_180012970 @ 0x180012970 (sub_180012970.c)
 *     sub_18001C514 @ 0x18001C514 (sub_18001C514.c)
 */

unsigned __int64 __fastcall sub_1800117E8(unsigned __int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  unsigned __int64 result; // rax

  if ( a1 + 39 < a1 )
    sub_180012970();
  v1 = sub_18001C514(a1 + 39);
  v2 = v1;
  if ( !v1 )
    invoke_watson(0LL, 0LL, 0LL, 0, 0LL);
  result = (v1 + 39) & 0xFFFFFFFFFFFFFFE0uLL;
  *(_QWORD *)(result - 8) = v2;
  return result;
}
