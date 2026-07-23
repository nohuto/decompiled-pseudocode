/*
 * XREFs of LdrpQueryValueKey @ 0x140B3E948
 * Callers:
 *     RtlpMuiRegAddAlternateCodePage @ 0x1404F1678 (RtlpMuiRegAddAlternateCodePage.c)
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x140724EE4 (_RtlpMuiRegLoadInstalledFromKey.c)
 *     RtlpLoadInstallLanguageFallback @ 0x1408ADCD8 (RtlpLoadInstallLanguageFallback.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x1408ADFF8 (RtlpLoadPolicyLanguageSpec.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x1408B01E4 (_RtlpMuiRegPopulateBaseLanguages.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x140B2FE70 (_RtlpMuiRegInitLIPLanguage.c)
 * Callees:
 *     ZwQueryValueKey @ 0x1407282A0 (ZwQueryValueKey.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall LdrpQueryValueKey(HANDLE KeyHandle, PUNICODE_STRING ValueName, _DWORD *a3, void *a4, ULONG *a5)
{
  ULONG *v5; // rbx
  ULONG v10; // ebp
  ULONG Length; // ebp
  _DWORD *Pool2; // rsi
  unsigned int v13; // edi
  NTSTATUS v15; // eax
  ULONG v16; // eax
  ULONG ResultLength; // [rsp+78h] [rbp+20h] BYREF

  v5 = a5;
  if ( !a4 )
  {
    if ( !a5 )
    {
      ResultLength = 0;
      Length = 12;
      goto LABEL_4;
    }
LABEL_3:
    v10 = *a5;
    ResultLength = 0;
    Length = v10 + 12;
    if ( !Length )
      return (unsigned int)-1073741670;
LABEL_4:
    Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL);
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    v15 = ZwQueryValueKey(KeyHandle, ValueName, KeyValuePartialInformation, Pool2, Length, &ResultLength);
    v13 = v15;
    if ( v15 < 0 )
    {
      if ( v15 != -2147483643 )
      {
LABEL_22:
        ExFreePoolWithTag(Pool2, 0);
        return v13;
      }
    }
    else if ( a4 )
    {
      if ( !v5 )
        goto LABEL_20;
      v16 = Pool2[2];
      if ( v16 <= *v5 )
      {
        if ( v16 <= Length )
          memmove(a4, Pool2 + 3, (unsigned int)Pool2[2]);
      }
      else
      {
        v13 = -2147483643;
      }
LABEL_19:
      *v5 = Pool2[2];
LABEL_20:
      if ( a3 )
        *a3 = Pool2[1];
      goto LABEL_22;
    }
    if ( !v5 )
      goto LABEL_20;
    goto LABEL_19;
  }
  if ( a5 )
    goto LABEL_3;
  return 3221225485LL;
}
