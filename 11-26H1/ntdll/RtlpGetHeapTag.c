/*
 * XREFs of RtlpGetHeapTag @ 0x18009174C
 * Callers:
 *     RtlQueryProcessHeapInformation @ 0x180090DF0 (RtlQueryProcessHeapInformation.c)
 *     RtlpQueryProcessEnumHeapsRoutine @ 0x180091F10 (RtlpQueryProcessEnumHeapsRoutine.c)
 * Callees:
 *     RtlQueryHeapInformation @ 0x180091560 (RtlQueryHeapInformation.c)
 */

__int64 __fastcall RtlpGetHeapTag(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0LL;
  v3 = 0LL;
  if ( (int)RtlQueryHeapInformation(a1, 7, &v3, 8uLL, 0LL) >= 0 )
    return v3;
  return v1;
}
