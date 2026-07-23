/*
 * XREFs of RtlSizeOfRetpolineRelocationEntry @ 0x14046CEF8
 * Callers:
 *     RtlValidateDynamicFixupRelocation @ 0x14046C8A8 (RtlValidateDynamicFixupRelocation.c)
 *     RtlpCopyRetpolineRelocationBlockEntryArray @ 0x14046C99C (RtlpCopyRetpolineRelocationBlockEntryArray.c)
 *     RtlCreateRetpolineRelocationInformation @ 0x14046CA6C (RtlCreateRetpolineRelocationInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlSizeOfRetpolineRelocationEntry(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  v1 = a1 - 3;
  if ( !v1 )
    return 4LL;
  v3 = v1 - 1;
  if ( !v3 )
    return 2LL;
  v4 = v3 - 1;
  if ( !v4 )
    return 2LL;
  if ( v4 == 3 )
    return 4LL;
  return 0xFFFFFFFFLL;
}
