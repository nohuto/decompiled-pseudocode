/*
 * XREFs of SmpFinalizePathStrings @ 0x14000E2B0
 * Callers:
 *     SmpLoadDataFromRegistry @ 0x1400159FC (SmpLoadDataFromRegistry.c)
 * Callees:
 *     <none>
 */

__int64 SmpFinalizePathStrings()
{
  unsigned int v0; // ebx
  const WCHAR *NtSystemRoot; // rax
  struct _UNICODE_STRING Destination; // [rsp+20h] [rbp-18h] BYREF

  v0 = 0;
  *(&Destination.MaximumLength + 2) = 0;
  NtSystemRoot = (const WCHAR *)RtlGetNtSystemRoot();
  RtlInitUnicodeString(&SmpSystemRoot, NtSystemRoot);
  Destination.Length = 0;
  *(_DWORD *)&Destination.MaximumLength = (unsigned __int16)(SmpSystemRoot.MaximumLength
                                                           + SmpDefaultLibPath.MaximumLength
                                                           + 20);
  Destination.Buffer = (PWSTR)RtlAllocateHeap(
                                *(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL),
                                SmBaseTag,
                                (unsigned __int16)(SmpSystemRoot.MaximumLength + SmpDefaultLibPath.MaximumLength + 20));
  if ( Destination.Buffer )
  {
    RtlAppendUnicodeStringToString(&Destination, &SmpSystemRoot);
    RtlAppendUnicodeToString(&Destination, L"\\system32;");
    RtlAppendUnicodeStringToString(&Destination, &SmpDefaultLibPath);
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, SmpDefaultLibPath.Buffer);
    SmpDefaultLibPath = Destination;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v0;
}
