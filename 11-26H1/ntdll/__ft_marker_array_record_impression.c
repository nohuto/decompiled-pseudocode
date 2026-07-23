/*
 * XREFs of __ft_marker_array_record_impression @ 0x180147E30
 * Callers:
 *     __ft_record_impression @ 0x180147FFC (__ft_record_impression.c)
 * Callees:
 *     __ft_array_insert @ 0x180147CC8 (__ft_array_insert.c)
 *     __ft_marker_array_lower_bound @ 0x180147DD8 (__ft_marker_array_lower_bound.c)
 */

__int64 __fastcall _ft_marker_array_record_impression(_QWORD *a1, unsigned int a2, __int64 a3, int a4)
{
  signed __int64 v8; // rax
  _DWORD *v9; // r9
  __int64 v10; // r8
  int v11; // ecx
  int v12; // eax
  char *v14; // rax

  v8 = _ft_marker_array_lower_bound(a1, a2);
  if ( v8 < a1[1] )
  {
    v9 = (_DWORD *)*a1;
    v10 = 3 * v8;
    if ( *(_DWORD *)(*a1 + 12 * v8) == a2 )
    {
      v11 = 0x20000;
      if ( (a4 & 0x20000) == 0 || (v12 = v9[3 * v8 + 1], (v12 & 0x20000) != 0) )
      {
        v11 = 0x40000;
        if ( (a4 & 0x40000) == 0 )
          return 0LL;
        v12 = v9[v10 + 1];
        if ( (v12 & 0x40000) != 0 )
          return 0LL;
      }
      v9[v10 + 1] = v11 | v12 & 0xFFF7FFFF;
      return 1LL;
    }
  }
  v14 = (char *)_ft_array_insert((const void **)a1, a1 + 1, a1 + 2, 12LL, v8);
  if ( v14 )
  {
    *(_QWORD *)(v14 + 4) = a3;
    *((_DWORD *)v14 + 1) &= 0xFFF9FFFF;
    *((_DWORD *)v14 + 1) |= a4 & 0x60000;
    *(_DWORD *)v14 = a2;
    return 1LL;
  }
  return 0LL;
}
