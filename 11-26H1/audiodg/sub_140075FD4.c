/*
 * XREFs of sub_140075FD4 @ 0x140075FD4
 * Callers:
 *     sub_14007C110 @ 0x14007C110 (sub_14007C110.c)
 *     sub_14007E350 @ 0x14007E350 (sub_14007E350.c)
 * Callees:
 *     sub_14001FC10 @ 0x14001FC10 (sub_14001FC10.c)
 *     sub_140078CE0 @ 0x140078CE0 (sub_140078CE0.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140075FD4(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  _DWORD *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r9
  _DWORD *v6; // rcx
  _DWORD *v7; // rcx
  _QWORD *v8; // r8
  __int64 v9; // r9
  int v10; // ebx
  _DWORD *v11; // rcx
  __int64 v12; // r9

  *a3 = 0LL;
  if ( !sub_14001FC10(a2, &stru_1400C6598) && !sub_14001FC10(v3, &dword_1400C6698) )
  {
    if ( sub_14001FC10(v6, &xmmword_1400CBB40) || sub_14001FC10(v7, &xmmword_1400C6688) )
    {
      *v8 = v9;
      v10 = 0;
    }
    else
    {
      if ( sub_14001FC10(v11, &xmmword_1400CB7D0) )
      {
        *v8 = v12;
        v10 = 0;
      }
      else
      {
        v10 = sub_140078CE0(v12 + 80);
        if ( v10 == -2147467262 )
          v10 = -2147467262;
        if ( v10 == -2147467262 )
          v10 = -2147467262;
      }
      if ( v10 < 0 )
        return (unsigned int)v10;
    }
    sub_1400B6010(*v8);
    return (unsigned int)v10;
  }
  *v4 = v5;
  sub_1400B6010(v5);
  return 0LL;
}
