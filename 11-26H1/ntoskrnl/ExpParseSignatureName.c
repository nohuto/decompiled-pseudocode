/*
 * XREFs of ExpParseSignatureName @ 0x140841DE0
 * Callers:
 *     ExpConvertSignatureName @ 0x140841304 (ExpConvertSignatureName.c)
 * Callees:
 *     wcsncpy_s @ 0x14053F120 (wcsncpy_s.c)
 *     ExpTranslateHexStringToGUID @ 0x14084300C (ExpTranslateHexStringToGUID.c)
 *     ExpTranslateHexStringToULONG @ 0x14084318C (ExpTranslateHexStringToULONG.c)
 *     ExpTranslateHexStringToULONGLONG @ 0x140843228 (ExpTranslateHexStringToULONGLONG.c)
 *     RtlGUIDFromString @ 0x1409622E0 (RtlGUIDFromString.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall ExpParseSignatureName(
        wchar_t *Src,
        unsigned int a2,
        GUID *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        bool *a7,
        char *a8)
{
  wchar_t v10; // dx
  bool v12; // r15
  char v13; // r10
  char v14; // r12
  unsigned int i; // edi
  wchar_t v16; // cx
  NTSTATUS result; // eax
  __int64 v18; // rdi
  wchar_t *v19; // r14
  int v20; // edx
  const wchar_t *v21; // r8
  unsigned int v22; // eax
  __int64 v23; // rbx
  int v24; // ebx
  __int64 v25; // rdi
  int v26; // ecx
  const wchar_t *v27; // r8
  unsigned int v28; // eax
  __int64 v29; // rbx
  int v30; // eax
  wchar_t *Pool2; // rax
  wchar_t *v32; // r14
  int v33; // eax
  __int64 v34; // rdi
  int v35; // ecx
  const wchar_t *v36; // r8
  unsigned int v37; // r15d
  unsigned int v38; // edi
  UNICODE_STRING GuidString; // [rsp+20h] [rbp-48h] BYREF
  bool v40; // [rsp+78h] [rbp+10h]

  v10 = *Src;
  GuidString = 0LL;
  v12 = v10 == 123;
  v13 = 0;
  v40 = v10 == 123;
  v14 = 0;
  for ( i = 0; i < a2; ++i )
  {
    v16 = Src[i];
    if ( v16 == 41 )
      break;
    if ( v10 == 123 )
    {
      if ( v16 == 125 )
      {
        v13 = 1;
        goto LABEL_10;
      }
    }
    else if ( v16 == 45 )
    {
      goto LABEL_10;
    }
  }
  if ( v10 == 123 )
    return -1073741811;
LABEL_10:
  if ( i <= 8 )
  {
    if ( v10 != 123 )
      goto LABEL_33;
  }
  else
  {
    v12 = 1;
    v40 = 1;
  }
  if ( v13 == 1 )
  {
    ++i;
    GuidString.Buffer = Src;
    GuidString.Length = 2 * i;
    GuidString.MaximumLength = 2 * i;
    result = RtlGUIDFromString(&GuidString, a3);
    if ( result < 0 )
      return result;
    goto LABEL_15;
  }
LABEL_33:
  Pool2 = (wchar_t *)ExAllocatePool2(0x40uLL);
  v32 = Pool2;
  if ( !Pool2 )
    return -1073741670;
  wcsncpy_s(Pool2, i + 1, Src, i);
  v12 = v40;
  v32[i] = 0;
  if ( v40 )
    v33 = ExpTranslateHexStringToGUID(v32, a3);
  else
    v33 = ExpTranslateHexStringToULONG(v32, a3);
  v24 = v33;
  ExFreePoolWithTag(v32, 0);
  if ( v24 < 0 )
    return v24;
LABEL_15:
  if ( i < a2 )
  {
    if ( Src[i] != 45 )
    {
LABEL_48:
      if ( Src[i] == 41 && (v12 || v14) )
      {
        *a7 = v12;
        *a8 = v14;
        return 0;
      }
      return -1073741811;
    }
    v18 = i + 1;
    if ( (unsigned int)v18 < a2 )
    {
      v19 = (wchar_t *)ExAllocatePool2(0x40uLL);
      if ( v19 )
      {
        v20 = v18;
        v21 = &Src[v18];
        do
        {
          if ( Src[v18] == 45 )
            break;
          v18 = (unsigned int)(v18 + 1);
        }
        while ( (unsigned int)v18 < a2 );
        v22 = v18 - v20;
        if ( (_DWORD)v18 == v20 || v22 > 8 )
          goto LABEL_52;
        v23 = v22;
        wcsncpy_s(v19, 0x11uLL, v21, v22);
        v19[v23] = 0;
        v24 = ExpTranslateHexStringToULONG(v19, a4);
        if ( v24 < 0 )
        {
LABEL_53:
          ExFreePoolWithTag(v19, 0);
          return v24;
        }
        v25 = (unsigned int)(v18 + 1);
        if ( (unsigned int)v25 >= a2 )
          goto LABEL_52;
        v26 = v25;
        v27 = &Src[v25];
        do
        {
          if ( Src[v25] == 45 )
            break;
          v25 = (unsigned int)(v25 + 1);
        }
        while ( (unsigned int)v25 < a2 );
        v28 = v25 - v26;
        if ( (_DWORD)v25 == v26 || v28 > 0x10 )
          goto LABEL_52;
        v29 = v28;
        wcsncpy_s(v19, 0x11uLL, v27, v28);
        v19[v29] = 0;
        v30 = ExpTranslateHexStringToULONGLONG(v19, a5);
        if ( v30 < 0 )
        {
          v24 = v30;
          goto LABEL_53;
        }
        v34 = (unsigned int)(v25 + 1);
        if ( (unsigned int)v34 >= a2 )
          goto LABEL_52;
        v35 = v34;
        v36 = &Src[v34];
        do
        {
          if ( Src[v34] == 41 )
            break;
          v34 = (unsigned int)(v34 + 1);
        }
        while ( (unsigned int)v34 < a2 );
        v37 = v34;
        v38 = v34 - v35;
        if ( !v38 || v38 > 0x10 )
        {
LABEL_52:
          v24 = -1073741811;
          goto LABEL_53;
        }
        wcsncpy_s(v19, 0x11uLL, v36, v38);
        v19[v38] = 0;
        v24 = ExpTranslateHexStringToULONGLONG(v19, a6);
        ExFreePoolWithTag(v19, 0);
        if ( v24 < 0 )
          return v24;
        i = v37;
        v14 = 1;
        if ( v37 < a2 )
        {
          v12 = v40;
          goto LABEL_48;
        }
        return -1073741811;
      }
      return -1073741670;
    }
  }
  return -1073741811;
}
