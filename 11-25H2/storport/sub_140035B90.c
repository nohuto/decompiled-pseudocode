/*
 * XREFs of sub_140035B90 @ 0x140035B90
 * Callers:
 *     <none>
 * Callees:
 *     sub_140035BC4 @ 0x140035BC4 (sub_140035BC4.c)
 *     sub_140035C34 @ 0x140035C34 (sub_140035C34.c)
 */

__int64 __fastcall sub_140035B90(__int64 a1, __int64 a2, __int64 a3)
{
  if ( (unsigned __int8)sub_140035BC4(*(_QWORD *)(a3 + 16)) )
    sub_140035C34(*(_QWORD *)(a3 + 16), a3);
  return 3221225494LL;
}
