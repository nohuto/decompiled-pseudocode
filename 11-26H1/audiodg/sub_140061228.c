/*
 * XREFs of sub_140061228 @ 0x140061228
 * Callers:
 *     sub_140062720 @ 0x140062720 (sub_140062720.c)
 *     sub_1400627BC @ 0x1400627BC (sub_1400627BC.c)
 * Callees:
 *     sub_14000C390 @ 0x14000C390 (sub_14000C390.c)
 *     sub_14004639C @ 0x14004639C (sub_14004639C.c)
 *     sub_14005C090 @ 0x14005C090 (sub_14005C090.c)
 *     sub_140062380 @ 0x140062380 (sub_140062380.c)
 */

__int64 __fastcall sub_140061228(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v4; // rdx
  unsigned int v5; // eax

  if ( !a2 )
    sub_14004639C(-2147467259);
  result = *(_QWORD *)(a1 + 64);
  *(_QWORD *)(a2 + 24) = result;
  *(_QWORD *)(a1 + 64) = a2;
  v4 = *(_QWORD *)(a1 + 8) - 1LL;
  *(_QWORD *)(a1 + 8) = v4;
  if ( v4 < *(_QWORD *)(a1 + 40) && !*(_DWORD *)(a1 + 48) )
  {
    v5 = sub_14005C090(a1, v4);
    result = sub_140062380(a1, v5);
  }
  if ( !*(_QWORD *)(a1 + 8) )
    return sub_14000C390(a1);
  return result;
}
