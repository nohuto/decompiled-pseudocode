/*
 * XREFs of RtlpGetCorrelationVectorLastDotPosition @ 0x1800E85E8
 * Callers:
 *     RtlIncrementCorrelationVector @ 0x1800E8330 (RtlIncrementCorrelationVector.c)
 * Callees:
 *     RtlpGetCorrelationVectorBufferLength @ 0x1800E85C4 (RtlpGetCorrelationVectorBufferLength.c)
 */

__int64 __fastcall RtlpGetCorrelationVectorLastDotPosition(_BYTE *a1)
{
  int CorrelationVectorBufferLength; // eax
  unsigned int v2; // r8d
  __int64 v3; // r9
  int v4; // r10d
  __int64 v5; // r11
  __int64 v6; // rdx
  char v7; // al
  int v8; // ecx

  CorrelationVectorBufferLength = RtlpGetCorrelationVectorBufferLength(a1);
  v5 = CorrelationVectorBufferLength;
  if ( CorrelationVectorBufferLength > 0 )
  {
    v6 = 0LL;
    do
    {
      v7 = *(_BYTE *)(v3 + v6 + 1);
      if ( !v7 )
        break;
      v8 = v4;
      if ( v7 != 46 )
        v8 = v2;
      ++v4;
      ++v6;
      v2 = v8;
    }
    while ( v6 < v5 );
  }
  return v2;
}
