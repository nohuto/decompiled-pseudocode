/*
 * XREFs of RtlStringCbPrintfW @ 0x18011F008
 * Callers:
 *     LdrpLogEtwHotPatchStatus @ 0x18006FB5C (LdrpLogEtwHotPatchStatus.c)
 *     RtlQueryProcessHeapInformation @ 0x180090DF0 (RtlQueryProcessHeapInformation.c)
 *     RtlpGetTagName @ 0x1800FFAF0 (RtlpGetTagName.c)
 * Callees:
 *     _vsnwprintf @ 0x180128E20 (_vsnwprintf.c)
 */

__int64 RtlStringCbPrintfW(wchar_t *a1, unsigned __int64 a2, const wchar_t *a3, ...)
{
  unsigned __int64 v3; // rdx
  unsigned __int64 v5; // rdi
  unsigned int v6; // ebx
  int v7; // eax
  __int64 result; // rax
  va_list Args; // [rsp+68h] [rbp+20h] BYREF

  va_start(Args, a3);
  v3 = a2 >> 1;
  if ( v3 && v3 <= 0x7FFFFFFF )
  {
    v5 = v3 - 1;
    v6 = 0;
    v7 = vsnwprintf(a1, v3 - 1, a3, Args);
    if ( v7 < 0 || v7 > v5 )
    {
      a1[v5] = 0;
      return (unsigned int)-2147483643;
    }
    else if ( v7 == v5 )
    {
      a1[v5] = 0;
    }
    return v6;
  }
  else
  {
    result = 3221225485LL;
    if ( v3 )
      *a1 = 0;
  }
  return result;
}
