/*
 * XREFs of RtlValidateCorrelationVector @ 0x140B305C0
 * Callers:
 *     RtlIncrementCorrelationVector @ 0x14080BF20 (RtlIncrementCorrelationVector.c)
 * Callees:
 *     RtlpGetCorrelationVectorEndPosition @ 0x1404E3BF8 (RtlpGetCorrelationVectorEndPosition.c)
 *     strncmp @ 0x140741F60 (strncmp.c)
 *     RtlpGetLastContiguosBase64Position @ 0x140B30630 (RtlpGetLastContiguosBase64Position.c)
 *     RtlpGetCorrelationVectorBufferLength @ 0x140B306A4 (RtlpGetCorrelationVectorBufferLength.c)
 */

DWORD __cdecl RtlValidateCorrelationVector(PCORRELATION_VECTOR Vector)
{
  int LastContiguosBase64Position; // esi
  __int64 v3; // rdx
  int CorrelationVectorEndPosition; // eax
  bool v6; // zf
  int v7; // esi
  __int64 v8; // rdi
  __int64 v9; // rbp
  int v10; // ecx
  __int64 v11; // r8
  CHAR *v12; // rdx

  if ( !Vector )
    return -1073741811;
  if ( (int)RtlpGetCorrelationVectorBufferLength(Vector) < 0 )
    return -1073741811;
  LastContiguosBase64Position = RtlpGetLastContiguosBase64Position(Vector);
  CorrelationVectorEndPosition = RtlpGetCorrelationVectorEndPosition((__int64)Vector, v3);
  if ( CorrelationVectorEndPosition < 0 )
    return -1073741811;
  if ( Vector->Version == 1 )
  {
    v6 = LastContiguosBase64Position == 15;
  }
  else
  {
    if ( Vector->Version != 2 )
      goto LABEL_10;
    v6 = LastContiguosBase64Position == 21;
  }
  if ( !v6 )
    return -1073741811;
LABEL_10:
  v7 = LastContiguosBase64Position + 1;
  v8 = v7;
  if ( Vector->Vector[v7] != 46 )
    return -1073741811;
  v9 = CorrelationVectorEndPosition;
  while ( v8 < v9 )
  {
    if ( Vector->Vector[v8] == 46 )
    {
      ++v7;
      ++v8;
      v10 = 0;
      v11 = v7;
      if ( v8 < v9 )
      {
        v12 = &Vector->Vector[v8];
        do
        {
          if ( (unsigned __int8)(*v12 - 48) > 9u )
            break;
          ++v7;
          ++v8;
          ++v12;
          ++v10;
        }
        while ( v8 < v9 );
        if ( v10 && v10 <= 10 && (v10 != 10 || strncmp(&Vector->Vector[v11], "2147483647", 0xAuLL) <= 0) )
          continue;
      }
    }
    return -1073741811;
  }
  return 0;
}
