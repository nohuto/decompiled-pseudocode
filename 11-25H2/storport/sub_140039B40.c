/*
 * XREFs of sub_140039B40 @ 0x140039B40
 * Callers:
 *     sub_140039A30 @ 0x140039A30 (sub_140039A30.c)
 *     sub_14009641C @ 0x14009641C (sub_14009641C.c)
 *     sub_140133DE4 @ 0x140133DE4 (sub_140133DE4.c)
 *     sub_140195B08 @ 0x140195B08 (sub_140195B08.c)
 *     sub_140196ED8 @ 0x140196ED8 (sub_140196ED8.c)
 *     sub_1401AE8EC @ 0x1401AE8EC (sub_1401AE8EC.c)
 *     sub_1401B02E0 @ 0x1401B02E0 (sub_1401B02E0.c)
 * Callees:
 *     <none>
 */

__int64 sub_140039B40(wchar_t *a1, unsigned __int64 a2, const wchar_t *a3, ...)
{
  unsigned __int64 v3; // rdx
  unsigned __int64 v5; // rsi
  unsigned int v6; // edi
  int v7; // eax
  va_list Args; // [rsp+78h] [rbp+20h] BYREF

  va_start(Args, a3);
  v3 = a2 >> 1;
  if ( v3 - 1 > 0x7FFFFFFE )
  {
    v6 = -1073741811;
    if ( v3 )
      *a1 = 0;
  }
  else
  {
    v5 = v3 - 1;
    v6 = 0;
    v7 = vsnwprintf(a1, v3 - 1, a3, Args);
    if ( v7 < 0 || v7 > v5 )
    {
      v6 = -2147483643;
      goto LABEL_5;
    }
    if ( v7 == v5 )
LABEL_5:
      a1[v5] = 0;
  }
  return v6;
}
