/*
 * XREFs of sub_140071138 @ 0x140071138
 * Callers:
 *     sub_1400710E8 @ 0x1400710E8 (sub_1400710E8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140071138(wchar_t *a1, __int64 a2, __int64 a3, const wchar_t *a4, va_list Args)
{
  unsigned __int64 v5; // rdi
  unsigned int v7; // ebx
  int v8; // eax

  v5 = a2 - 1;
  v7 = 0;
  v8 = vsnwprintf(a1, a2 - 1, a4, Args);
  if ( v8 < 0 || v8 > v5 )
  {
    a1[v5] = 0;
    return (unsigned int)-2147024774;
  }
  else if ( v8 == v5 )
  {
    a1[v5] = 0;
  }
  return v7;
}
