/*
 * XREFs of ?GetLowestAvailImportanceOrdinal@DMMVIDPNTOPOLOGY@@QEBAJPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@@Z @ 0x1403CC454
 * Callers:
 *     ?CreateNewPath@DMMVIDPNTOPOLOGY@@QEBAJAEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x140264C80 (-CreateNewPath@DMMVIDPNTOPOLOGY@@QEBAJAEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEAVDMMVIDPNPRESENTPAT.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::GetLowestAvailImportanceOrdinal(
        DMMVIDPNTOPOLOGY *this,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE *a2)
{
  enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE v4; // eax
  int v5; // edx
  int v6; // ecx
  __int64 result; // rax

  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 274;
  }
  v4 = D3DKMDT_VPPI_PRIMARY;
  *a2 = D3DKMDT_VPPI_UNINITIALIZED;
  v5 = *((_DWORD *)this + 49);
  v6 = 1;
  if ( (v5 & 1) == 0 )
    goto LABEL_6;
  do
  {
    ++v4;
    v6 *= 2;
  }
  while ( (v5 & v6) != 0 );
  if ( v4 > 32 )
  {
    WdLogSingleEntry2(2LL, 32LL, this);
    result = 3223192404LL;
    WdLogGlobalForLineNumber = 295;
  }
  else
  {
LABEL_6:
    *a2 = v4;
    return 0LL;
  }
  return result;
}
