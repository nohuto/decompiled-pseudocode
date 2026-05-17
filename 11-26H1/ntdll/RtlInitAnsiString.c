/*
 * XREFs of RtlInitAnsiString @ 0x1800D5DB0
 * Callers:
 *     RtlInitUTF8String @ 0x1800D5DA0 (RtlInitUTF8String.c)
 *     LdrpGetShimEngineInterface @ 0x18011DA94 (LdrpGetShimEngineInterface.c)
 *     AVrfpVerifierStopInitialize @ 0x1801201E8 (AVrfpVerifierStopInitialize.c)
 *     ApiSetResolveToHost2 @ 0x18013B5AC (ApiSetResolveToHost2.c)
 * Callees:
 *     strlen @ 0x180164FE0 (strlen.c)
 */

void __stdcall RtlInitAnsiString(PSTRING DestinationString, PCSZ SourceString)
{
  size_t v3; // rax

  *(_QWORD *)&DestinationString->Length = 0LL;
  DestinationString->Buffer = (char *)SourceString;
  if ( SourceString )
  {
    v3 = strlen(SourceString);
    if ( v3 >= 0xFFFF )
      LOWORD(v3) = -2;
    DestinationString->Length = v3;
    DestinationString->MaximumLength = v3 + 1;
  }
}
