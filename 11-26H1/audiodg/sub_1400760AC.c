/*
 * XREFs of sub_1400760AC @ 0x1400760AC
 * Callers:
 *     sub_14007C200 @ 0x14007C200 (sub_14007C200.c)
 * Callees:
 *     sub_14001FC10 @ 0x14001FC10 (sub_14001FC10.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_1400760AC(__int64 a1, _DWORD *a2, _QWORD *a3)
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
  _QWORD *v12; // r8
  __int64 v13; // r11
  _QWORD *v14; // r8
  __int64 v15; // r11

  *a3 = 0LL;
  if ( !sub_14001FC10(a2, &stru_1400C6598) && !sub_14001FC10(v3, &dword_1400C6698) )
  {
    if ( sub_14001FC10(v6, &xmmword_1400CB8B0) )
    {
      *v8 = v9;
    }
    else
    {
      if ( !sub_14001FC10(v7, &xmmword_1400C6688) )
      {
        if ( sub_14001FC10(v11, &xmmword_1400CBB20) )
        {
          v9 = v15 + 8;
          *v14 = v15 + 8;
          v10 = 0;
        }
        else
        {
          v10 = -2147467262;
          v9 = 0LL;
        }
        if ( v10 < 0 )
          return (unsigned int)v10;
        goto LABEL_12;
      }
      *v12 = v13;
    }
    v10 = 0;
LABEL_12:
    sub_1400B6010(v9);
    return (unsigned int)v10;
  }
  *v4 = v5;
  sub_1400B6010(v5);
  return 0LL;
}
