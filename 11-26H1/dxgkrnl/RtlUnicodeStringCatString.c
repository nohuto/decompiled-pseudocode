/*
 * XREFs of RtlUnicodeStringCatString @ 0x14009D9E8
 * Callers:
 *     ?DxgkCreateFeatureDatabase@@YAJPEBU_UNICODE_STRING@@PEBU_DXGKDDI_FEATURE_INTERFACE_2@@_N2PEAPEAUDXGK_FEATURE_DATABASE@@@Z @ 0x140288FF4 (-DxgkCreateFeatureDatabase@@YAJPEBU_UNICODE_STRING@@PEBU_DXGKDDI_FEATURE_INTERFACE_2@@_N2PEAPEAU.c)
 * Callees:
 *     RtlUnicodeStringValidateDestWorker_0 @ 0x140079C90 (RtlUnicodeStringValidateDestWorker_0.c)
 */

NTSTATUS __stdcall RtlUnicodeStringCatString(PUNICODE_STRING DestinationString, NTSTRSAFE_PCWSTR pszSrc)
{
  int v3; // edx
  __int16 v4; // r10
  const wchar_t *v5; // r9
  __int64 v6; // r8
  wchar_t *v7; // r11
  __int16 v8; // ax
  size_t v9; // rcx
  size_t v11; // [rsp+20h] [rbp-28h]
  ULONG v12; // [rsp+28h] [rbp-20h]
  size_t v13; // [rsp+58h] [rbp+10h] BYREF
  size_t v14; // [rsp+60h] [rbp+18h] BYREF
  wchar_t *v15; // [rsp+68h] [rbp+20h] BYREF

  v15 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v3 = RtlUnicodeStringValidateDestWorker_0(DestinationString, &v15, &v13, &v14, v11, v12);
  if ( v3 >= 0 )
  {
    v4 = v14;
    v5 = L"\\Features";
    v6 = 0x7FFFLL;
    v3 = 0;
    v7 = &v15[v14];
    v8 = 0;
    v9 = v13 - v14;
    if ( v13 == v14 )
    {
LABEL_9:
      v3 = -2147483643;
    }
    else
    {
      while ( v6 )
      {
        if ( *v5 )
        {
          *v7++ = *v5++;
          --v6;
          ++v8;
          if ( --v9 )
            continue;
        }
        if ( v9 || !v6 || !*v5 )
          break;
        goto LABEL_9;
      }
    }
    DestinationString->Length = 2 * (v4 + v8);
  }
  return v3;
}
