/*
 * XREFs of EtwpCovSampCaptureBufferGet @ 0x1404FAF70
 * Callers:
 *     EtwpCovSampCaptureSample @ 0x1406CC924 (EtwpCovSampCaptureSample.c)
 *     EtwpCovSampCaptureUserAddresses @ 0x140A36414 (EtwpCovSampCaptureUserAddresses.c)
 * Callees:
 *     ExSaDecodeHandle @ 0x14030C290 (ExSaDecodeHandle.c)
 *     EtwpCovSampLookasidePop @ 0x14030CB08 (EtwpCovSampLookasidePop.c)
 */

PSLIST_ENTRY __fastcall EtwpCovSampCaptureBufferGet(__int64 a1)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // r11
  PSLIST_ENTRY result; // rax

  v1 = (ExSaDecodeHandle(*(_QWORD *)(a1 + 8)) + 15) & 0xFFFFFFFFFFFFFFF0uLL;
  result = EtwpCovSampLookasidePop(v2, v1 + 80);
  if ( result )
  {
    *((_WORD *)&result[3].Next + 7) = 0;
    *((_DWORD *)&result[3].Next + 2) = 0;
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)(v1 + 312));
  }
  return result;
}
