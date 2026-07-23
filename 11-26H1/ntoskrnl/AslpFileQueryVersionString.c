/*
 * XREFs of AslpFileQueryVersionString @ 0x140B46780
 * Callers:
 *     AslpFileMakeStringVersionAttributes @ 0x140894F58 (AslpFileMakeStringVersionAttributes.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x1404AA134 (RtlStringCchPrintfW.c)
 *     RtlStringCchCatW @ 0x1404D855C (RtlStringCchCatW.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     AslpFileVerStringBlockGetValue @ 0x1408956B4 (AslpFileVerStringBlockGetValue.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 *     AslpFileVerQueryBlock @ 0x1409D7CBC (AslpFileVerQueryBlock.c)
 */

__int64 __fastcall AslpFileQueryVersionString(
        _QWORD *a1,
        _QWORD *a2,
        unsigned __int16 *a3,
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
  unsigned __int64 i; // rdi
  int v19; // eax
  __int64 v21; // [rsp+20h] [rbp-E0h]
  unsigned __int64 v22; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int16 *v23; // [rsp+38h] [rbp-C8h] BYREF
  size_t v24; // [rsp+40h] [rbp-C0h] BYREF
  const wchar_t *v25; // [rsp+48h] [rbp-B8h] BYREF
  wchar_t pszDest[128]; // [rsp+50h] [rbp-B0h] BYREF

  *a1 = 0LL;
  *a2 = 0LL;
  pszDest[0] = 0;
  v10 = 0LL;
  v25 = 0LL;
  v24 = 0LL;
  v23 = 0LL;
  v22 = 0LL;
  while ( v10 < 4 )
  {
    v11 = 128LL;
    v12 = (char *)off_14000F200[v10] - (char *)pszDest;
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
    if ( !v11 || (v16 = RtlStringCchCatW(pszDest, 0x80uLL, pszSrc), v16 < 0) )
    {
LABEL_23:
      AslLogCallPrintf(1LL, (__int64)"AslpFileQueryVersionString");
      return (unsigned int)v16;
    }
    v17 = AslpFileVerQueryBlock(a3, (__int64)pszDest, &v23, &v22);
    v16 = v17;
    if ( v17 >= 0 )
    {
      if ( (int)AslpFileVerStringBlockGetValue(&v25, &v24, (__int64)v23, v22) >= 0 )
      {
LABEL_26:
        *a2 = v24;
        *a1 = v25;
        return 0LL;
      }
      break;
    }
    if ( v17 != -1073741275 )
      goto LABEL_23;
    ++v10;
  }
  if ( a4 )
  {
    for ( i = 0LL; i < a5; ++i )
    {
      LODWORD(v21) = a4[1];
      v16 = RtlStringCchPrintfW(pszDest, 0x80uLL, L"\\StringFileInfo\\%04X%04X\\%s", *a4, v21, pszSrc);
      if ( v16 < 0 )
        goto LABEL_23;
      v19 = AslpFileVerQueryBlock(a3, (__int64)pszDest, &v23, &v22);
      v16 = v19;
      if ( v19 >= 0 )
      {
        if ( (int)AslpFileVerStringBlockGetValue(&v25, &v24, (__int64)v23, v22) < 0 )
          return 3221226021LL;
        goto LABEL_26;
      }
      if ( v19 != -1073741275 )
        goto LABEL_23;
      a4 += 2;
    }
  }
  return 3221226021LL;
}
