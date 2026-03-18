/*
 * XREFs of RtlConvertSidToUnicodeString @ 0x140925970
 * Callers:
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x1406D3AF8 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     RtlpGetTokenNamedObjectPath @ 0x14077E4E0 (RtlpGetTokenNamedObjectPath.c)
 *     AdtpBuildSidListString @ 0x140890164 (AdtpBuildSidListString.c)
 *     CmpGetVirtualizationID @ 0x1408B1274 (CmpGetVirtualizationID.c)
 *     RtlFormatCurrentUserKeyPath @ 0x140925F40 (RtlFormatCurrentUserKeyPath.c)
 *     PiDqOpenUserObjectRegKey @ 0x1409920EC (PiDqOpenUserObjectRegKey.c)
 *     SepValidateReferencedCachedHandles @ 0x140A293B8 (SepValidateReferencedCachedHandles.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140A2AEE0 (_SysCtxRegOpenCurrentUserKey.c)
 *     LocalConvertSidToStringSidW @ 0x140A633E0 (LocalConvertSidToStringSidW.c)
 *     PspReadUserQuotaLimits @ 0x140AB9230 (PspReadUserQuotaLimits.c)
 *     ExpWnfGetPermanentPerUserDataStoreHandle @ 0x140AFA6BC (ExpWnfGetPermanentPerUserDataStoreHandle.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x140419A90 (RtlCopyUnicodeString.c)
 *     wcscat_s @ 0x14053CA60 (wcscat_s.c)
 *     wcscpy_s @ 0x14053CB00 (wcscpy_s.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlValidSid @ 0x140924370 (RtlValidSid.c)
 *     RtlIntegerToUnicode @ 0x140925BF0 (RtlIntegerToUnicode.c)
 *     RtlCreateUnicodeString @ 0x140A70410 (RtlCreateUnicodeString.c)
 *     RtlLargeIntegerToUnicode @ 0x140B515F4 (RtlLargeIntegerToUnicode.c)
 */

NTSTATUS __stdcall RtlConvertSidToUnicodeString(
        PUNICODE_STRING UnicodeString,
        PSID Sid,
        BOOLEAN AllocateDestinationString)
{
  _BYTE *v6; // rbx
  NTSTATUS result; // eax
  unsigned __int8 i; // di
  unsigned int v9; // ebx
  NTSTATUS v10; // ecx
  BOOLEAN v11; // al
  int v12; // eax
  __int64 v13; // rdx
  _DWORD v14[2]; // [rsp+20h] [rbp-258h] BYREF
  UNICODE_STRING SourceString; // [rsp+28h] [rbp-250h] BYREF
  wchar_t Dst; // [rsp+40h] [rbp-238h] BYREF
  _BYTE v17[4]; // [rsp+48h] [rbp-230h] BYREF
  _BYTE v18[496]; // [rsp+4Ch] [rbp-22Ch] BYREF
  _BYTE v19[2]; // [rsp+23Ch] [rbp-3Ch] BYREF
  _BYTE v20[2]; // [rsp+23Eh] [rbp-3Ah] BYREF

  SourceString = 0LL;
  if ( RtlValidSid(Sid) != 1 || *(_BYTE *)Sid != 1 )
    return -1073741704;
  wcscpy_s(&Dst, 0x100uLL, L"S-1-");
  v6 = v17;
  if ( *((_BYTE *)Sid + 2) || *((_BYTE *)Sid + 3) )
  {
    wcscat_s(&Dst, 0x100uLL, L"0x");
    v6 = v18;
    v12 = *((unsigned __int8 *)Sid + 5);
    v14[1] = *((unsigned __int8 *)Sid + 3) + (*((unsigned __int8 *)Sid + 2) << 8);
    v14[0] = *((unsigned __int8 *)Sid + 7)
           + (*((unsigned __int8 *)Sid + 6) << 8)
           + (v12 << 16)
           + (*((unsigned __int8 *)Sid + 4) << 24);
    result = ((__int64 (__fastcall *)(_DWORD *, __int64, __int64, _BYTE *))RtlLargeIntegerToUnicode)(
               v14,
               v13,
               250LL,
               v18);
  }
  else
  {
    result = RtlIntegerToUnicode(
               *((unsigned __int8 *)Sid + 7)
             + (*((unsigned __int8 *)Sid + 6) << 8)
             + (*((unsigned __int8 *)Sid + 5) << 16)
             + (*((unsigned __int8 *)Sid + 4) << 24),
               10LL,
               252LL,
               v17);
  }
  if ( result >= 0 )
  {
    for ( i = 0; i < *((_BYTE *)Sid + 1); ++i )
    {
      for ( ; v6 < v19; v6 += 2 )
      {
        if ( !*(_WORD *)v6 )
          break;
      }
      *(_WORD *)v6 = 45;
      v6 += 2;
      result = RtlIntegerToUnicode(
                 *((unsigned int *)Sid + i + 2),
                 10LL,
                 256 - (unsigned int)((v6 - (_BYTE *)&Dst) >> 1),
                 v6);
      if ( result < 0 )
        return result;
    }
    if ( AllocateDestinationString )
    {
      v11 = RtlCreateUnicodeString(UnicodeString, &Dst);
      v10 = 0;
      if ( !v11 )
        return -1073741801;
    }
    else
    {
      for ( ; v6 < v20; v6 += 2 )
      {
        if ( !*(_WORD *)v6 )
          break;
      }
      v9 = 2 * ((v6 - (_BYTE *)&Dst) >> 1);
      if ( v9 >= UnicodeString->MaximumLength )
      {
        return -2147483643;
      }
      else
      {
        SourceString.Length = v9;
        SourceString.Buffer = &Dst;
        SourceString.MaximumLength = v9 + 2;
        RtlCopyUnicodeString(UnicodeString, &SourceString);
        return 0;
      }
    }
    return v10;
  }
  return result;
}
