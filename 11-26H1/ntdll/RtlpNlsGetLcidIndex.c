/*
 * XREFs of RtlpNlsGetLcidIndex @ 0x180051BC0
 * Callers:
 *     RtlpConsoleFallbackNameFromLocaleName @ 0x18004CECC (RtlpConsoleFallbackNameFromLocaleName.c)
 *     RtlLCIDToCultureName @ 0x1800512D0 (RtlLCIDToCultureName.c)
 *     RtlpGetProcessCodepagesForLocale @ 0x1801214A4 (RtlpGetProcessCodepagesForLocale.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpNlsGetLcidIndex(int a1)
{
  int v1; // r8d
  int i; // r9d
  __int64 v3; // r10
  __int64 v4; // rax
  int v5; // edx
  int v6; // eax

  v1 = 0;
  for ( i = *(unsigned __int16 *)(pTblPtrs + 4) - 1; v1 <= i; i = v6 )
  {
    v3 = (i + v1) / 2;
    v4 = *(_QWORD *)(pTblPtrs + 16);
    v5 = a1 - *(_DWORD *)(v4 + 8 * v3);
    if ( a1 == *(_DWORD *)(v4 + 8 * v3) )
      return (unsigned int)v3;
    if ( v5 >= 0 )
      v1 = v3 + 1;
    v6 = v3 - 1;
    if ( v5 >= 0 )
      v6 = i;
  }
  return 0xFFFFFFFFLL;
}
