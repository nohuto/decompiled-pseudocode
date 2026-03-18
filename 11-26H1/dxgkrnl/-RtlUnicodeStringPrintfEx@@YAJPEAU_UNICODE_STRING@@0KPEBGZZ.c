/*
 * XREFs of ?RtlUnicodeStringPrintfEx@@YAJPEAU_UNICODE_STRING@@0KPEBGZZ @ 0x140094B08
 * Callers:
 *     DpiPdoHandleQueryDeviceText @ 0x1404100F0 (DpiPdoHandleQueryDeviceText.c)
 * Callees:
 *     memset @ 0x1400A5E00 (memset.c)
 */

__int64 RtlUnicodeStringPrintfEx(
        struct _UNICODE_STRING *a1,
        struct _UNICODE_STRING *a2,
        int a3,
        const unsigned __int16 *a4,
        ...)
{
  const wchar_t *v4; // rax
  __int16 v5; // r15
  wchar_t *Buffer; // r14
  size_t v8; // rdi
  wchar_t *v9; // r12
  size_t v10; // rsi
  size_t v11; // rbp
  unsigned __int16 Length; // dx
  unsigned __int64 MaximumLength; // rcx
  int v14; // ebx
  wchar_t *v15; // rax
  __int16 v16; // ax
  __int16 v17; // ax
  int v18; // eax
  va_list Args; // [rsp+A0h] [rbp+28h] BYREF

  va_start(Args, a4);
  v4 = a4;
  v5 = a3;
  if ( !a1 && (a3 & 0x100) != 0 )
  {
    Buffer = 0LL;
    v8 = 0LL;
    v9 = 0LL;
    LOWORD(v10) = 0;
    LOWORD(v11) = 0;
LABEL_12:
    if ( !a4 )
      v4 = (const wchar_t *)&unk_1400B4A34;
    goto LABEL_14;
  }
  Length = a1->Length;
  if ( (a1->Length & 1) != 0 )
    return (unsigned int)-1073741811;
  MaximumLength = a1->MaximumLength;
  if ( (MaximumLength & 1) != 0
    || Length > (unsigned __int16)MaximumLength
    || (_WORD)MaximumLength == 0xFFFF
    || (Buffer = a1->Buffer) == 0LL && (Length || (_WORD)MaximumLength) )
  {
    return (unsigned int)-1073741811;
  }
  v9 = a1->Buffer;
  v8 = MaximumLength >> 1;
  LOWORD(v11) = 0;
  v10 = MaximumLength >> 1;
  if ( (a3 & 0x100) != 0 )
    goto LABEL_12;
LABEL_14:
  v14 = 0;
  if ( (a3 & 0xFFFFE000) != 0 )
    goto LABEL_15;
  if ( v8 )
  {
    v18 = _vsnwprintf(Buffer, v8, v4, Args);
    if ( v18 < 0 || (v11 = v18, v18 > v8) )
    {
      v11 = v8;
      v14 = -2147483643;
    }
    v9 = &Buffer[v11];
    v10 = v8 - v11;
    if ( v14 >= 0 )
    {
      if ( (v5 & 0x200) != 0 && v10 )
        memset(&Buffer[v11], (unsigned __int8)v5, 2 * v10);
      goto LABEL_32;
    }
    goto LABEL_20;
  }
  if ( *v4 )
  {
    if ( Buffer )
    {
      v14 = -2147483643;
      goto LABEL_20;
    }
LABEL_15:
    v14 = -1073741811;
LABEL_20:
    if ( (v5 & 0x1C00) != 0 && v8 )
    {
      v15 = Buffer;
      if ( (v5 & 0x1000) == 0 )
        v15 = v9;
      v9 = v15;
      v16 = v8;
      if ( (v5 & 0x1000) == 0 )
        v16 = v10;
      LOWORD(v10) = v16;
      v17 = 0;
      if ( (v5 & 0x1000) == 0 )
        v17 = v11;
      LOWORD(v11) = v17;
      if ( (v5 & 0x400) != 0 )
      {
        memset(Buffer, (unsigned __int8)v5, 2 * v8);
        v9 = Buffer;
        LOWORD(v11) = 0;
        LOWORD(v10) = v8;
      }
      if ( (v5 & 0x800) != 0 )
      {
        v9 = Buffer;
        LOWORD(v10) = v8;
        LOWORD(v11) = 0;
      }
    }
  }
LABEL_32:
  if ( a1 )
    a1->Length = 2 * v11;
  if ( (int)(v14 + 0x80000000) < 0 || v14 == -2147483643 )
  {
    if ( a2 )
    {
      a2->Length = 0;
      a2->MaximumLength = 2 * v10;
      a2->Buffer = v9;
    }
  }
  return (unsigned int)v14;
}
