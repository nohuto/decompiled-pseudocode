/*
 * XREFs of sub_14002DC40 @ 0x14002DC40
 * Callers:
 *     sub_14002C780 @ 0x14002C780 (sub_14002C780.c)
 * Callees:
 *     sub_14002DCA4 @ 0x14002DCA4 (sub_14002DCA4.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14002DC40(__int64 a1)
{
  __int64 v2; // rbx
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rsi

  v2 = *(_QWORD *)(a1 + 24);
  while ( v2 )
  {
    v4 = v2;
    v5 = *(_QWORD *)(v2 + 16);
    v2 = *(_QWORD *)(v2 + 8);
    if ( *(_DWORD *)(v5 + 40) == 4 )
    {
      sub_14002DCA4(a1 + 16, v4);
      result = sub_1400B6010(v5);
    }
  }
  return result;
}
