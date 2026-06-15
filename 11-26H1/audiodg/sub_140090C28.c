/*
 * XREFs of sub_140090C28 @ 0x140090C28
 * Callers:
 *     sub_140091220 @ 0x140091220 (sub_140091220.c)
 * Callees:
 *     sub_140065398 @ 0x140065398 (sub_140065398.c)
 *     sub_140088ED0 @ 0x140088ED0 (sub_140088ED0.c)
 *     sub_140090BC4 @ 0x140090BC4 (sub_140090BC4.c)
 */

__int64 __fastcall sub_140090C28(__int64 a1, _DWORD *a2)
{
  unsigned int v4; // r10d
  BOOL v5; // eax
  _QWORD *v6; // r8

  v4 = sub_140065398(a1, a2);
  if ( v4 == -2147467262 )
    v4 = sub_140090BC4(a1 + 48, a2);
  if ( v4 == -2147467262 )
  {
    v5 = sub_140088ED0(a2, dword_1400C9A68);
    v4 = 0;
    if ( v5 )
      *v6 = a1 + 112;
    else
      return (unsigned int)-2147467262;
  }
  return v4;
}
