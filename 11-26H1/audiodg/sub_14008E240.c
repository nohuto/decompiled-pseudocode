/*
 * XREFs of sub_14008E240 @ 0x14008E240
 * Callers:
 *     <none>
 * Callees:
 *     sub_140065398 @ 0x140065398 (sub_140065398.c)
 *     sub_140088ED0 @ 0x140088ED0 (sub_140088ED0.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_14008E240(__int64 a1, _DWORD *a2, _QWORD *a3)
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
    v6 = sub_140065398(v4, v5);
    if ( v6 == -2147467262 )
    {
      return (unsigned int)-2147467262;
    }
    else if ( v6 >= 0 )
    {
      sub_1400B6010(*v7);
    }
  }
  return (unsigned int)v6;
}
