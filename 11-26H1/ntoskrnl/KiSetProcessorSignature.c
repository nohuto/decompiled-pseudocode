/*
 * XREFs of KiSetProcessorSignature @ 0x1405F9644
 * Callers:
 *     KiInitializeBootStructures @ 0x140BFB890 (KiInitializeBootStructures.c)
 *     KiSetFeatureBits @ 0x140BFD4E8 (KiSetFeatureBits.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     RtlDetectProcessorFeatures @ 0x140C048AC (RtlDetectProcessorFeatures.c)
 *     KiPublishProcessorFeatures @ 0x140CD1A84 (KiPublishProcessorFeatures.c)
 */

__int64 __fastcall KiSetProcessorSignature(__int64 a1, int a2)
{
  __int64 v3; // rcx
  __int64 result; // rax
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp+8h] BYREF
  int v6; // [rsp+48h] [rbp+10h] BYREF
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF

  *(_DWORD *)(a1 + 1800) = a2;
  v7 = 0LL;
  v3 = *(unsigned int *)(a1 + 36);
  BugCheckParameter2 = 0LL;
  v6 = 0;
  RtlDetectProcessorFeatures(v3, &v7, &BugCheckParameter2, &v6);
  *(_QWORD *)(a1 + 36832) = v7;
  *(_DWORD *)(a1 + 1804) = v6;
  result = *(unsigned int *)(a1 + 36);
  if ( (_DWORD)result )
  {
    if ( BugCheckParameter2 != KeFeatureBits2 )
      KeBugCheckEx(0x5Du, 0xFFFFFFF7uLL, BugCheckParameter2, KeFeatureBits2, *(unsigned int *)(a1 + 36));
  }
  else
  {
    KeFeatureBits2 |= BugCheckParameter2;
    return KiPublishProcessorFeatures(a1);
  }
  return result;
}
