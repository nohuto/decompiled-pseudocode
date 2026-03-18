/*
 * XREFs of RtlpGetNameFromLangInfoNode @ 0x14061D784
 * Callers:
 *     _RtlpMuiRegValidateInstalled @ 0x1408AA5F8 (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     RtlStringCbCopyW @ 0x140430A90 (RtlStringCbCopyW.c)
 *     RtlLCIDToCultureName @ 0x140B5CEE0 (RtlLCIDToCultureName.c)
 */

__int64 __fastcall RtlpGetNameFromLangInfoNode(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rax
  __int64 v6; // r8
  unsigned __int16 Length; // si
  __int16 v8; // ax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0;
  if ( a1 && a2 && a3 )
  {
    v5 = *(__int16 *)(a2 + 6);
    if ( (__int16)v5 <= 0 )
    {
      v8 = *(_WORD *)(a2 + 4);
      if ( v8 != 4096 && v8 != 5120 )
        return (unsigned __int8)RtlLCIDToCultureName(*(unsigned __int16 *)(a2 + 4), a3) == 0 ? 0xC00000E5 : 0;
    }
    else
    {
      v6 = *(_QWORD *)(a1 + 32);
      DestinationString = 0LL;
      RtlInitUnicodeString(
        &DestinationString,
        (PCWSTR)(*(_QWORD *)(v6 + 24) + 2LL * *(__int16 *)(*(_QWORD *)(v6 + 16) + 2 * v5)));
      Length = DestinationString.Length;
      if ( DestinationString.Length <= *(_WORD *)(a3 + 2)
        && RtlStringCbCopyW(*(NTSTRSAFE_PWSTR *)(a3 + 8), *(unsigned __int16 *)(a3 + 2), DestinationString.Buffer) >= 0 )
      {
        *(_WORD *)a3 = Length;
        return v3;
      }
    }
    return (unsigned int)-1073741595;
  }
  return 3221225485LL;
}
