/*
 * XREFs of RtlpLocateXStateChunk @ 0x1800CBBE0
 * Callers:
 *     RtlUnwindEx @ 0x180049930 (RtlUnwindEx.c)
 *     RtlGetExtendedFeaturesMask @ 0x1800CBBC0 (RtlGetExtendedFeaturesMask.c)
 *     RtlSetExtendedFeaturesMask @ 0x180146400 (RtlSetExtendedFeaturesMask.c)
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
