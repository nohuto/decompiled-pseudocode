/*
 * XREFs of VrpBuildKeyPath @ 0x1409396A0
 * Callers:
 *     VrpPostOpenOrCreate @ 0x1408ABF08 (VrpPostOpenOrCreate.c)
 *     VrpPostEnumerateKey @ 0x140938960 (VrpPostEnumerateKey.c)
 *     VrpCreateNamespaceNode @ 0x14093A7F0 (VrpCreateNamespaceNode.c)
 *     VrpPreLoadKey @ 0x140B1D3C8 (VrpPreLoadKey.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x14040DFC0 (RtlCopyUnicodeString.c)
 *     RtlAppendUnicodeToString @ 0x14041FEE0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x14041FFA0 (RtlAppendUnicodeStringToString.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall VrpBuildKeyPath(PCUNICODE_STRING SourceString, PCUNICODE_STRING Source, PUNICODE_STRING Destination)
{
  PCUNICODE_STRING v3; // rdi
  unsigned __int16 Length; // ax
  unsigned __int16 v7; // cx
  wchar_t *Pool2; // rax
  __int64 result; // rax
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = (PCUNICODE_STRING)v10;
  Destination->Length = 0;
  v10[0] = 0LL;
  if ( SourceString )
    v3 = SourceString;
  v10[1] = 0LL;
  Length = v3->Length;
  Destination->MaximumLength = v3->Length;
  v7 = Source->Length + Length;
  if ( v7 < Length || (unsigned __int16)(v7 + 2) < v7 )
  {
    result = 3221225485LL;
    Destination->MaximumLength = -1;
  }
  else
  {
    Destination->MaximumLength = v7 + 2;
    Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
    Destination->Buffer = Pool2;
    if ( Pool2 )
    {
      RtlCopyUnicodeString(Destination, v3);
      if ( Source->Length )
      {
        if ( *Source->Buffer != 92 && (!v3->Length || v3->Buffer[((unsigned __int64)v3->Length >> 1) - 1] != 92) )
          RtlAppendUnicodeToString(Destination, L"\\");
        RtlAppendUnicodeStringToString(Destination, Source);
      }
      return 0LL;
    }
    else
    {
      return 3221225626LL;
    }
  }
  return result;
}
