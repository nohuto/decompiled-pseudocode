/*
 * XREFs of DpiFdoIsCompatibleWithHighResolutionBoot @ 0x140244E98
 * Callers:
 *     DpiFdoStartAdapter @ 0x140245F9C (DpiFdoStartAdapter.c)
 * Callees:
 *     DpiReadPnpRegistryValue @ 0x1403914A0 (DpiReadPnpRegistryValue.c)
 */

char __fastcall DpiFdoIsCompatibleWithHighResolutionBoot(__int64 a1)
{
  __int64 v1; // rax
  char result; // al
  int v3; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 64);
  if ( !v1 || *(_DWORD *)(v1 + 16) != 1953656900 || *(_DWORD *)(v1 + 20) != 2 )
    return 1;
  v3 = 0;
  if ( (int)DpiReadPnpRegistryValue(a1, L"HighResBootCompatible", &v3, 4LL, 2) < 0 )
  {
    WdLogSingleEntry1(4LL);
    WdLogGlobalForLineNumber = 13867;
    return 1;
  }
  if ( v3 )
  {
    WdLogSingleEntry1(4LL);
    WdLogGlobalForLineNumber = 13876;
    return 1;
  }
  WdLogSingleEntry1(4LL);
  result = 0;
  WdLogGlobalForLineNumber = 13884;
  return result;
}
