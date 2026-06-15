/*
 * XREFs of sub_14004A1DC @ 0x14004A1DC
 * Callers:
 *     sub_140049030 @ 0x140049030 (sub_140049030.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14004A1DC(__int64 a1)
{
  __int64 *i; // rbx
  __int64 result; // rax

  for ( i = (__int64 *)&unk_1400D4CB0; i < (__int64 *)&unk_1400D4CB0; ++i )
  {
    result = *i;
    if ( *i )
      result = sub_1400B6010(a1);
  }
  return result;
}
