/*
 * XREFs of PrExtExportRecordData @ 0x1406DCB78
 * Callers:
 *     HalpLoadMicrocode @ 0x140784E40 (HalpLoadMicrocode.c)
 * Callees:
 *     GetMicrocodePatchData @ 0x1406DD430 (GetMicrocodePatchData.c)
 */

__int64 __fastcall PrExtExportRecordData(_DWORD *a1)
{
  if ( a1 && *a1 != 1 && *a1 != 2 )
  {
    if ( *a1 == 3 || *a1 == 4 || *a1 == 5 || *a1 == 6 || *a1 == 7 || *a1 == 9 )
      return 3221226021LL;
    if ( *a1 != 13 )
      return 3221225473LL;
  }
  return GetMicrocodePatchData();
}
