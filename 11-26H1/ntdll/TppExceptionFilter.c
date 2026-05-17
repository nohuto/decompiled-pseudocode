/*
 * XREFs of TppExceptionFilter @ 0x18011F28C
 * Callers:
 *     TppWorkerpInnerExceptionFilter @ 0x18011F1F4 (TppWorkerpInnerExceptionFilter.c)
 *     TppWorkerpOuterExceptionFilter @ 0x180159520 (TppWorkerpOuterExceptionFilter.c)
 * Callees:
 *     RtlDecodePointer @ 0x18004D5D0 (RtlDecodePointer.c)
 */

__int64 __fastcall TppExceptionFilter(__int64 a1)
{
  __int64 (__fastcall *v2)(__int64); // rax

  v2 = (__int64 (__fastcall *)(__int64))RtlDecodePointer(RtlpUnhandledExceptionFilter);
  if ( v2 )
    return v2(a1);
  else
    return RtlUnhandledExceptionFilter2(a1, &unk_180176D3C);
}
