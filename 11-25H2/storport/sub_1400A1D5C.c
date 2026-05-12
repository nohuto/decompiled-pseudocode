/*
 * XREFs of sub_1400A1D5C @ 0x1400A1D5C
 * Callers:
 *     sub_140040228 @ 0x140040228 (sub_140040228.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1400A1D5C(wchar_t *a1, __int64 a2, unsigned __int64 *a3, const wchar_t *a4, va_list Args)
{
  unsigned __int64 v5; // rbx
  unsigned int v8; // ebp
  int v9; // eax

  v5 = a2 - 1;
  v8 = 0;
  v9 = vsnwprintf(a1, a2 - 1, a4, Args);
  if ( v9 < 0 || v9 > v5 )
  {
    v8 = -2147483643;
  }
  else if ( v9 != v5 )
  {
    v5 = v9;
    goto LABEL_7;
  }
  a1[v5] = 0;
LABEL_7:
  if ( a3 )
    *a3 = v5;
  return v8;
}
