/*
 * XREFs of IopInitializeBootLogging @ 0x140794CC0
 * Callers:
 *     Phase1InitializationDiscard @ 0x140CABD00 (Phase1InitializationDiscard.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x140260870 (ExInitializeResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140275200 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     MmEnumerateSystemImages @ 0x1404E5150 (MmEnumerateSystemImages.c)
 *     RtlCreateUnicodeStringFromAsciiz @ 0x140801910 (RtlCreateUnicodeStringFromAsciiz.c)
 *     RtlAnsiStringToUnicodeString @ 0x14096BA30 (RtlAnsiStringToUnicodeString.c)
 *     RtlFindMessage @ 0x140A86CF0 (RtlFindMessage.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

void __fastcall IopInitializeBootLogging(__int64 a1)
{
  __int64 Pool2; // rax
  __int64 v3; // rsi
  __int64 v4; // rbx
  __int64 v5; // rax
  PUNICODE_STRING v6; // r8
  unsigned __int16 v7; // ax
  PUNICODE_STRING v8; // r8
  unsigned __int16 Length; // ax
  unsigned __int16 v10; // ax
  STRING SourceString; // [rsp+30h] [rbp-10h] BYREF
  __int64 v12; // [rsp+70h] [rbp+30h] BYREF

  v12 = 0LL;
  *(_DWORD *)(&SourceString.MaximumLength + 1) = 0;
  if ( !qword_140FD5028 )
  {
    Pool2 = ExAllocatePool2(0x40uLL);
    qword_140FD5028 = (PUNICODE_STRING)Pool2;
    if ( Pool2 )
    {
      ExInitializeResourceLite((PERESOURCE)(Pool2 + 64));
      ExAcquireResourceExclusiveLite((PERESOURCE)&qword_140FD5028[4], 1u);
      v3 = *(_QWORD *)(a1 + 16);
      v4 = -1LL;
      if ( (int)RtlFindMessage(*(_QWORD *)(v3 + 48), 11, 0, 181, (__int64)&v12) >= 0 )
      {
        v5 = -1LL;
        SourceString.Buffer = (char *)(v12 + 4);
        do
          ++v5;
        while ( *(_BYTE *)(v12 + 4 + v5) );
        SourceString.Length = v5;
        SourceString.MaximumLength = v5 + 1;
        RtlAnsiStringToUnicodeString(qword_140FD5028, &SourceString, 1u);
        v6 = qword_140FD5028;
        if ( qword_140FD5028->Length > 4u )
        {
          v7 = qword_140FD5028->Length - 4;
          qword_140FD5028->Length = v7;
          v6->Buffer[(unsigned __int64)v7 >> 1] = 0;
        }
      }
      if ( (int)RtlFindMessage(*(_QWORD *)(v3 + 48), 11, 0, 182, (__int64)&v12) < 0 )
      {
        v8 = qword_140FD5028;
      }
      else
      {
        SourceString.Buffer = (char *)(v12 + 4);
        do
          ++v4;
        while ( *(_BYTE *)(v12 + 4 + v4) );
        SourceString.Length = v4;
        SourceString.MaximumLength = v4 + 1;
        RtlAnsiStringToUnicodeString(qword_140FD5028 + 1, &SourceString, 1u);
        v8 = qword_140FD5028;
        Length = qword_140FD5028[1].Length;
        if ( Length > 4u )
        {
          v10 = Length - 4;
          qword_140FD5028[1].Length = v10;
          v8[1].Buffer[(unsigned __int64)v10 >> 1] = 0;
        }
      }
      RtlCreateUnicodeStringFromAsciiz(v8 + 3);
      MmEnumerateSystemImages((__int64)IopBootLogDriver, 0LL);
      ExReleaseResourceLite((PERESOURCE)&qword_140FD5028[4]);
    }
  }
}
