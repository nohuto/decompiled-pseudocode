/*
 * XREFs of IoQueryFullDriverPath @ 0x14040DCA0
 * Callers:
 *     PiGetDriverImageDirectory @ 0x140B01014 (PiGetDriverImageDirectory.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x14040DFC0 (RtlCopyUnicodeString.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall IoQueryFullDriverPath(__int64 a1, UNICODE_STRING *a2)
{
  __int64 v2; // rbx
  __int64 Pool2; // rax

  v2 = *(_QWORD *)(a1 + 40);
  if ( !v2 )
    return 3221226021LL;
  Pool2 = ExAllocatePool2(0x100uLL);
  a2->Buffer = (wchar_t *)Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  a2->MaximumLength = *(_WORD *)(v2 + 74);
  RtlCopyUnicodeString(a2, (PCUNICODE_STRING)(v2 + 72));
  return 0LL;
}
