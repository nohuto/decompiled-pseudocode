/*
 * XREFs of RtlIncrementCorrelationVector @ 0x14080BF20
 * Callers:
 *     <none>
 * Callees:
 *     _snprintf_s @ 0x14053DE00 (_snprintf_s.c)
 *     sscanf_s @ 0x14053E9D0 (sscanf_s.c)
 *     strcpy_s @ 0x14053EAD0 (strcpy_s.c)
 *     RtlpGetCorrelationVectorLastDotPosition @ 0x140621034 (RtlpGetCorrelationVectorLastDotPosition.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlValidateCorrelationVector @ 0x140B305C0 (RtlValidateCorrelationVector.c)
 *     RtlpGetCorrelationVectorBufferLength @ 0x140B306A4 (RtlpGetCorrelationVectorBufferLength.c)
 */

DWORD __cdecl RtlIncrementCorrelationVector(PCORRELATION_VECTOR CorrelationVector)
{
  int CorrelationVectorBufferLength; // ebp
  __int64 v3; // rdx
  int v4; // ebx
  int CorrelationVectorLastDotPosition; // eax
  int v6; // esi
  CHAR *v7; // rdi
  int v8; // eax
  int v10; // [rsp+30h] [rbp-28h] BYREF
  char DstBuf[16]; // [rsp+38h] [rbp-20h] BYREF

  v10 = 0;
  CorrelationVectorBufferLength = RtlpGetCorrelationVectorBufferLength(CorrelationVector);
  v4 = RtlValidateCorrelationVector(CorrelationVector);
  if ( v4 >= 0 )
  {
    CorrelationVectorLastDotPosition = RtlpGetCorrelationVectorLastDotPosition((__int64)CorrelationVector, v3);
    v6 = CorrelationVectorLastDotPosition;
    if ( CorrelationVectorLastDotPosition >= 0
      && (v7 = &CorrelationVector->Vector[CorrelationVectorLastDotPosition], sscanf_s(v7 + 1, "%d", &v10) == 1)
      && (++v10, v8 = snprintf_s(DstBuf, 0xCuLL, 0xCuLL, "%d", v10), v8 < CorrelationVectorBufferLength - v6 - 2) )
    {
      strcpy_s(v7 + 1, v8 + 1, DstBuf);
    }
    else
    {
      return -2147483643;
    }
  }
  return v4;
}
