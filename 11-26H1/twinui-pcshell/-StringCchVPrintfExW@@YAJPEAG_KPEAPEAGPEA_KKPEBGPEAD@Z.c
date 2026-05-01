/*
 * XREFs of ?StringCchVPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGPEAD@Z @ 0x18018ABAC
 * Callers:
 *     ??$str_vprintf_nothrow@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@details@wil@@YAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGAEAPEAD@Z @ 0x1803D9708 (--$str_vprintf_nothrow@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@details@wi.c)
 *     ??$str_vprintf_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@YAJAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@1@PEBGAEAPEAD@Z @ 0x180458EA8 (--$str_vprintf_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6APEAXPEAX@Z$1-.c)
 * Callees:
 *     _vsnwprintf @ 0x1802C9F40 (_vsnwprintf.c)
 *     StringExHandleFillBehindNullW @ 0x1803098CC (StringExHandleFillBehindNullW.c)
 *     StringExHandleOtherFlagsW @ 0x1803098F8 (StringExHandleOtherFlagsW.c)
 */

__int64 __fastcall StringCchVPrintfExW(
        wchar_t *Buffer,
        unsigned __int64 a2,
        unsigned __int16 **a3,
        wchar_t *a4,
        DWORD a5,
        wchar_t *Format,
        va_list Args)
{
  DWORD dwFlags; // r15d
  int v11; // ebx
  wchar_t *v13; // rbp
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rdi
  int v16; // eax
  const wchar_t *v17; // r8
  size_t pcchRemaining[2]; // [rsp+30h] [rbp-38h] BYREF
  STRSAFE_LPWSTR ppszDestEnd; // [rsp+88h] [rbp+20h] BYREF

  ppszDestEnd = a4;
  dwFlags = a5;
  v11 = 0;
  if ( (a5 & 0x100) != 0 )
  {
    if ( !Buffer && a2 || a2 > 0x7FFFFFFF )
      v11 = -2147024809;
  }
  else if ( a2 - 1 > 0x7FFFFFFE )
  {
    v11 = -2147024809;
  }
  if ( v11 < 0 )
  {
    if ( a2 )
      *Buffer = 0;
    return (unsigned int)v11;
  }
  ppszDestEnd = Buffer;
  v13 = Buffer;
  if ( (a5 & 0x100) != 0 )
  {
    v17 = &pvData;
    if ( Format )
      v17 = Format;
  }
  else
  {
    v17 = Format;
  }
  v11 = 0;
  if ( (a5 & 0xFFFFE000) != 0 )
  {
    v11 = -2147024809;
    if ( a2 )
      *Buffer = 0;
    goto LABEL_12;
  }
  if ( a2 )
  {
    v15 = a2 - 1;
    v16 = vsnwprintf(Buffer, a2 - 1, v17, Args);
    if ( v16 < 0 || v16 > v15 )
    {
      v11 = -2147024774;
    }
    else if ( v16 != v15 )
    {
      v15 = v16;
LABEL_11:
      v13 = &Buffer[v15];
      v14 = a2 - v15;
      ppszDestEnd = v13;
      if ( v11 >= 0 )
      {
        if ( (dwFlags & 0x200) != 0 && v14 > 1 )
          StringExHandleFillBehindNullW(&Buffer[v15], 2 * v14, dwFlags);
        goto LABEL_37;
      }
      goto LABEL_12;
    }
    Buffer[v15] = 0;
    goto LABEL_11;
  }
  if ( !*v17 )
  {
LABEL_37:
    if ( a3 )
      *a3 = v13;
    return (unsigned int)v11;
  }
  v11 = Buffer != 0LL ? -2147024774 : -2147024809;
LABEL_12:
  if ( (dwFlags & 0x1C00) != 0 && a2 )
  {
    StringExHandleOtherFlagsW(Buffer, 2 * a2, (size_t)v17, &ppszDestEnd, pcchRemaining, dwFlags);
    v13 = ppszDestEnd;
  }
  if ( v11 == -2147024774 )
    goto LABEL_37;
  return (unsigned int)v11;
}
