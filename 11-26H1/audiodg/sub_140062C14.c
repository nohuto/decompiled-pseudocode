/*
 * XREFs of sub_140062C14 @ 0x140062C14
 * Callers:
 *     sub_140062DC0 @ 0x140062DC0 (sub_140062DC0.c)
 * Callees:
 *     sub_14001FC10 @ 0x14001FC10 (sub_14001FC10.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140062C14(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // r8
  unsigned int v3; // ebx
  _DWORD *v4; // rcx
  __int64 v5; // r8
  _QWORD *v6; // r9
  _QWORD *v7; // r9

  v2 = *a1;
  v3 = 0;
  *a2 = 0LL;
  if ( v2 )
  {
    if ( sub_14001FC10(&xmmword_1400C94C0, &stru_1400C6598) )
    {
      *v6 = v5;
    }
    else
    {
      if ( !sub_14001FC10(v4, v4) )
        return (unsigned int)-2147467262;
      *v7 = v5;
    }
    sub_1400B6010(v5);
    return v3;
  }
  return 0LL;
}
