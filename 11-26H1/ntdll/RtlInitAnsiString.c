/*
 * XREFs of RtlInitAnsiString @ 0x1800D2D70
 * Callers:
 *     RtlInitUTF8String @ 0x1800D2D60 (RtlInitUTF8String.c)
 *     LdrpGetShimEngineInterface @ 0x18011D844 (LdrpGetShimEngineInterface.c)
 *     AVrfpVerifierStopInitialize @ 0x18011FF98 (AVrfpVerifierStopInitialize.c)
 *     ApiSetResolveToHost2 @ 0x18013B31C (ApiSetResolveToHost2.c)
 * Callees:
 *     strlen @ 0x180164EE0 (strlen.c)
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
