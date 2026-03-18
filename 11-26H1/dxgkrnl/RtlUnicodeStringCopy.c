/*
 * XREFs of RtlUnicodeStringCopy @ 0x14009DAA0
 * Callers:
 *     ?DxgkCreateFeatureDatabase@@YAJPEBU_UNICODE_STRING@@PEBU_DXGKDDI_FEATURE_INTERFACE_2@@_N2PEAPEAUDXGK_FEATURE_DATABASE@@@Z @ 0x140288FF4 (-DxgkCreateFeatureDatabase@@YAJPEBU_UNICODE_STRING@@PEBU_DXGKDDI_FEATURE_INTERFACE_2@@_N2PEAPEAU.c)
 * Callees:
 *     RtlUnicodeStringValidateDestWorker_0 @ 0x140079C90 (RtlUnicodeStringValidateDestWorker_0.c)
 *     RtlUnicodeStringValidateWorker_0 @ 0x140079D04 (RtlUnicodeStringValidateWorker_0.c)
 */

NTSTATUS __stdcall RtlUnicodeStringCopy(PUNICODE_STRING DestinationString, PCUNICODE_STRING SourceString)
{
  __int16 v3; // bx
  size_t v5; // rdx
  NTSTATUS v6; // r8d
  NTSTATUS v7; // eax
  wchar_t *Buffer; // rdx
  unsigned __int64 v9; // rcx
  size_t v10; // r9
  wchar_t *v11; // r11
  __int16 v12; // r10
  size_t v14; // [rsp+20h] [rbp-18h]
  ULONG v15; // [rsp+28h] [rbp-10h]
  size_t v16; // [rsp+50h] [rbp+18h] BYREF
  wchar_t *v17; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  v17 = 0LL;
  v16 = 0LL;
  v6 = RtlUnicodeStringValidateDestWorker_0(DestinationString, &v17, &v16, 0LL, v14, v15);
  if ( v6 >= 0 )
  {
    v7 = RtlUnicodeStringValidateWorker_0(SourceString, v5, v6);
    v6 = v7;
    if ( v7 >= 0 && SourceString )
    {
      Buffer = SourceString->Buffer;
      v9 = (unsigned __int64)SourceString->Length >> 1;
    }
    else
    {
      Buffer = 0LL;
      v9 = 0LL;
      if ( v7 < 0 )
      {
LABEL_12:
        DestinationString->Length = 2 * v3;
        return v6;
      }
    }
    v10 = v16;
    v6 = 0;
    v11 = v17;
    v12 = 0;
    if ( v16 )
    {
      while ( v9 )
      {
        --v9;
        *v11++ = *Buffer++;
        ++v12;
        if ( !--v10 )
          goto LABEL_9;
      }
    }
    else
    {
LABEL_9:
      if ( v9 )
        v6 = -2147483643;
    }
    v3 = v12;
    goto LABEL_12;
  }
  return v6;
}
