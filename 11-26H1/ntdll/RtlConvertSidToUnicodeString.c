/*
 * XREFs of RtlConvertSidToUnicodeString @ 0x18003CD70
 * Callers:
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x18000B504 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     RtlFormatCurrentUserKeyPath @ 0x18003C8F0 (RtlFormatCurrentUserKeyPath.c)
 *     RtlpGetTokenNamedObjectPath @ 0x180058660 (RtlpGetTokenNamedObjectPath.c)
 *     WerEscalationLazyInit @ 0x1800D6160 (WerEscalationLazyInit.c)
 *     AVrfpAppendCurrentUserSid @ 0x18010C5FC (AVrfpAppendCurrentUserSid.c)
 * Callees:
 *     RtlIntegerToUnicode @ 0x18003D010 (RtlIntegerToUnicode.c)
 *     RtlValidSid @ 0x18003D140 (RtlValidSid.c)
 *     RtlCreateUnicodeString @ 0x18003DC10 (RtlCreateUnicodeString.c)
 *     RtlLargeIntegerToUnicode @ 0x18010F9D8 (RtlLargeIntegerToUnicode.c)
 *     wcscat_s @ 0x180134290 (wcscat_s.c)
 *     wcscpy_s @ 0x180134330 (wcscpy_s.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

NTSTATUS __stdcall RtlConvertSidToUnicodeString(
        PUNICODE_STRING UnicodeString,
        PSID Sid,
        BOOLEAN AllocateDestinationString)
{
  _BYTE *v6; // rbx
  NTSTATUS result; // eax
  unsigned __int8 i; // di
  char v9; // al
  NTSTATUS v10; // edx
  int v11; // eax
  __int64 v12; // rdx
  unsigned int MaximumLength; // ecx
  unsigned int v14; // ebx
  wchar_t *Buffer; // rdi
  unsigned __int64 v16; // rbx
  size_t v17; // r8
  wchar_t *v18; // rcx
  _DWORD v19[4]; // [rsp+20h] [rbp-248h] BYREF
  wchar_t Destination; // [rsp+30h] [rbp-238h] BYREF
  _BYTE v21[4]; // [rsp+38h] [rbp-230h] BYREF
  _BYTE v22[496]; // [rsp+3Ch] [rbp-22Ch] BYREF
  _BYTE v23[2]; // [rsp+22Ch] [rbp-3Ch] BYREF
  _BYTE v24[2]; // [rsp+22Eh] [rbp-3Ah] BYREF

  if ( (unsigned __int8)RtlValidSid(Sid) != 1 || *(_BYTE *)Sid != 1 )
    return -1073741704;
  wcscpy_s(&Destination, 0x100uLL, L"S-1-");
  v6 = v21;
  if ( *((_BYTE *)Sid + 2) || *((_BYTE *)Sid + 3) )
  {
    wcscat_s(&Destination, 0x100uLL, L"0x");
    v6 = v22;
    v11 = *((unsigned __int8 *)Sid + 5);
    v19[1] = (*((unsigned __int8 *)Sid + 2) << 8) + *((unsigned __int8 *)Sid + 3);
    v19[0] = *((unsigned __int8 *)Sid + 7)
           + (*((unsigned __int8 *)Sid + 6) << 8)
           + (v11 << 16)
           + (*((unsigned __int8 *)Sid + 4) << 24);
    result = ((__int64 (__fastcall *)(_DWORD *, __int64, __int64, _BYTE *))RtlLargeIntegerToUnicode)(
               v19,
               v12,
               250LL,
               v22);
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
               v21);
  }
  if ( result >= 0 )
  {
    for ( i = 0; i < *((_BYTE *)Sid + 1); ++i )
    {
      for ( ; v6 < v23; v6 += 2 )
      {
        if ( !*(_WORD *)v6 )
          break;
      }
      *(_WORD *)v6 = 45;
      v6 += 2;
      result = RtlIntegerToUnicode(
                 *((unsigned int *)Sid + i + 2),
                 10LL,
                 256 - (unsigned int)((v6 - (_BYTE *)&Destination) >> 1),
                 v6);
      if ( result < 0 )
        return result;
    }
    if ( AllocateDestinationString )
    {
      v9 = RtlCreateUnicodeString(UnicodeString, &Destination);
      v10 = 0;
      if ( !v9 )
        return -1073741801;
    }
    else
    {
      for ( ; v6 < v24; v6 += 2 )
      {
        if ( !*(_WORD *)v6 )
          break;
      }
      MaximumLength = UnicodeString->MaximumLength;
      v14 = 2 * ((v6 - (_BYTE *)&Destination) >> 1);
      if ( v14 >= MaximumLength )
      {
        return -2147483643;
      }
      else
      {
        Buffer = UnicodeString->Buffer;
        if ( (unsigned __int16)v14 <= (unsigned __int16)MaximumLength )
          MaximumLength = (unsigned __int16)v14;
        v16 = MaximumLength;
        v17 = MaximumLength;
        v18 = UnicodeString->Buffer;
        UnicodeString->Length = v16;
        memmove(v18, &Destination, v17);
        v10 = 0;
        if ( (unsigned __int64)UnicodeString->Length + 2 <= UnicodeString->MaximumLength )
          Buffer[v16 >> 1] = 0;
      }
    }
    return v10;
  }
  return result;
}
