/*
 * XREFs of RtlpHpApplyGlobalSegmentHeapConfigurations @ 0x180144FA4
 * Callers:
 *     RtlSetGlobalHeapFeatures @ 0x180144518 (RtlSetGlobalHeapFeatures.c)
 * Callees:
 *     RtlpHpPgSamplingProcessInitialize @ 0x18011D254 (RtlpHpPgSamplingProcessInitialize.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     NtOpenKey @ 0x18015F180 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x18015F220 (NtQueryValueKey.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

NTSTATUS RtlpHpApplyGlobalSegmentHeapConfigurations()
{
  NTSTATUS result; // eax
  int v1; // [rsp+30h] [rbp-9h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-1h] BYREF
  _QWORD v3[4]; // [rsp+40h] [rbp+7h] BYREF
  __int128 v4; // [rsp+60h] [rbp+27h]
  __int128 v5; // [rsp+70h] [rbp+37h] BYREF
  int v6; // [rsp+80h] [rbp+47h]

  v3[0] = 48LL;
  v1 = 0;
  v6 = 0;
  Handle = 0LL;
  v3[1] = 0LL;
  v3[3] = 64LL;
  v3[2] = &unk_180172B00;
  v5 = 0LL;
  v4 = 0LL;
  result = NtOpenKey(&Handle, 1LL, v3);
  if ( result >= 0 )
  {
    result = NtQueryValueKey(Handle, &unk_180172AE0, 2LL, &v5, 20, &v1);
    if ( result >= 0 && DWORD2(v5) == 4 )
    {
      if ( (BYTE12(v5) & 3) != 0 )
      {
        if ( (BYTE12(v5) & 3) == 1 )
        {
          RtlpLowFragHeapGlobalFlags |= 0x10u;
        }
        else if ( (BYTE12(v5) & 3) == 3 )
        {
          RtlpLowFragHeapGlobalFlags |= 0x30u;
        }
      }
      else
      {
        RtlpLowFragHeapGlobalFlags |= 8u;
      }
      if ( (BYTE12(v5) & 4) != 0 )
      {
        result = NtQueryValueKey(Handle, L"\"$", 2LL, &v5, 20, &v1);
        if ( result >= 0 && DWORD2(v5) == 4 )
          result = (unsigned int)RtlpHpPgSamplingProcessInitialize(SBYTE12(v5));
      }
    }
  }
  if ( Handle )
    return NtClose(Handle);
  return result;
}
