/*
 * XREFs of SmpExpandEnvironmentString @ 0x1400087C0
 * Callers:
 *     SmpParseCommandLine @ 0x140004280 (SmpParseCommandLine.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmpExpandEnvironmentString(PUNICODE_STRING Source)
{
  USHORT MaximumLength; // dx
  unsigned __int16 v2; // ax
  NTSTATUS v5; // edi
  void *v6; // rcx
  struct _UNICODE_STRING Destination; // [rsp+20h] [rbp-18h] BYREF

  MaximumLength = Source->MaximumLength;
  v2 = 520;
  Destination = 0LL;
  if ( MaximumLength >= 0x208u )
  {
    v2 = MaximumLength;
    Destination.MaximumLength = MaximumLength;
  }
  else
  {
    Destination.MaximumLength = 520;
  }
  Destination.Buffer = (PWSTR)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), SmBaseTag, v2);
  if ( !Destination.Buffer )
    return 3221225495LL;
  Destination.Length = 0;
  v5 = RtlExpandEnvironmentStrings_U(SmpDefaultEnvironment, Source, &Destination, 0LL);
  v6 = *(void **)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL);
  if ( v5 < 0 )
  {
    RtlFreeHeap(v6, 0, Destination.Buffer);
  }
  else
  {
    RtlFreeHeap(v6, 0, Source->Buffer);
    *Source = Destination;
  }
  return (unsigned int)v5;
}
