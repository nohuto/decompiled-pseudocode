/*
 * XREFs of CmVirtualKCBToRealPath @ 0x140AF7040
 * Callers:
 *     CmpDoQueryKeyName @ 0x1402606D0 (CmpDoQueryKeyName.c)
 *     CmpReportAuditVirtualizationEvent @ 0x140861774 (CmpReportAuditVirtualizationEvent.c)
 *     CmQueryKey @ 0x1408CBC30 (CmQueryKey.c)
 *     CmpVEExecuteOpenLogic @ 0x1408DF920 (CmpVEExecuteOpenLogic.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1408F9CF0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x140AF6E78 (CmpVEExecuteVirtualStoreParseLogic.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x14041FFA0 (RtlAppendUnicodeStringToString.c)
 *     CmpFreeTransientPoolWithTag @ 0x140470A10 (CmpFreeTransientPoolWithTag.c)
 *     CmpConstructName @ 0x1408CB970 (CmpConstructName.c)
 *     RtlFreeAnsiString @ 0x140A169F0 (RtlFreeAnsiString.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall CmVirtualKCBToRealPath(__int64 a1, UNICODE_STRING *a2)
{
  NTSTATUS appended; // ebx
  UNICODE_STRING *v4; // rsi
  __int64 v5; // rdi
  int v6; // edx
  unsigned __int16 v7; // r15
  __int64 Pool2; // rax
  unsigned __int16 Length; // ax
  UNICODE_STRING Source; // [rsp+20h] [rbp-38h] BYREF

  appended = -1073741670;
  if ( !CmpVEEnabled )
    return 3221225485LL;
  v4 = (UNICODE_STRING *)CmpConstructName(a1, (__int64)a2);
  if ( v4 )
  {
    LODWORD(v5) = 0;
    v6 = 5;
    while ( v4->Buffer[(unsigned int)v5] != 92 || --v6 )
    {
      v5 = (unsigned int)(v5 + 1);
      if ( 2 * v5 >= (unsigned __int64)v4->Length )
      {
        appended = -1073741811;
        goto LABEL_9;
      }
    }
    v7 = v4->Length + 2 * (9 - v5);
    Pool2 = ExAllocatePool2(0x100uLL);
    a2->Buffer = (wchar_t *)Pool2;
    if ( Pool2 )
    {
      a2->MaximumLength = v7;
      a2->Length = 0;
      Source = *v4;
      Source.Length = 18;
      appended = RtlAppendUnicodeStringToString(a2, &Source);
      if ( appended < 0
        || (Length = v4->Length,
            Source.Buffer += (unsigned int)v5,
            Source.Length = Length - 2 * v5,
            appended = RtlAppendUnicodeStringToString(a2, &Source),
            appended < 0) )
      {
        RtlFreeAnsiString(a2);
      }
    }
LABEL_9:
    CmpFreeTransientPoolWithTag(v4, 0x624E4D43u);
  }
  return (unsigned int)appended;
}
