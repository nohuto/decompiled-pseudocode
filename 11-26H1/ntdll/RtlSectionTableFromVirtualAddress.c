/*
 * XREFs of RtlSectionTableFromVirtualAddress @ 0x1800CA040
 * Callers:
 *     LdrpLocateMrdata @ 0x180081AC0 (LdrpLocateMrdata.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlSectionTableFromVirtualAddress(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax
  unsigned int i; // r9d
  unsigned int v5; // edx

  result = a1 + *(unsigned __int16 *)(a1 + 20) + 24LL;
  for ( i = 0; i < *(unsigned __int16 *)(a1 + 6); ++i )
  {
    v5 = *(_DWORD *)(result + 12);
    if ( a3 >= v5 && a3 < *(_DWORD *)(result + 16) + v5 )
      return result;
    result += 40LL;
  }
  return 0LL;
}
