/*
 * XREFs of EtwpCovSampCaptureBufferAddIP @ 0x1404AB614
 * Callers:
 *     EtwpCovSampCaptureSample @ 0x1406C8944 (EtwpCovSampCaptureSample.c)
 *     EtwpCovSampCaptureUserAddresses @ 0x140A23904 (EtwpCovSampCaptureUserAddresses.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall EtwpCovSampCaptureBufferAddIP(__int64 a1, unsigned __int64 a2)
{
  int v2; // r8d
  unsigned __int64 result; // rax
  int v4; // r8d

  if ( a2 )
  {
    v2 = *(_DWORD *)(a1 + 56);
    *(_QWORD *)(a1 + 64) = a2;
    *(_DWORD *)(a1 + 56) = v2 | 8;
    result = 0xFFFF800000000000uLL;
    *(_WORD *)(a1 + 62) = 1;
    if ( a2 < 0xFFFF800000000000uLL )
      v4 = v2 | 0xA;
    else
      v4 = v2 | 9;
    *(_DWORD *)(a1 + 56) = v4;
  }
  return result;
}
