/*
 * XREFs of RtlpGetCustomCultureRegKey @ 0x18004C810
 * Callers:
 *     RtlpIsCustomLocale @ 0x18004C740 (RtlpIsCustomLocale.c)
 * Callees:
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     NtOpenKey @ 0x18015F080 (NtOpenKey.c)
 */

__int64 RtlpGetCustomCultureRegKey()
{
  HANDLE KeyHandle; // [rsp+30h] [rbp+8h] BYREF

  KeyHandle = 0LL;
  if ( !gCustomCultureRegKey
    && NtOpenKey(&KeyHandle, 1u, (POBJECT_ATTRIBUTES)&`RtlpGetCustomCultureRegKey'::`2'::ObjAttribute) >= 0
    && _InterlockedCompareExchange64(&gCustomCultureRegKey, (signed __int64)KeyHandle, 0LL) )
  {
    NtClose(KeyHandle);
  }
  return gCustomCultureRegKey;
}
