/*
 * XREFs of sub_14004771C @ 0x14004771C
 * Callers:
 *     sub_140047710 @ 0x140047710 (sub_140047710.c)
 * Callees:
 *     sub_14001FC10 @ 0x14001FC10 (sub_14001FC10.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14004771C(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  __int64 v3; // r10
  _DWORD *v4; // rdx
  _DWORD *v5; // rcx
  _DWORD *v6; // rcx
  _QWORD *v7; // r8
  __int64 v8; // r10
  int v9; // ebx
  _DWORD *v10; // rcx
  _DWORD *v11; // rcx
  __int64 v12; // r10
  _DWORD *v13; // rcx
  _DWORD *v14; // rcx
  __int64 v15; // r10

  v3 = a1;
  *a3 = 0LL;
  if ( (*a2 || a2[1] || a2[2] != 192 || a2[3] != 1174405120) && !sub_14001FC10(a2, &dword_1400C6698) )
  {
    if ( sub_14001FC10(v5, v4) || sub_14001FC10(v6, &xmmword_1400C6CB0) )
    {
      *v7 = v8;
      v9 = 0;
      goto LABEL_18;
    }
    if ( sub_14001FC10(v10, &xmmword_1400C6688)
      || sub_14001FC10(v11, &xmmword_1400C72F0)
      || sub_14001FC10(v13, &xmmword_1400C6E30) )
    {
      *v7 = v12;
    }
    else
    {
      if ( !sub_14001FC10(v14, &xmmword_1400C9420) )
      {
        v9 = -2147467262;
LABEL_17:
        if ( v9 < 0 )
          return (unsigned int)v9;
LABEL_18:
        sub_1400B6010(*v7);
        return (unsigned int)v9;
      }
      *v7 = v15 + 8;
    }
    v9 = 0;
    goto LABEL_17;
  }
  *a3 = v3;
  sub_1400B6010(v3);
  return 0LL;
}
