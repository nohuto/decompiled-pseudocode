/*
 * XREFs of KsepGetModuleInfoByName @ 0x1407C1758
 * Callers:
 *     KsepResolveShimHooks @ 0x1407C0644 (KsepResolveShimHooks.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlInitAnsiString @ 0x140466120 (RtlInitAnsiString.c)
 *     RtlCompareString @ 0x14097C2A0 (RtlCompareString.c)
 *     RtlUnicodeStringToAnsiString @ 0x14097CC00 (RtlUnicodeStringToAnsiString.c)
 *     RtlFreeAnsiString @ 0x140A169F0 (RtlFreeAnsiString.c)
 */

__int64 __fastcall KsepGetModuleInfoByName(PCWSTR SourceString, unsigned int *a2, _QWORD *a3)
{
  NTSTATUS v5; // ebx
  unsigned int i; // ebx
  const CHAR *v7; // rbp
  _STRING DestinationString; // [rsp+20h] [rbp-38h] BYREF
  UNICODE_STRING SourceStringa; // [rsp+30h] [rbp-28h] BYREF
  STRING String1; // [rsp+40h] [rbp-18h] BYREF

  DestinationString = 0LL;
  String1 = 0LL;
  SourceStringa = 0LL;
  if ( !SourceString || !a3 || !a2 )
    return 3221225485LL;
  RtlInitUnicodeString(&SourceStringa, SourceString);
  v5 = RtlUnicodeStringToAnsiString(&DestinationString, &SourceStringa, 1u);
  if ( v5 >= 0 )
  {
    for ( i = 0; i < *a2; ++i )
    {
      v7 = (const CHAR *)&a2[74 * i + 2];
      RtlInitAnsiString(&String1, &v7[*((unsigned __int16 *)v7 + 19) + 40]);
      if ( !RtlCompareString(&String1, &DestinationString, 1u) )
      {
        v5 = 0;
        *a3 = *((_QWORD *)v7 + 2);
        goto LABEL_11;
      }
    }
    v5 = -1073741275;
  }
LABEL_11:
  if ( DestinationString.Buffer )
    RtlFreeAnsiString((PUNICODE_STRING)&DestinationString);
  return (unsigned int)v5;
}
