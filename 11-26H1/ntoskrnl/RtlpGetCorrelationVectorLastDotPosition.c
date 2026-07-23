/*
 * XREFs of RtlpGetCorrelationVectorLastDotPosition @ 0x140621034
 * Callers:
 *     RtlIncrementCorrelationVector @ 0x14080BF20 (RtlIncrementCorrelationVector.c)
 * Callees:
 *     RtlpGetCorrelationVectorBufferLength @ 0x140B306A4 (RtlpGetCorrelationVectorBufferLength.c)
 */

__int64 __fastcall RtlpGetCorrelationVectorLastDotPosition(__int64 a1, __int64 a2)
{
  int CorrelationVectorBufferLength; // eax
  unsigned int v3; // r8d
  __int64 v4; // r9
  int v5; // r10d
  __int64 v6; // r11
  __int64 v7; // rdx
  char v8; // al
  int v9; // ecx

  CorrelationVectorBufferLength = RtlpGetCorrelationVectorBufferLength(a1, a2, 0xFFFFFFFFLL);
  v6 = CorrelationVectorBufferLength;
  if ( CorrelationVectorBufferLength > 0 )
  {
    v7 = 0LL;
    do
    {
      v8 = *(_BYTE *)(v4 + v7 + 1);
      if ( !v8 )
        break;
      v9 = v5;
      if ( v8 != 46 )
        v9 = v3;
      ++v5;
      ++v7;
      v3 = v9;
    }
    while ( v7 < v6 );
  }
  return v3;
}
