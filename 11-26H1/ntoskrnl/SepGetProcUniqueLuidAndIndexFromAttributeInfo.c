/*
 * XREFs of SepGetProcUniqueLuidAndIndexFromAttributeInfo @ 0x1403CD3FC
 * Callers:
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x1403CC2F0 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SepGetProcUniqueLuidAndIndexFromTokenEx @ 0x1404BADAC (SepGetProcUniqueLuidAndIndexFromTokenEx.c)
 *     SepValidateAndCopyGlobalEntry @ 0x140529F94 (SepValidateAndCopyGlobalEntry.c)
 * Callees:
 *     AuthzBasepQuerySecurityAttributeAndValues @ 0x1402B2540 (AuthzBasepQuerySecurityAttributeAndValues.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall SepGetProcUniqueLuidAndIndexFromAttributeInfo(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  int SecurityAttributeAndValues; // r9d
  _BYTE v8[8]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v9; // [rsp+28h] [rbp-70h]
  __int16 v10; // [rsp+30h] [rbp-68h]
  __int16 v11; // [rsp+32h] [rbp-66h]
  wchar_t *v12; // [rsp+38h] [rbp-60h]
  _DWORD *v13; // [rsp+50h] [rbp-48h]

  SecurityAttributeAndValues = -1073741275;
  if ( (RtlpBootStatHandleLock.SchedulerApcFill3[60] & 3) == 3 )
  {
    memset_0(v8, 0, 0x48uLL);
    v10 = SepProcUniqueAttributeName;
    v11 = word_140E08742;
    v12 = off_140E08748;
    v9 = a1;
    SecurityAttributeAndValues = AuthzBasepQuerySecurityAttributeAndValues((__int64)v8);
    if ( SecurityAttributeAndValues >= 0 )
    {
      *a2 = *v13;
      SecurityAttributeAndValues = AuthzBasepQuerySecurityAttributeAndValues((__int64)v8);
      if ( SecurityAttributeAndValues >= 0 )
        *a3 = *(_QWORD *)v13;
    }
  }
  return (unsigned int)SecurityAttributeAndValues;
}
