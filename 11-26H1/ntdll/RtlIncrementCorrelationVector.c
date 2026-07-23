/*
 * XREFs of RtlIncrementCorrelationVector @ 0x1800E8330
 * Callers:
 *     <none>
 * Callees:
 *     RtlValidateCorrelationVector @ 0x1800E8420 (RtlValidateCorrelationVector.c)
 *     RtlpGetCorrelationVectorBufferLength @ 0x1800E85C4 (RtlpGetCorrelationVectorBufferLength.c)
 *     RtlpGetCorrelationVectorLastDotPosition @ 0x1800E85E8 (RtlpGetCorrelationVectorLastDotPosition.c)
 *     _snprintf_s @ 0x180132E90 (_snprintf_s.c)
 *     sscanf_s @ 0x180133A60 (sscanf_s.c)
 *     strcpy_s @ 0x180133B60 (strcpy_s.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

DWORD __cdecl RtlIncrementCorrelationVector(PCORRELATION_VECTOR CorrelationVector)
{
  int CorrelationVectorBufferLength; // ebp
  PCORRELATION_VECTOR v3; // rcx
  int v4; // ebx
  int CorrelationVectorLastDotPosition; // eax
  int v6; // esi
  CHAR *v8; // rdi
  int v9; // eax
  int v10; // [rsp+30h] [rbp-28h] BYREF
  char Buffer[16]; // [rsp+38h] [rbp-20h] BYREF

  v10 = 0;
  CorrelationVectorBufferLength = RtlpGetCorrelationVectorBufferLength();
  v4 = RtlValidateCorrelationVector(v3);
  if ( v4 >= 0 )
  {
    CorrelationVectorLastDotPosition = RtlpGetCorrelationVectorLastDotPosition(CorrelationVector);
    v6 = CorrelationVectorLastDotPosition;
    if ( CorrelationVectorLastDotPosition >= 0
      && (v8 = &CorrelationVector->Vector[CorrelationVectorLastDotPosition], sscanf_s(v8 + 1, "%d", &v10) == 1)
      && (++v10, v9 = snprintf_s(Buffer, 0xCuLL, 0xCuLL, "%d", v10), v9 < CorrelationVectorBufferLength - v6 - 2) )
    {
      strcpy_s(v8 + 1, v9 + 1, Buffer);
    }
    else
    {
      return -2147483643;
    }
  }
  return v4;
}
