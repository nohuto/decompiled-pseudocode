/*
 * XREFs of ?DpiAcpiDoesDepContainMux@@YAEPEAU_FDO_CONTEXT@@PEAU_ACPI_EVAL_OUTPUT_BUFFER_V1@@@Z @ 0x1400932E8
 * Callers:
 *     DpiAcpiPrepareDisplayMuxSupport @ 0x1402533C0 (DpiAcpiPrepareDisplayMuxSupport.c)
 * Callees:
 *     DpiCompareAcpiPaths @ 0x1400934D8 (DpiCompareAcpiPaths.c)
 */

char __fastcall DpiAcpiDoesDepContainMux(struct _FDO_CONTEXT *a1, struct _ACPI_EVAL_OUTPUT_BUFFER_V1 *a2)
{
  char v4; // bl
  ACPI_METHOD_ARGUMENT_V1 *Argument; // rdi
  ULONG i; // esi
  struct _UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-40h] BYREF
  struct _STRING DestinationString; // [rsp+30h] [rbp-30h] BYREF
  struct _STRING SourceString; // [rsp+40h] [rbp-20h] BYREF
  struct _UNICODE_STRING v10; // [rsp+50h] [rbp-10h] BYREF

  if ( a2->Signature != 1114596673 )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 556;
    return 0;
  }
  v4 = 0;
  if ( !a2->Count )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 563;
    return 0;
  }
  DestinationString = 0LL;
  v10 = 0LL;
  RtlInitAnsiString(&DestinationString, (PCSZ)a1 + 6120);
  if ( RtlAnsiStringToUnicodeString(&v10, &DestinationString, 1u) >= 0 )
  {
    Argument = a2->Argument;
    for ( i = 0; i < a2->Count; ++i )
    {
      if ( i )
        Argument = (ACPI_METHOD_ARGUMENT_V1 *)((char *)Argument + Argument->DataLength + 4);
      if ( Argument->Type == 1 )
      {
        SourceString = 0LL;
        RtlInitAnsiString(&SourceString, (PCSZ)Argument->Data);
        UnicodeString = 0LL;
        if ( RtlAnsiStringToUnicodeString(&UnicodeString, &SourceString, 1u) >= 0 )
        {
          if ( (unsigned __int8)DpiCompareAcpiPaths(&UnicodeString, &v10) )
          {
            RtlFreeUnicodeString(&UnicodeString);
            v4 = 1;
            break;
          }
          WdLogSingleEntry2(4LL, SourceString.Buffer, DestinationString.Buffer);
          WdLogGlobalForLineNumber = 625;
        }
        else
        {
          WdLogSingleEntry1(6LL);
          WdLogGlobalForLineNumber = 615;
        }
        RtlFreeUnicodeString(&UnicodeString);
      }
    }
  }
  else
  {
    WdLogSingleEntry1(6LL);
    WdLogGlobalForLineNumber = 579;
  }
  RtlFreeUnicodeString(&v10);
  return v4;
}
