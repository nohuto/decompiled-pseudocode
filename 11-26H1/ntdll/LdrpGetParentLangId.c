/*
 * XREFs of LdrpGetParentLangId @ 0x18004DD38
 * Callers:
 *     LdrpLoadResourceFromAlternativeModule @ 0x180019070 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrpSearchResourceSection_U @ 0x180019960 (LdrpSearchResourceSection_U.c)
 *     LdrResFallbackLangList @ 0x180054C10 (LdrResFallbackLangList.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlGetParentLocaleName @ 0x18004EDD0 (RtlGetParentLocaleName.c)
 *     RtlLocaleNameToLcid @ 0x18004FCE0 (RtlLocaleNameToLcid.c)
 *     RtlLcidToLocaleName @ 0x1800515E0 (RtlLcidToLocaleName.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpGetParentLangId(unsigned __int16 a1, _WORD *a2)
{
  LCID v3; // ebx
  NTSTATUS v4; // eax
  wchar_t *Buffer; // rsi
  NTSTATUS v6; // eax
  NTSTATUS v7; // ebx
  wchar_t *v8; // rdi
  DWORD lcid; // [rsp+20h] [rbp-49h] BYREF
  _UNICODE_STRING ParentLocaleName; // [rsp+28h] [rbp-41h] BYREF
  _UNICODE_STRING LocaleName; // [rsp+38h] [rbp-31h] BYREF
  _BYTE v13[32]; // [rsp+50h] [rbp-19h] BYREF
  _BYTE v14[32]; // [rsp+70h] [rbp+7h] BYREF

  lcid = 0;
  ParentLocaleName = 0LL;
  LocaleName = 0LL;
  if ( !a2 )
    return 3221225485LL;
  v3 = a1;
  *a2 = 0;
  LocaleName.Buffer = (wchar_t *)v14;
  LocaleName.MaximumLength = 30;
  v4 = RtlLcidToLocaleName(a1, &LocaleName, 2u, 0);
  if ( v4 >= 0
    || v4 == -1073741789
    && (LocaleName.Buffer = 0LL, LocaleName.MaximumLength = 0, RtlLcidToLocaleName(v3, &LocaleName, 2u, 1u) >= 0) )
  {
    Buffer = LocaleName.Buffer;
    ParentLocaleName.MaximumLength = 30;
    ParentLocaleName.Buffer = (wchar_t *)v13;
    v6 = RtlGetParentLocaleName(LocaleName.Buffer, &ParentLocaleName, 6u, 0);
    v7 = v6;
    if ( v6 >= 0
      || v6 == -1073741789
      && (ParentLocaleName.Buffer = 0LL,
          ParentLocaleName.MaximumLength = 0,
          v7 = RtlGetParentLocaleName(Buffer, &ParentLocaleName, 6u, 1u),
          v7 >= 0) )
    {
      if ( ParentLocaleName.Length )
      {
        v8 = ParentLocaleName.Buffer;
        v7 = RtlLocaleNameToLcid(ParentLocaleName.Buffer, &lcid, 3u);
        if ( v7 >= 0 )
          *a2 = lcid;
        goto LABEL_7;
      }
    }
  }
  else
  {
    Buffer = LocaleName.Buffer;
    v7 = -1073741811;
  }
  v8 = ParentLocaleName.Buffer;
LABEL_7:
  if ( v8 != (wchar_t *)v13 )
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v8);
  if ( Buffer != (wchar_t *)v14 )
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, Buffer);
  return (unsigned int)v7;
}
