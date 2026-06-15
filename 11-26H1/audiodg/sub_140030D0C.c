/*
 * XREFs of sub_140030D0C @ 0x140030D0C
 * Callers:
 *     sub_1400307E0 @ 0x1400307E0 (sub_1400307E0.c)
 *     sub_140030AB0 @ 0x140030AB0 (sub_140030AB0.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

char __fastcall sub_140030D0C(__int64 a1, __int64 a2)
{
  char v3; // al
  char v4; // dl

  v3 = sub_1400B6010(a2);
  v4 = 0;
  if ( !v3 || *(_DWORD *)(a1 + 208) )
    return 1;
  return v4;
}
