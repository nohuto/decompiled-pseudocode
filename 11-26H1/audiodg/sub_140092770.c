/*
 * XREFs of sub_140092770 @ 0x140092770
 * Callers:
 *     sub_140092AF0 @ 0x140092AF0 (sub_140092AF0.c)
 * Callees:
 *     sub_140065398 @ 0x140065398 (sub_140065398.c)
 *     sub_140088ED0 @ 0x140088ED0 (sub_140088ED0.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140092770(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  __int64 *v3; // r8
  __int64 v4; // r10
  _DWORD *v5; // r11
  int v6; // ebx
  _QWORD *v7; // r8
  _DWORD *v8; // r11
  _DWORD *v9; // rcx
  __int64 v10; // r10
  int v11; // r9d

  *a3 = 0LL;
  if ( sub_140088ED0(a2, &stru_1400C6598) )
  {
    *v3 = v4;
    sub_1400B6010(v4);
    return 0LL;
  }
  else
  {
    v6 = sub_140065398(v4, v5);
    if ( v6 == -2147467262 )
    {
      if ( sub_140088ED0(v8, dword_1400CC3D8) || sub_140088ED0(v9, &xmmword_1400F5A98) )
      {
        *v7 = v10;
        v6 = 0;
      }
      else
      {
        v6 = v11;
      }
    }
    if ( v6 >= 0 )
      sub_1400B6010(*v7);
    return (unsigned int)v6;
  }
}
