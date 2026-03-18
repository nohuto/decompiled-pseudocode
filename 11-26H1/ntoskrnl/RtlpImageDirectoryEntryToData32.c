/*
 * XREFs of RtlpImageDirectoryEntryToData32 @ 0x14040E1A0
 * Callers:
 *     RtlpImageDirectoryEntryToDataEx @ 0x14040E000 (RtlpImageDirectoryEntryToDataEx.c)
 * Callees:
 *     RtlAddressInSectionTable @ 0x14040E484 (RtlAddressInSectionTable.c)
 */

__int64 __fastcall RtlpImageDirectoryEntryToData32(
        unsigned __int64 a1,
        char a2,
        unsigned __int16 a3,
        _DWORD *a4,
        __int64 a5,
        __int64 *a6)
{
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rax

  if ( (unsigned int)a3 >= *(_DWORD *)(a5 + 116) )
    return 3221225485LL;
  v6 = a3;
  v7 = *(unsigned int *)(a5 + 8LL * a3 + 120);
  if ( !(_DWORD)v7 )
    return 3221225474LL;
  if ( a1 < 0x7FFFFFFF0000LL && (v7 + a1 > 0x7FFFFFFF0000LL || v7 + a1 <= a1) )
    return 3221225485LL;
  *a4 = *(_DWORD *)(a5 + 8 * v6 + 124);
  if ( a2 || (unsigned int)v7 < *(_DWORD *)(a5 + 84) )
  {
    *a6 = v7 + a1;
    return 0LL;
  }
  else
  {
    v8 = RtlAddressInSectionTable(a5, a1);
    *a6 = v8;
    return v8 == 0 ? 0xC000000D : 0;
  }
}
