/*
 * XREFs of AslpEnvResolveVars @ 0x140891D90
 * Callers:
 *     AslEnvExpandStrings2 @ 0x1408917B4 (AslEnvExpandStrings2.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x140464504 (RtlStringCchCopyW.c)
 *     RtlStringCchCatW @ 0x1404D855C (RtlStringCchCatW.c)
 *     _wcsnicmp @ 0x140538B30 (_wcsnicmp.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslpEnvResolveVars(
        NTSTRSAFE_PCWSTR pszSrc,
        unsigned int a2,
        wchar_t *a3,
        unsigned int a4,
        __int16 a5,
        __int16 a6,
        unsigned int *a7)
{
  int v7; // ebx
  size_t v8; // r12
  int v9; // r15d
  unsigned int v10; // esi
  unsigned __int64 i; // r14
  unsigned int v13; // eax
  __int16 v14; // cx
  unsigned __int64 j; // rdi
  NTSTATUS v16; // ebx
  wchar_t *v17; // r11
  const char *v18; // r9
  int v19; // r8d
  const wchar_t *v21; // [rsp+80h] [rbp+8h]

  v21 = pszSrc;
  v7 = 0;
  v8 = a4;
  v9 = 0;
  v10 = 0;
  for ( i = 0LL; i < 4; ++i )
  {
    if ( v7 )
      goto LABEL_36;
    v13 = dword_140E0A1A0[6 * i];
    if ( a2 > v13 )
    {
      if ( wcsnicmp(pszSrc, off_140E0A190[3 * i], v13) )
      {
LABEL_21:
        pszSrc = v21;
        continue;
      }
      v10 = a2 + dword_140E0A1A4[6 * i] - dword_140E0A1A0[6 * i];
      if ( v10 > (unsigned int)v8 )
      {
        v16 = -1073741789;
        goto LABEL_37;
      }
      if ( i )
      {
        if ( v9 )
        {
LABEL_20:
          v7 = 1;
          goto LABEL_21;
        }
      }
      else
      {
        v14 = a5;
        for ( j = 0LL; j < 16; j += 2LL )
        {
          if ( *(_WORD *)((char *)&unk_140E0A110 + j * 8) == v14 && *(_WORD *)((char *)&unk_140E0A112 + j * 8) == a6 )
          {
            v16 = RtlStringCchCopyW(a3, v8, L"%systemroot%");
            if ( v16 < 0 )
            {
              v19 = 1043;
              goto LABEL_29;
            }
            v16 = RtlStringCchCatW(v17, v8, (&off_140E0A118)[j]);
            if ( v16 < 0 )
            {
              v18 = "RtlStringCchCatW failed [%x]";
              v19 = 1049;
              goto LABEL_30;
            }
            v16 = RtlStringCchCatW(a3, v8, &v21[dword_140E0A1A0[0]]);
            if ( v16 < 0 )
            {
              v18 = "RtlStringCchCatW failed [%x]";
              v19 = 1055;
              goto LABEL_30;
            }
            v14 = a5;
            v9 = 1;
          }
        }
        if ( v9 )
          goto LABEL_20;
        AslLogCallPrintf(
          1,
          (unsigned int)"AslpEnvResolveVars",
          1066,
          (unsigned int)"Invalid combination of Host/Current processor architectures passed to AslpEnvResolveVars Host: %x4 Current: %x4");
      }
      v16 = RtlStringCchCopyW(a3, v8, (&off_140E0A198)[3 * i]);
      if ( v16 < 0 )
      {
        v19 = 1083;
        goto LABEL_29;
      }
      v16 = RtlStringCchCatW(a3, v8, &v21[dword_140E0A1A0[6 * i]]);
      if ( v16 < 0 )
      {
        v18 = "RtlStringCchCatW failed [%x]";
        v19 = 1089;
        goto LABEL_30;
      }
      goto LABEL_20;
    }
  }
  if ( !v7 )
  {
    v10 = a2;
    if ( a2 > (unsigned int)v8 )
    {
      v16 = -1073741789;
      *a7 = a2;
      return (unsigned int)v16;
    }
    v16 = RtlStringCchCopyW(a3, v8, pszSrc);
    if ( v16 < 0 )
    {
      v19 = 1121;
LABEL_29:
      v18 = "RtlStringCchCopyW failed [%x]";
LABEL_30:
      AslLogCallPrintf(1, (unsigned int)"AslpEnvResolveVars", v19, (_DWORD)v18);
      return (unsigned int)v16;
    }
  }
LABEL_36:
  v16 = 0;
LABEL_37:
  *a7 = v10;
  return (unsigned int)v16;
}
