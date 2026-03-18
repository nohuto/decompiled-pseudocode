/*
 * XREFs of DpiEnumSystemFirmwareTables @ 0x14024B560
 * Callers:
 *     <none>
 * Callees:
 *     DpiQuerySystemFirmwareTables @ 0x14024BEC8 (DpiQuerySystemFirmwareTables.c)
 */

__int64 __fastcall DpiEnumSystemFirmwareTables(__int64 a1, int a2, int a3, void *a4, _DWORD *a5)
{
  __int64 v6; // rax
  int v7; // edx
  __int64 result; // rax

  if ( a1
    && (v6 = *(_QWORD *)(a1 + 64)) != 0
    && *(_DWORD *)(v6 + 16) == 1953656900
    && ((v7 = *(_DWORD *)(v6 + 20), v7 == 2) || v7 == 3) )
  {
    if ( *(_BYTE *)(v6 + 2719) )
    {
      *a5 = 0;
      return 3221226599LL;
    }
    else
    {
      return DpiQuerySystemFirmwareTables(0, a2, 0, a3, a4, (__int64)a5);
    }
  }
  else
  {
    WdLogSingleEntry2(2LL, a1, -1073741585LL);
    result = 3221225711LL;
    WdLogGlobalForLineNumber = 4726;
  }
  return result;
}
