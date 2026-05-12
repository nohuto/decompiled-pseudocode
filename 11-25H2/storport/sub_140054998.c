/*
 * XREFs of sub_140054998 @ 0x140054998
 * Callers:
 *     sub_14003BC28 @ 0x14003BC28 (sub_14003BC28.c)
 *     sub_140069314 @ 0x140069314 (sub_140069314.c)
 *     sub_14017B158 @ 0x14017B158 (sub_14017B158.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 */

__int64 __fastcall sub_140054998(
        PUNICODE_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        __int64 a3,
        __int64 a4)
{
  USHORT v6; // ax
  WCHAR *v7; // rax

  DestinationString->Length = SourceString->Length;
  v6 = SourceString->Length + 2;
  DestinationString->MaximumLength = v6;
  v7 = (WCHAR *)sub_1400143E0(64LL, v6, 1396990290LL, a4);
  DestinationString->Buffer = v7;
  if ( !v7 )
    return 3221225495LL;
  RtlCopyUnicodeString(DestinationString, SourceString);
  DestinationString->Buffer[(unsigned __int64)DestinationString->Length >> 1] = 0;
  return 0LL;
}
