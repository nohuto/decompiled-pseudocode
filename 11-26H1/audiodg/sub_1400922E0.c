/*
 * XREFs of sub_1400922E0 @ 0x1400922E0
 * Callers:
 *     sub_140092380 @ 0x140092380 (sub_140092380.c)
 * Callees:
 *     sub_140065398 @ 0x140065398 (sub_140065398.c)
 *     sub_140088ED0 @ 0x140088ED0 (sub_140088ED0.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_1400922E0(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  __int64 *v3; // r8
  __int64 v4; // r10
  _DWORD *v5; // r11
  int v6; // ebx
  _QWORD *v7; // r8
  _DWORD *v8; // r11
  int v9; // r9d
  __int64 v10; // r10

  *a3 = 0LL;
  if ( sub_140088ED0(a2, &stru_1400C6598) )
  {
    *v3 = v4;
    sub_1400B6010(v4);
    return 0;
  }
  else
  {
    v6 = sub_140065398(v4, v5);
    if ( v6 == -2147467262 )
    {
      if ( sub_140088ED0(v8, dword_1400CC378) )
      {
        *v7 = v10 + 48;
        v6 = 0;
      }
      else
      {
        v6 = v9;
      }
    }
    if ( v6 >= 0 )
      sub_1400B6010(*v7);
  }
  return (unsigned int)v6;
}
