/*
 * XREFs of sub_140026C6C @ 0x140026C6C
 * Callers:
 *     sub_14000655C @ 0x14000655C (sub_14000655C.c)
 *     sub_1400066EC @ 0x1400066EC (sub_1400066EC.c)
 *     sub_140054D80 @ 0x140054D80 (sub_140054D80.c)
 * Callees:
 *     sub_14004A7C4 @ 0x14004A7C4 (sub_14004A7C4.c)
 */

__int64 sub_140026C6C(_BYTE *a1, __int64 a2, const char *a3, ...)
{
  unsigned __int64 v4; // rdi
  unsigned int v5; // ebx
  int v6; // eax
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, a3);
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
  {
    v5 = -2147024809;
    if ( a2 )
      *a1 = 0;
  }
  else
  {
    v4 = a2 - 1;
    v5 = 0;
    v6 = sub_14004A7C4(a1, a2 - 1, a3, (__int64 *)va);
    if ( v6 < 0 || v6 > v4 )
    {
      a1[v4] = 0;
      return (unsigned int)-2147024774;
    }
    else if ( v6 == v4 )
    {
      a1[v4] = 0;
    }
  }
  return v5;
}
