/*
 * XREFs of AslpFileQueryVersionString @ 0x1409E3618
 * Callers:
 *     AslpFileMakeStringVersionAttributes @ 0x14088EB5C (AslpFileMakeStringVersionAttributes.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x1404B0AA4 (RtlStringCchPrintfW.c)
 *     RtlStringCchCatW @ 0x1404DEE7C (RtlStringCchCatW.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     AslpFileVerStringBlockGetValue @ 0x14088F2B8 (AslpFileVerStringBlockGetValue.c)
 *     AslpFileVerQueryBlock @ 0x1409E5068 (AslpFileVerQueryBlock.c)
 *     AslLogCallPrintf @ 0x1409E8884 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslpFileQueryVersionString(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        unsigned __int16 *a4,
        unsigned __int64 a5,
        NTSTRSAFE_PCWSTR pszSrc)
{
  unsigned __int64 v10; // rdi
  __int64 v11; // rdx
  signed __int64 v12; // r8
  wchar_t *v13; // rcx
  wchar_t v14; // ax
  wchar_t *v15; // rax
  NTSTATUS v16; // ebx
  int v17; // eax
  const char *v18; // r9
  int v19; // r8d
  unsigned __int64 i; // rdi
  int v21; // eax
  __int64 v23; // [rsp+20h] [rbp-E0h]
  unsigned __int64 v24; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v25; // [rsp+38h] [rbp-C8h] BYREF
  size_t v26; // [rsp+40h] [rbp-C0h] BYREF
  const wchar_t *v27; // [rsp+48h] [rbp-B8h] BYREF
  wchar_t pszDest[128]; // [rsp+50h] [rbp-B0h] BYREF

  *a1 = 0LL;
  *a2 = 0LL;
  pszDest[0] = 0;
  v10 = 0LL;
  v27 = 0LL;
  v26 = 0LL;
  v25 = 0LL;
  v24 = 0LL;
  while ( 1 )
  {
    if ( v10 >= 4 )
      goto LABEL_16;
    v11 = 128LL;
    v12 = (char *)off_14000EE68[v10] - (char *)pszDest;
    v13 = pszDest;
    do
    {
      if ( v11 == -2147483518 )
        break;
      v14 = *(wchar_t *)((char *)v13 + v12);
      if ( !v14 )
        break;
      *v13++ = v14;
      --v11;
    }
    while ( v11 );
    v15 = v13 - 1;
    if ( v11 )
      v15 = v13;
    *v15 = 0;
    v16 = v11 == 0 ? 0x80000005 : 0;
    if ( !v11 )
    {
      v18 = "RtlStringCchCopyW failed [%x]";
      v19 = 3104;
      goto LABEL_25;
    }
    v16 = RtlStringCchCatW(pszDest, 0x80uLL, pszSrc);
    if ( v16 < 0 )
    {
      v18 = "RtlStringCchCatW failed [%x]";
      v19 = 3110;
      goto LABEL_25;
    }
    v17 = AslpFileVerQueryBlock(a3, pszDest, &v25, &v24);
    v16 = v17;
    if ( v17 >= 0 )
      break;
    if ( v17 != -1073741275 )
    {
      v18 = "AslpFileVerQueryBlock failed [%x]";
      v19 = 3140;
LABEL_25:
      AslLogCallPrintf(1, (unsigned int)"AslpFileQueryVersionString", v19, (_DWORD)v18);
      return (unsigned int)v16;
    }
    ++v10;
  }
  if ( (int)AslpFileVerStringBlockGetValue(&v27, &v26, v25, v24) >= 0 )
  {
LABEL_28:
    *a2 = v26;
    *a1 = v27;
    return 0LL;
  }
  else
  {
LABEL_16:
    if ( a4 )
    {
      for ( i = 0LL; i < a5; ++i )
      {
        LODWORD(v23) = a4[1];
        v16 = RtlStringCchPrintfW(pszDest, 0x80uLL, L"\\StringFileInfo\\%04X%04X\\%s", *a4, v23, pszSrc);
        if ( v16 < 0 )
        {
          v18 = "RtlStringCchPrintfW failed [%x]";
          v19 = 3158;
          goto LABEL_25;
        }
        v21 = AslpFileVerQueryBlock(a3, pszDest, &v25, &v24);
        v16 = v21;
        if ( v21 >= 0 )
        {
          if ( (int)AslpFileVerStringBlockGetValue(&v27, &v26, v25, v24) < 0 )
            return 3221226021LL;
          goto LABEL_28;
        }
        if ( v21 != -1073741275 )
        {
          v18 = "AslpFileVerQueryBlock failed [%x]";
          v19 = 3188;
          goto LABEL_25;
        }
        a4 += 2;
      }
    }
    return 3221226021LL;
  }
}
