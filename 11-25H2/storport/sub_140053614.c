/*
 * XREFs of sub_140053614 @ 0x140053614
 * Callers:
 *     sub_14003328C @ 0x14003328C (sub_14003328C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140053614(unsigned __int16 *a1, _WORD *a2)
{
  unsigned __int64 v4; // rdx
  unsigned __int16 v5; // ax
  unsigned int v6; // ecx
  __int64 v7; // r11
  __int16 v8; // bx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r9
  __int64 v11; // rdi

  v4 = *a1;
  if ( (v4 & 1) != 0 )
    return (unsigned int)-1073741811;
  v5 = a1[1];
  if ( (v5 & 1) != 0 )
    return (unsigned int)-1073741811;
  if ( (unsigned __int16)v4 > v5 )
    return (unsigned int)-1073741811;
  if ( v5 == 0xFFFF )
    return (unsigned int)-1073741811;
  v6 = 0;
  if ( !*((_QWORD *)a1 + 1) && ((_WORD)v4 || v5) )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v7 = 0x7FFFLL;
    v8 = 0;
    v9 = v4 >> 1;
    v10 = ((unsigned __int64)a1[1] >> 1) - v9;
    if ( v10 )
    {
      v11 = 2 * v9 - (_QWORD)a2 + *((_QWORD *)a1 + 1);
      while ( v7 )
      {
        if ( *a2 )
        {
          *(_WORD *)((char *)a2 + v11) = *a2;
          --v7;
          ++a2;
          ++v8;
          if ( --v10 )
            continue;
        }
        if ( v10 || !v7 )
          break;
        goto LABEL_15;
      }
    }
    else
    {
LABEL_15:
      if ( *a2 )
        v6 = -2147483643;
    }
    *a1 = 2 * (v8 + v9);
  }
  return v6;
}
