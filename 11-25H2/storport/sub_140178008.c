/*
 * XREFs of sub_140178008 @ 0x140178008
 * Callers:
 *     sub_1400465E0 @ 0x1400465E0 (sub_1400465E0.c)
 *     sub_1401B34BC @ 0x1401B34BC (sub_1401B34BC.c)
 *     sub_1401B43C0 @ 0x1401B43C0 (sub_1401B43C0.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_140178008(__int64 a1, int a2)
{
  _QWORD *v2; // r10
  _QWORD *i; // rcx
  _QWORD *v4; // r9

  v2 = (_QWORD *)(a1 + 96);
  for ( i = *(_QWORD **)(a1 + 96); i != v2; i = (_QWORD *)*i )
  {
    v4 = i - 26;
    if ( (*(_DWORD *)(i - 3) & 0x800) != 0 )
      *((_DWORD *)v4 + 1) = a2;
    if ( *((_DWORD *)v4 + 1) == a2 )
      return i - 26;
  }
  return 0LL;
}
