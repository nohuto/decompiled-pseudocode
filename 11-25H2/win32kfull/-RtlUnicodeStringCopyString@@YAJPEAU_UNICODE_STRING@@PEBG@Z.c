/*
 * XREFs of ?RtlUnicodeStringCopyString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x140145AC8
 * Callers:
 *     ?CreatePredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z @ 0x1401454B0 (-CreatePredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z.c)
 *     ?GetPredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z @ 0x14014561C (-GetPredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z.c)
 *     ?WritePredictionSettings@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z @ 0x1402AE400 (-WritePredictionSettings@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z.c)
 * Callees:
 *     RtlUnicodeStringValidateWorker_0 @ 0x140145B70 (RtlUnicodeStringValidateWorker_0.c)
 */

__int64 __fastcall RtlUnicodeStringCopyString(struct _UNICODE_STRING *a1, const unsigned __int16 *a2, ULONG a3)
{
  __int64 v3; // rcx
  NTSTATUS v4; // r10d
  _WORD *v5; // r8
  unsigned __int64 v6; // rax
  const wchar_t *v7; // r11
  __int64 v8; // r9
  __int16 v9; // dx

  v4 = RtlUnicodeStringValidateWorker_0(a1, (const size_t)a2, a3);
  if ( v4 >= 0 && v3 )
  {
    v5 = *(_WORD **)(v3 + 8);
    v6 = (unsigned __int64)*(unsigned __int16 *)(v3 + 2) >> 1;
  }
  else
  {
    v5 = 0LL;
    v6 = 0LL;
    if ( v4 < 0 )
      return (unsigned int)v4;
  }
  v7 = L"\\Registry\\Machine";
  v8 = 0x7FFFLL;
  v4 = 0;
  v9 = 0;
  if ( v6 )
  {
    while ( v8 )
    {
      if ( *v7 )
      {
        *v5++ = *v7++;
        --v8;
        ++v9;
        if ( --v6 )
          continue;
      }
      if ( v6 || !v8 || !*v7 )
        break;
      goto LABEL_15;
    }
  }
  else
  {
LABEL_15:
    v4 = -2147483643;
  }
  *(_WORD *)v3 = 2 * v9;
  return (unsigned int)v4;
}
