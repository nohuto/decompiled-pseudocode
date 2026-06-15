/*
 * XREFs of sub_140089A10 @ 0x140089A10
 * Callers:
 *     sub_1400892B4 @ 0x1400892B4 (sub_1400892B4.c)
 *     sub_140089CE0 @ 0x140089CE0 (sub_140089CE0.c)
 * Callees:
 *     sub_140065398 @ 0x140065398 (sub_140065398.c)
 *     sub_140088ED0 @ 0x140088ED0 (sub_140088ED0.c)
 */

__int64 __fastcall sub_140089A10(__int64 a1, _DWORD *a2)
{
  unsigned int v2; // r10d
  _DWORD *v3; // r11
  BOOL v4; // eax
  _DWORD *v5; // rcx
  _QWORD *v6; // r8
  __int64 v7; // r9
  _QWORD *v8; // r8
  __int64 v9; // r9

  v2 = sub_140065398(a1, a2);
  if ( v2 == -2147467262 )
  {
    v4 = sub_140088ED0(v3, &xmmword_1400C6688);
    v2 = 0;
    if ( v4 )
    {
      *v6 = v7;
    }
    else if ( sub_140088ED0(v5, &xmmword_1400C94C0) )
    {
      *v8 = v9 + 8;
    }
    else
    {
      return (unsigned int)-2147467262;
    }
  }
  return v2;
}
