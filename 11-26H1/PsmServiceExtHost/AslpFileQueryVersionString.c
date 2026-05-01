/*
 * XREFs of AslpFileQueryVersionString @ 0x18009E148
 * Callers:
 *     AslpFileMakeStringVersionAttributes @ 0x18009DA90 (AslpFileMakeStringVersionAttributes.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x18006297C (RtlStringCchCopyW.c)
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     RtlStringCchCatW @ 0x18008D074 (RtlStringCchCatW.c)
 *     RtlStringCchPrintfW @ 0x18008D0EC (RtlStringCchPrintfW.c)
 *     AslpFileVerQueryBlock @ 0x18009E4B4 (AslpFileVerQueryBlock.c)
 *     AslpFileVerStringBlockGetValue @ 0x18009E6A8 (AslpFileVerStringBlockGetValue.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall AslpFileQueryVersionString(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        unsigned __int16 *a4,
        unsigned __int64 a5,
        __int64 a6)
{
  unsigned __int64 v10; // rdi
  int v11; // ebx
  int v12; // eax
  const char *v13; // r9
  __int64 v14; // r8
  unsigned __int64 i; // rdi
  int v16; // eax
  __int64 v18; // [rsp+20h] [rbp-E0h]
  __int64 v19; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v20; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v21; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v22; // [rsp+48h] [rbp-B8h] BYREF
  _WORD v23[128]; // [rsp+50h] [rbp-B0h] BYREF

  *a1 = 0LL;
  *a2 = 0LL;
  v23[0] = 0;
  v22 = 0LL;
  v21 = 0LL;
  v10 = 0LL;
  v20 = 0LL;
  v19 = 0LL;
  while ( 1 )
  {
    if ( v10 >= 4 )
      goto LABEL_10;
    v11 = RtlStringCchCopyW(v23, 128LL, (__int64)off_1800B9CF0[v10]);
    if ( v11 < 0 )
    {
      v13 = "RtlStringCchCopyW failed [%x]";
      v14 = 3104LL;
      goto LABEL_19;
    }
    v11 = RtlStringCchCatW(v23, 128LL, a6);
    if ( v11 < 0 )
    {
      v13 = "RtlStringCchCatW failed [%x]";
      v14 = 3110LL;
      goto LABEL_19;
    }
    v12 = AslpFileVerQueryBlock(a3, v23, &v20, &v19);
    v11 = v12;
    if ( v12 >= 0 )
      break;
    if ( v12 != -1073741275 )
    {
      v13 = "AslpFileVerQueryBlock failed [%x]";
      v14 = 3140LL;
LABEL_19:
      LODWORD(v18) = v11;
      AslLogCallPrintf(1LL, "AslpFileQueryVersionString", v14, v13, v18);
      return (unsigned int)v11;
    }
    ++v10;
  }
  if ( (int)AslpFileVerStringBlockGetValue(&v22, &v21, v20, v19) >= 0 )
  {
LABEL_22:
    *a2 = v21;
    *a1 = v22;
    return 0LL;
  }
  else
  {
LABEL_10:
    if ( a4 )
    {
      for ( i = 0LL; i < a5; ++i )
      {
        LODWORD(v18) = a4[1];
        v11 = RtlStringCchPrintfW(v23, 128LL, (__int64)L"\\StringFileInfo\\%04X%04X\\%s", *a4, v18, a6);
        if ( v11 < 0 )
        {
          v13 = "RtlStringCchPrintfW failed [%x]";
          v14 = 3158LL;
          goto LABEL_19;
        }
        v16 = AslpFileVerQueryBlock(a3, v23, &v20, &v19);
        v11 = v16;
        if ( v16 >= 0 )
        {
          if ( (int)AslpFileVerStringBlockGetValue(&v22, &v21, v20, v19) < 0 )
            return 3221226021LL;
          goto LABEL_22;
        }
        if ( v16 != -1073741275 )
        {
          v13 = "AslpFileVerQueryBlock failed [%x]";
          v14 = 3188LL;
          goto LABEL_19;
        }
        a4 += 2;
      }
    }
    return 3221226021LL;
  }
}
