/*
 * XREFs of VrpBuildKeyPath @ 0x1409490E8
 * Callers:
 *     VrpPreOpenOrCreate @ 0x1409475FC (VrpPreOpenOrCreate.c)
 *     VrpPostEnumerateKey @ 0x140948938 (VrpPostEnumerateKey.c)
 *     VrpPostOpenOrCreate @ 0x1409494F0 (VrpPostOpenOrCreate.c)
 *     VrpCreateNamespaceNode @ 0x140949EA0 (VrpCreateNamespaceNode.c)
 *     VrpPreLoadKey @ 0x140A71EB8 (VrpPreLoadKey.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x14036CBB0 (RtlCopyUnicodeString.c)
 *     RtlAppendUnicodeToString @ 0x140404370 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x140404430 (RtlAppendUnicodeStringToString.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 __fastcall VrpBuildKeyPath(PCUNICODE_STRING SourceString, PCUNICODE_STRING Source, PUNICODE_STRING Destination)
{
  unsigned int v3; // ebx
  PCUNICODE_STRING v4; // rsi
  unsigned __int16 Length; // ax
  unsigned __int16 v8; // cx
  wchar_t *Pool2; // rax
  _QWORD v11[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0;
  v4 = (PCUNICODE_STRING)v11;
  Destination->Length = 0;
  v11[0] = 0LL;
  if ( SourceString )
    v4 = SourceString;
  v11[1] = 0LL;
  Length = v4->Length;
  Destination->MaximumLength = v4->Length;
  v8 = Source->Length + Length;
  if ( v8 < Length || (unsigned __int16)(v8 + 2) < v8 )
  {
    Destination->MaximumLength = -1;
    return (unsigned int)-1073741811;
  }
  else
  {
    Destination->MaximumLength = v8 + 2;
    Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
    Destination->Buffer = Pool2;
    if ( Pool2 )
    {
      RtlCopyUnicodeString(Destination, v4);
      if ( Source->Length )
      {
        if ( *Source->Buffer != 92 && (!v4->Length || v4->Buffer[((unsigned __int64)v4->Length >> 1) - 1] != 92) )
          RtlAppendUnicodeToString(Destination, L"\\");
        RtlAppendUnicodeStringToString(Destination, Source);
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v3;
}
