/*
 * XREFs of PnpLogVetoInformation @ 0x140B45874
 * Callers:
 *     PipSendQueryRemoveIrpAndCheckOpenHandles @ 0x1407B8904 (PipSendQueryRemoveIrpAndCheckOpenHandles.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     RtlAppendUnicodeToString @ 0x140432EB0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x140432F70 (RtlAppendUnicodeStringToString.c)
 *     RtlInitAnsiString @ 0x14046C9A0 (RtlInitAnsiString.c)
 *     PsGetProcessImageFileName @ 0x14047F3D0 (PsGetProcessImageFileName.c)
 *     PnpDiagnosticTraceAppVeto @ 0x1405DBAFC (PnpDiagnosticTraceAppVeto.c)
 *     PsLookupProcessByProcessId @ 0x1408EF4E0 (PsLookupProcessByProcessId.c)
 *     IopAllocateUnicodeString @ 0x14090DDE8 (IopAllocateUnicodeString.c)
 *     RtlAnsiStringToUnicodeString @ 0x14096BA30 (RtlAnsiStringToUnicodeString.c)
 *     PsGetAllocatedFullProcessImageName @ 0x1409E9780 (PsGetAllocatedFullProcessImageName.c)
 *     RtlFreeAnsiString @ 0x140A007C0 (RtlFreeAnsiString.c)
 *     PnpGetProcessCommandLine @ 0x140B3F148 (PnpGetProcessCommandLine.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall PnpLogVetoInformation(__int64 a1, _QWORD *a2)
{
  _QWORD *result; // rax
  char v5; // r12
  PEPROCESS v6; // r14
  UNICODE_STRING *v7; // rbx
  const char *ProcessImageFileName; // rax
  _QWORD *i; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rsi
  unsigned __int16 *ProcessCommandLine; // rsi
  __int64 v13; // rcx
  _QWORD *v14; // rdi
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-30h] BYREF
  STRING SourceString; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING v17; // [rsp+50h] [rbp-10h] BYREF
  PVOID P; // [rsp+A8h] [rbp+48h] BYREF
  PEPROCESS Process; // [rsp+B0h] [rbp+50h] BYREF

  P = 0LL;
  Process = 0LL;
  v17 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  for ( result = (_QWORD *)*a2; ; result = (_QWORD *)v14[3] )
  {
    v14 = result - 3;
    if ( a2 == result )
      break;
    v5 = 0;
    if ( PsLookupProcessByProcessId((HANDLE)*((unsigned int *)v14 + 4), &Process) >= 0 )
    {
      v6 = Process;
      if ( (int)PsGetAllocatedFullProcessImageName((__int64)Process, (__int64 *)&P) >= 0 )
      {
        v7 = (UNICODE_STRING *)P;
        if ( !*(_WORD *)P )
        {
          v5 = 1;
          SourceString = 0LL;
          ExFreePoolWithTag(P, 0);
          v7 = &v17;
          P = &v17;
          ProcessImageFileName = (const char *)PsGetProcessImageFileName((__int64)v6);
          RtlInitAnsiString(&SourceString, ProcessImageFileName);
          RtlAnsiStringToUnicodeString(&v17, &SourceString, 1u);
        }
      }
      else
      {
        v7 = 0LL;
        P = 0LL;
      }
      IopAllocateUnicodeString((__int64)&DestinationString, 0xC90u);
      for ( i = (_QWORD *)*v14; ; i = (_QWORD *)v11[1] )
      {
        v11 = i - 1;
        if ( v14 == i )
          break;
        v10 = *v11 ? *(_QWORD *)(*(_QWORD *)(*v11 + 312LL) + 40LL) : 0LL;
        if ( RtlAppendUnicodeStringToString(&DestinationString, (PCUNICODE_STRING)(v10 + 40)) < 0
          || RtlAppendUnicodeToString(&DestinationString, L"\r\n") < 0 )
        {
          break;
        }
      }
      ProcessCommandLine = PnpGetProcessCommandLine(v6);
      PnpDiagnosticTraceAppVeto(
        v13,
        (int)v6[1].Header.WaitListHead.Flink,
        (__int64)v7,
        a1,
        (__int64)ProcessCommandLine,
        (__int64)&DestinationString);
      if ( v5 )
      {
        RtlFreeAnsiString(v7);
      }
      else if ( v7 )
      {
        ExFreePoolWithTag(v7, 0);
        P = 0LL;
      }
      if ( ProcessCommandLine )
        ExFreePoolWithTag(ProcessCommandLine, 0x4F706E50u);
      RtlFreeAnsiString(&DestinationString);
      ObfDereferenceObjectWithTag(v6, 0x746C6644u);
    }
  }
  return result;
}
