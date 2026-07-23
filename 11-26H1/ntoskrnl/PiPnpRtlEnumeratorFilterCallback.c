/*
 * XREFs of PiPnpRtlEnumeratorFilterCallback @ 0x140A3C880
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140456BE0 (RtlInitUnicodeStringEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlPrefixUnicodeString @ 0x140A3CC90 (RtlPrefixUnicodeString.c)
 */

char __fastcall PiPnpRtlEnumeratorFilterCallback(__int64 a1, const WCHAR *a2, __int64 a3, __int64 a4)
{
  char v7; // di
  PCUNICODE_STRING v8; // rax
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-28h] BYREF
  UNICODE_STRING String2; // [rsp+58h] [rbp-18h] BYREF

  v7 = 0;
  String2 = 0LL;
  if ( !*(_BYTE *)(a4 + 8)
    || (DestinationString = 0LL, RtlInitUnicodeStringEx(&DestinationString, a2) >= 0)
    && *(_QWORD *)(a1 + 264)
    && (int)guard_dispatch_icall_no_overrides(a1, (__int64)&DestinationString) >= 0 )
  {
    v8 = *(PCUNICODE_STRING *)a4;
    if ( !*(_QWORD *)a4
      || v8->Length < 2u
      || !*v8->Buffer
      || RtlInitUnicodeStringEx(&String2, a2) >= 0 && RtlPrefixUnicodeString(*(PCUNICODE_STRING *)a4, &String2, 1u) )
    {
      v7 = 1;
      if ( *(_QWORD *)(a4 + 16) )
        return guard_dispatch_icall_no_overrides(a1, (__int64)a2);
    }
  }
  return v7;
}
