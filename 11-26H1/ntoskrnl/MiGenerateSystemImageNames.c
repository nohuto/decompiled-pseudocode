/*
 * XREFs of MiGenerateSystemImageNames @ 0x140B27AC8
 * Callers:
 *     MiApplyHotPatchToLoadedDriver @ 0x140874754 (MiApplyHotPatchToLoadedDriver.c)
 *     MmLoadSystemImageEx @ 0x140A39A74 (MmLoadSystemImageEx.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     RtlAppendUnicodeStringToString @ 0x14041FFA0 (RtlAppendUnicodeStringToString.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     MiGetBaseNameFromImageFileName @ 0x1404DC2B0 (MiGetBaseNameFromImageFileName.c)
 */

__int64 __fastcall MiGenerateSystemImageNames(
        unsigned __int16 *a1,
        const UNICODE_STRING *a2,
        UNICODE_STRING *a3,
        UNICODE_STRING *a4,
        UNICODE_STRING *Source,
        PUNICODE_STRING Destination)
{
  __int64 result; // rax
  UNICODE_STRING *v10; // r10
  unsigned __int16 Length; // ax
  unsigned __int16 v12; // cx
  unsigned __int16 v13; // bp
  int CurrentProcessorColor; // eax
  __int64 PoolMm; // rax

  result = MiGetBaseNameFromImageFileName(a1, (__int64)a4);
  if ( (int)result >= 0 )
  {
    *Source = *v10;
    Source->Length -= a4->Length;
    Source->MaximumLength = Source->Length;
    *Destination = *v10;
    if ( a2 )
    {
      Length = Source->Length;
      Destination->MaximumLength = Source->Length;
      v12 = a2->Length + Length;
      if ( v12 < Length )
        return 3221225626LL;
      Destination->MaximumLength = v12;
      v13 = a4->Length + v12;
      if ( v13 < v12 )
        return 3221225626LL;
      Destination->MaximumLength = v13;
      CurrentProcessorColor = MmGetCurrentProcessorColor();
      PoolMm = ExAllocatePoolMm(256LL, v13, 1682730317, CurrentProcessorColor | 0x80000000);
      Destination->Buffer = (wchar_t *)PoolMm;
      if ( !PoolMm )
        return 3221225626LL;
      Destination->Length = 0;
      RtlAppendUnicodeStringToString(Destination, Source);
      RtlAppendUnicodeStringToString(Destination, a2);
      RtlAppendUnicodeStringToString(Destination, a4);
      a4->Buffer = &Destination->Buffer[(unsigned __int64)Source->Length >> 1];
      a4->Length += a2->Length;
      a4->MaximumLength += a2->Length;
    }
    if ( a3 )
      *a4 = *a3;
    return 0LL;
  }
  return result;
}
