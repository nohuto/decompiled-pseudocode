/*
 * XREFs of RtlCreateRegistryKey @ 0x180141CC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpGetRegistryHandle @ 0x18005A6B8 (RtlpGetRegistryHandle.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 */

__int64 __fastcall RtlCreateRegistryKey(int a1, const wchar_t *a2)
{
  __int64 result; // rax
  HANDLE Handle; // [rsp+40h] [rbp+18h] BYREF

  Handle = 0LL;
  result = RtlpGetRegistryHandle(a1, a2, 1, (const wchar_t **)&Handle);
  if ( (int)result >= 0 )
  {
    if ( (a1 & 0x40000000) == 0 )
      NtClose(Handle);
    return 0LL;
  }
  return result;
}
