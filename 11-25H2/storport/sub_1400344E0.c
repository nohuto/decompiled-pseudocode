/*
 * XREFs of sub_1400344E0 @ 0x1400344E0
 * Callers:
 *     sub_140034288 @ 0x140034288 (sub_140034288.c)
 *     StorPortDebugPrint @ 0x1400343F0 (StorPortDebugPrint.c)
 *     sub_1400EA590 @ 0x1400EA590 (sub_1400EA590.c)
 *     sub_1400F2A1C @ 0x1400F2A1C (sub_1400F2A1C.c)
 * Callees:
 *     <none>
 */

__int64 sub_1400344E0(char *a1, __int64 a2, const char *a3, ...)
{
  unsigned __int64 v4; // rdi
  unsigned int v5; // ebx
  int v6; // eax
  va_list Args; // [rsp+68h] [rbp+20h] BYREF

  va_start(Args, a3);
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
  {
    v5 = -1073741811;
    if ( a2 )
      *a1 = 0;
  }
  else
  {
    v4 = a2 - 1;
    v5 = 0;
    v6 = vsnprintf(a1, a2 - 1, a3, Args);
    if ( v6 < 0 || v6 > v4 )
    {
      a1[v4] = 0;
      return (unsigned int)-2147483643;
    }
    else if ( v6 == v4 )
    {
      a1[v4] = 0;
    }
  }
  return v5;
}
