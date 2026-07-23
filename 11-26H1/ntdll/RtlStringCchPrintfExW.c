/*
 * XREFs of RtlStringCchPrintfExW @ 0x180033C60
 * Callers:
 *     LdrpLogInternal @ 0x180031100 (LdrpLogInternal.c)
 *     LdrpGenerateSnapsUnicodeStrings @ 0x1800338F0 (LdrpGenerateSnapsUnicodeStrings.c)
 *     RtlFormatMessageEx @ 0x1800B9360 (RtlFormatMessageEx.c)
 * Callees:
 *     RtlStringExHandleOtherFlagsW @ 0x18010DC9C (RtlStringExHandleOtherFlagsW.c)
 *     _vsnwprintf @ 0x180128B90 (_vsnwprintf.c)
 *     RtlStringExHandleFillBehindNullW @ 0x18014740C (RtlStringExHandleFillBehindNullW.c)
 */

__int64 RtlStringCchPrintfExW(
        wchar_t *Buffer,
        unsigned __int64 a2,
        wchar_t **a3,
        unsigned __int64 *a4,
        unsigned int a5,
        wchar_t *Format,
        ...)
{
  int v10; // edx
  const wchar_t *v11; // r8
  wchar_t *v12; // rsi
  unsigned __int64 v13; // rdi
  unsigned int v14; // ebp
  unsigned __int64 v15; // rbp
  int v16; // eax
  __int64 result; // rax
  wchar_t *v18; // [rsp+30h] [rbp-58h] BYREF
  __int64 v19; // [rsp+38h] [rbp-50h] BYREF
  va_list va; // [rsp+C0h] [rbp+38h] BYREF

  va_start(va, Format);
  v10 = 0;
  if ( (a5 & 0x100) != 0 )
  {
    if ( !Buffer && a2 || a2 > 0x7FFFFFFF )
      v10 = -1073741811;
  }
  else if ( a2 - 1 > 0x7FFFFFFE )
  {
    v10 = -1073741811;
  }
  if ( v10 >= 0 )
  {
    v11 = Format;
    v12 = Buffer;
    v13 = a2;
    v18 = Buffer;
    v19 = a2;
    if ( (a5 & 0x100) != 0 && !Format )
      v11 = &word_1801762D4;
    v14 = 0;
    if ( (a5 & 0xFFFFE000) != 0 )
    {
      v14 = -1073741811;
      if ( a2 )
        *Buffer = 0;
    }
    else if ( a2 )
    {
      v15 = a2 - 1;
      v19 = 0LL;
      v16 = vsnwprintf(Buffer, a2 - 1, v11, va);
      if ( v16 >= 0 && v16 <= v15 )
      {
        if ( v16 == v15 )
        {
          Buffer[v15] = 0;
          v12 = &Buffer[a2 - 1];
          v13 = 1LL;
        }
        else
        {
          v13 = a2 - v16;
          v12 = &Buffer[v16];
        }
        v14 = 0;
        if ( (a5 & 0x200) != 0 && v13 > 1 )
          RtlStringExHandleFillBehindNullW(v12, 2 * v13, a5);
        goto LABEL_13;
      }
      v12 = &Buffer[v15];
      v13 = 1LL;
      *v12 = 0;
      v19 = 1LL;
      v14 = -2147483643;
      v18 = v12;
    }
    else
    {
      if ( !*v11 )
      {
LABEL_13:
        if ( a3 )
          *a3 = v12;
        result = v14;
        if ( a4 )
          *a4 = v13;
        return result;
      }
      v14 = -2147483643;
      if ( !Buffer )
        v14 = -1073741811;
    }
    if ( (a5 & 0x1C00) != 0 && a2 )
    {
      RtlStringExHandleOtherFlagsW(Buffer, 2 * a2, v11, &v18, &v19, a5);
      v12 = v18;
      v13 = v19;
    }
    if ( v14 != -2147483643 )
      return v14;
    goto LABEL_13;
  }
  if ( a2 )
    *Buffer = 0;
  return (unsigned int)v10;
}
