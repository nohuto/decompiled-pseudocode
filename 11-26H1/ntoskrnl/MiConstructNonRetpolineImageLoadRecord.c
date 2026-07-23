/*
 * XREFs of MiConstructNonRetpolineImageLoadRecord @ 0x140873A40
 * Callers:
 *     MiLogRetpolineImageLoadEvents @ 0x140B214F4 (MiLogRetpolineImageLoadEvents.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     RtlUnicodeStringCopy @ 0x14042FE80 (RtlUnicodeStringCopy.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 */

__int64 __fastcall MiConstructNonRetpolineImageLoadRecord(__int64 a1)
{
  const UNICODE_STRING *v1; // rsi
  __int64 v3; // rbx
  int CurrentProcessorColor; // eax
  __int64 result; // rax
  __int64 v6; // rbx
  unsigned __int16 Length; // ax

  v1 = (const UNICODE_STRING *)(a1 + 88);
  v3 = *(unsigned __int16 *)(a1 + 88);
  CurrentProcessorColor = MmGetCurrentProcessorColor();
  result = ExAllocatePoolMm(256LL, v3 + 40, 1380871501, CurrentProcessorColor | 0x80000000);
  v6 = result;
  if ( result )
  {
    Length = v1->Length;
    *(_OWORD *)(v6 + 16) = 0LL;
    *(_WORD *)(v6 + 18) = Length;
    *(_QWORD *)(v6 + 24) = v6 + 40;
    RtlUnicodeStringCopy((PUNICODE_STRING)(v6 + 16), v1);
    *(_DWORD *)(v6 + 32) = *(_DWORD *)(a1 + 120);
    *(_DWORD *)(v6 + 36) = *(_DWORD *)(a1 + 156);
    return v6;
  }
  return result;
}
