/*
 * XREFs of RtlpLocateXStateChunk @ 0x1800C9350
 * Callers:
 *     RtlUnwindEx @ 0x180033EB0 (RtlUnwindEx.c)
 *     RtlGetExtendedFeaturesMask @ 0x1800C9330 (RtlGetExtendedFeaturesMask.c)
 *     RtlSetExtendedFeaturesMask @ 0x1801462B0 (RtlSetExtendedFeaturesMask.c)
 * Callees:
 *     <none>
 */

char *__fastcall RtlpLocateXStateChunk(_DWORD *a1)
{
  __int64 v1; // r9

  v1 = (int)a1[4];
  if ( *a1 > (int)v1 || *a1 + a1[1] < (int)v1 + a1[5] )
    return 0LL;
  else
    return (char *)a1 + v1;
}
