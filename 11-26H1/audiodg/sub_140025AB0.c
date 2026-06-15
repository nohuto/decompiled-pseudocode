/*
 * XREFs of sub_140025AB0 @ 0x140025AB0
 * Callers:
 *     sub_14004E930 @ 0x14004E930 (sub_14004E930.c)
 *     sub_14004E940 @ 0x14004E940 (sub_14004E940.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140025AB0(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  unsigned int v6; // edi
  _QWORD *i; // rsi
  _DWORD *v8; // rcx
  int v9; // ebp
  __int64 v11; // rbx
  int v12; // eax

  v6 = 0;
  if ( !a1 )
    return (unsigned int)-2147024809;
  if ( !a3 )
    return (unsigned int)-2147467261;
  *a3 = 0LL;
  if ( *a2 || a2[1] || a2[2] != 192 || a2[3] != 1174405120 )
  {
    for ( i = &unk_1400B97E8; ; i += 3 )
    {
      if ( !i[1] )
        return (unsigned int)-2147467262;
      v8 = (_DWORD *)*(i - 1);
      if ( v8 )
      {
        v9 = 0;
        if ( *v8 != *a2 || v8[1] != a2[1] || v8[2] != a2[2] || v8[3] != a2[3] )
          continue;
      }
      else
      {
        v9 = 1;
      }
      if ( i[1] == 1LL )
      {
        v11 = a1 + *i;
        sub_1400B6010(v11);
        *a3 = v11;
        return v6;
      }
      v12 = sub_1400B6010(a1);
      if ( !v12 || !v9 && v12 < 0 )
        return (unsigned int)v12;
    }
  }
  sub_1400B6010(a1);
  *a3 = a1;
  return v6;
}
