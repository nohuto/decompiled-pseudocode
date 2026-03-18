/*
 * XREFs of sub_1400239EC @ 0x1400239EC
 * Callers:
 *     sub_140019450 @ 0x140019450 (sub_140019450.c)
 * Callees:
 *     sub_14000CF50 @ 0x14000CF50 (sub_14000CF50.c)
 *     sub_140032C80 @ 0x140032C80 (sub_140032C80.c)
 */

__int64 __fastcall sub_1400239EC(__int64 a1)
{
  _QWORD *v1; // rdi

  v1 = (_QWORD *)(a1 + 1536);
  if ( *(_QWORD *)(a1 + 1536) )
  {
    sub_14000CF50(a1, 12288LL, (__int64 *)(a1 + 1536), *(_QWORD *)(a1 + 1544));
    *v1 = 0LL;
    *(_QWORD *)(a1 + 1544) = 0LL;
  }
  return sub_140032C80(a1 + 1408, 0LL, 128LL);
}
