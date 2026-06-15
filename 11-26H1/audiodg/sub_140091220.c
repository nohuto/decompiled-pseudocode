/*
 * XREFs of sub_140091220 @ 0x140091220
 * Callers:
 *     sub_140091290 @ 0x140091290 (sub_140091290.c)
 *     sub_1400912A0 @ 0x1400912A0 (sub_1400912A0.c)
 *     sub_1400912B0 @ 0x1400912B0 (sub_1400912B0.c)
 * Callees:
 *     sub_140088ED0 @ 0x140088ED0 (sub_140088ED0.c)
 *     sub_140090C28 @ 0x140090C28 (sub_140090C28.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140091220(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  __int64 *v3; // r8
  __int64 v4; // r9
  _DWORD *v5; // r10
  int v6; // ebx
  _QWORD *v7; // r8

  *a3 = 0LL;
  if ( sub_140088ED0(a2, &stru_1400C6598) )
  {
    *v3 = v4;
    sub_1400B6010(v4);
    return 0;
  }
  else
  {
    v6 = sub_140090C28(v4, v5);
    if ( v6 >= 0 )
      sub_1400B6010(*v7);
  }
  return (unsigned int)v6;
}
