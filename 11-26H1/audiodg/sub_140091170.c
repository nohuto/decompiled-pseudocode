/*
 * XREFs of sub_140091170 @ 0x140091170
 * Callers:
 *     sub_140091200 @ 0x140091200 (sub_140091200.c)
 *     sub_140091210 @ 0x140091210 (sub_140091210.c)
 * Callees:
 *     sub_140065398 @ 0x140065398 (sub_140065398.c)
 *     sub_140088ED0 @ 0x140088ED0 (sub_140088ED0.c)
 *     sub_140090BC4 @ 0x140090BC4 (sub_140090BC4.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140091170(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  __int64 *v3; // r8
  __int64 v4; // r10
  _DWORD *v5; // r11
  int v6; // edi
  _QWORD *v7; // r8
  __int64 v8; // r10
  _DWORD *v9; // r11
  unsigned int v10; // ebx

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
    v10 = -2147467262;
    if ( v6 == -2147467262 )
      v6 = sub_140090BC4(v8 + 48, v9);
    if ( v6 != -2147467262 )
    {
      v10 = v6;
      if ( v6 >= 0 )
        sub_1400B6010(*v7);
    }
  }
  return v10;
}
