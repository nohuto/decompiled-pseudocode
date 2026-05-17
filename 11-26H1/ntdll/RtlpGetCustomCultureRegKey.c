/*
 * XREFs of RtlpGetCustomCultureRegKey @ 0x1800010D8
 * Callers:
 *     RtlpIsCustomLocale @ 0x180001008 (RtlpIsCustomLocale.c)
 * Callees:
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     NtOpenKey @ 0x18015F180 (NtOpenKey.c)
 */

__int64 RtlpGetCustomCultureRegKey()
{
  HANDLE Handle; // [rsp+30h] [rbp+8h] BYREF

  Handle = 0LL;
  if ( !gCustomCultureRegKey
    && (int)NtOpenKey(&Handle, 1LL, &`RtlpGetCustomCultureRegKey'::`2'::ObjAttribute) >= 0
    && _InterlockedCompareExchange64(&gCustomCultureRegKey, (signed __int64)Handle, 0LL) )
  {
    NtClose(Handle);
  }
  return gCustomCultureRegKey;
}
