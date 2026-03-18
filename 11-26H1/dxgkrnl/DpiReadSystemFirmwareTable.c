/*
 * XREFs of DpiReadSystemFirmwareTable @ 0x14024C100
 * Callers:
 *     <none>
 * Callees:
 *     DpiQuerySystemFirmwareTables @ 0x14024BEC8 (DpiQuerySystemFirmwareTables.c)
 */

__int64 __fastcall DpiReadSystemFirmwareTable(__int64 a1, int a2, int a3, unsigned int a4, void *a5, unsigned int *a6)
{
  __int64 v7; // rax
  int v8; // edx
  __int64 result; // rax

  if ( a1
    && (v7 = *(_QWORD *)(a1 + 64)) != 0
    && *(_DWORD *)(v7 + 16) == 1953656900
    && ((v8 = *(_DWORD *)(v7 + 20), v8 == 2) || v8 == 3) )
  {
    if ( *(_BYTE *)(v7 + 2719) )
    {
      *a6 = 0;
      return 3221226599LL;
    }
    else
    {
      return DpiQuerySystemFirmwareTables(1, a2, a3, a4, a5, a6);
    }
  }
  else
  {
    WdLogSingleEntry2(2LL, a1, -1073741585LL);
    result = 3221225711LL;
    WdLogGlobalForLineNumber = 4805;
  }
  return result;
}
