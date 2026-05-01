/*
 * XREFs of AslpEnvResolveVars @ 0x1800A1B48
 * Callers:
 *     AslEnvExpandStrings2 @ 0x1800A13C0 (AslEnvExpandStrings2.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x18006297C (RtlStringCchCopyW.c)
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     RtlStringCchCatW @ 0x18008D074 (RtlStringCchCatW.c)
 */

__int64 __fastcall AslpEnvResolveVars(
        const wchar_t *a1,
        unsigned int a2,
        _WORD *a3,
        unsigned int a4,
        unsigned __int16 a5,
        unsigned __int16 a6,
        unsigned int *a7)
{
  int v7; // ebx
  __int64 v8; // r12
  int v9; // r15d
  unsigned int v10; // esi
  unsigned __int64 i; // r14
  unsigned int v13; // eax
  unsigned __int64 j; // rdi
  int v15; // eax
  _WORD *v16; // r11
  unsigned int v17; // ebx
  const char *v18; // r9
  __int64 v19; // r8
  __int64 v21; // [rsp+20h] [rbp-58h]
  const wchar_t *v22; // [rsp+80h] [rbp+8h]

  v22 = a1;
  v7 = 0;
  v8 = a4;
  v9 = 0;
  v10 = 0;
  for ( i = 0LL; i < 4; ++i )
  {
    if ( v7 )
      goto LABEL_38;
    v13 = dword_1800E1530[6 * i];
    if ( a2 > v13 )
    {
      if ( !_wcsnicmp(a1, off_1800E1520[3 * i], v13) )
      {
        v10 = a2 + dword_1800E1534[6 * i] - dword_1800E1530[6 * i];
        if ( v10 > (unsigned int)v8 )
        {
          v17 = -1073741789;
          goto LABEL_39;
        }
        if ( i )
        {
          if ( !v9 )
            goto LABEL_20;
        }
        else
        {
          for ( j = 0LL; j < 16; j += 2LL )
          {
            if ( *(_WORD *)((char *)&unk_1800E14A0 + j * 8) == a5 && *(_WORD *)((char *)&unk_1800E14A2 + j * 8) == a6 )
            {
              v15 = RtlStringCchCopyW(a3, v8, (__int64)L"%systemroot%");
              v17 = v15;
              if ( v15 < 0 )
              {
                v19 = 1043LL;
                goto LABEL_28;
              }
              v15 = RtlStringCchCatW(v16, v8, (__int64)(&off_1800E14A8)[j]);
              v17 = v15;
              if ( v15 < 0 )
              {
                v18 = "RtlStringCchCatW failed [%x]";
                v19 = 1049LL;
                goto LABEL_29;
              }
              v15 = RtlStringCchCatW(a3, v8, (__int64)&v22[dword_1800E1530[0]]);
              v17 = v15;
              if ( v15 < 0 )
              {
                v18 = "RtlStringCchCatW failed [%x]";
                v19 = 1055LL;
                goto LABEL_29;
              }
              v9 = 1;
            }
          }
          if ( v9 )
            goto LABEL_22;
          AslLogCallPrintf(
            1LL,
            "AslpEnvResolveVars",
            1066LL,
            "Invalid combination of Host/Current processor architectures passed to AslpEnvResolveVars Host: %x4 Current: %x4",
            a5,
            a6);
LABEL_20:
          v15 = RtlStringCchCopyW(a3, v8, (__int64)(&off_1800E1528)[3 * i]);
          v17 = v15;
          if ( v15 < 0 )
          {
            v19 = 1083LL;
LABEL_28:
            v18 = "RtlStringCchCopyW failed [%x]";
LABEL_29:
            LODWORD(v21) = v15;
            AslLogCallPrintf(1LL, "AslpEnvResolveVars", v19, v18, v21);
            return v17;
          }
          v15 = RtlStringCchCatW(a3, v8, (__int64)&v22[dword_1800E1530[6 * i]]);
          v17 = v15;
          if ( v15 < 0 )
          {
            v18 = "RtlStringCchCatW failed [%x]";
            v19 = 1089LL;
            goto LABEL_29;
          }
        }
LABEL_22:
        v7 = 1;
      }
      a1 = v22;
      continue;
    }
  }
  if ( !v7 )
  {
    v10 = a2;
    if ( a2 > (unsigned int)v8 )
    {
      v17 = -1073741789;
      *a7 = a2;
      return v17;
    }
    v15 = RtlStringCchCopyW(a3, v8, (__int64)a1);
    v17 = v15;
    if ( v15 < 0 )
    {
      v19 = 1121LL;
      goto LABEL_28;
    }
  }
LABEL_38:
  v17 = 0;
LABEL_39:
  *a7 = v10;
  return v17;
}
