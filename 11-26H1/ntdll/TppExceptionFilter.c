/*
 * XREFs of TppExceptionFilter @ 0x18011F03C
 * Callers:
 *     TppWorkerpInnerExceptionFilter @ 0x18011EFA4 (TppWorkerpInnerExceptionFilter.c)
 *     TppWorkerpOuterExceptionFilter @ 0x1801593F0 (TppWorkerpOuterExceptionFilter.c)
 * Callees:
 *     RtlDecodePointer @ 0x180037B50 (RtlDecodePointer.c)
 */

LONG __fastcall TppExceptionFilter(_EXCEPTION_POINTERS *a1)
{
  __int64 (__fastcall *v2)(_EXCEPTION_POINTERS *); // rax

  v2 = (__int64 (__fastcall *)(_EXCEPTION_POINTERS *))RtlDecodePointer(RtlpUnhandledExceptionFilter);
  if ( v2 )
    return v2(a1);
  else
    return RtlUnhandledExceptionFilter2(a1, (ULONG)&Flags);
}
