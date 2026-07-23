/*
 * XREFs of RtlCompressWorkSpaceSizeLZNT1 @ 0x18010F910
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlCompressWorkSpaceSizeLZNT1(__int16 a1, _DWORD *a2, _DWORD *a3)
{
  if ( !a1 )
  {
    *a2 = 65568;
    goto LABEL_4;
  }
  if ( a1 == 256 )
  {
    *a2 = 32;
LABEL_4:
    *a3 = 4096;
    return 0LL;
  }
  return 3221225659LL;
}
