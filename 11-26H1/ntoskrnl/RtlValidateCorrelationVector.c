/*
 * XREFs of RtlValidateCorrelationVector @ 0x140B2E670
 * Callers:
 *     RtlIncrementCorrelationVector @ 0x140806480 (RtlIncrementCorrelationVector.c)
 * Callees:
 *     RtlpGetCorrelationVectorEndPosition @ 0x1404EA848 (RtlpGetCorrelationVectorEndPosition.c)
 *     strncmp @ 0x14073D360 (strncmp.c)
 *     RtlpGetLastContiguosBase64Position @ 0x140B2E6E0 (RtlpGetLastContiguosBase64Position.c)
 *     RtlpGetCorrelationVectorBufferLength @ 0x140B2E754 (RtlpGetCorrelationVectorBufferLength.c)
 */

__int64 __fastcall RtlValidateCorrelationVector(_BYTE *a1, __int64 a2, __int64 a3)
{
  int LastContiguosBase64Position; // esi
  __int64 v5; // rdx
  int CorrelationVectorEndPosition; // eax
  bool v8; // zf
  int v9; // esi
  __int64 v10; // rdi
  __int64 v11; // rbp
  int v12; // ecx
  __int64 v13; // r8
  _BYTE *v14; // rdx

  if ( !a1 )
    return 3221225485LL;
  if ( (int)RtlpGetCorrelationVectorBufferLength(a1, a2, a3) < 0 )
    return 3221225485LL;
  LastContiguosBase64Position = RtlpGetLastContiguosBase64Position(a1);
  CorrelationVectorEndPosition = RtlpGetCorrelationVectorEndPosition((__int64)a1, v5);
  if ( CorrelationVectorEndPosition < 0 )
    return 3221225485LL;
  if ( *a1 == 1 )
  {
    v8 = LastContiguosBase64Position == 15;
  }
  else
  {
    if ( *a1 != 2 )
      goto LABEL_10;
    v8 = LastContiguosBase64Position == 21;
  }
  if ( !v8 )
    return 3221225485LL;
LABEL_10:
  v9 = LastContiguosBase64Position + 1;
  v10 = v9;
  if ( a1[v9 + 1] != 46 )
    return 3221225485LL;
  v11 = CorrelationVectorEndPosition;
  while ( v10 < v11 )
  {
    if ( a1[v10 + 1] == 46 )
    {
      ++v9;
      ++v10;
      v12 = 0;
      v13 = v9;
      if ( v10 < v11 )
      {
        v14 = &a1[v10 + 1];
        do
        {
          if ( (unsigned __int8)(*v14 - 48) > 9u )
            break;
          ++v9;
          ++v10;
          ++v14;
          ++v12;
        }
        while ( v10 < v11 );
        if ( v12 && v12 <= 10 && (v12 != 10 || strncmp(&a1[v13 + 1], "2147483647", 0xAuLL) <= 0) )
          continue;
      }
    }
    return 3221225485LL;
  }
  return 0LL;
}
