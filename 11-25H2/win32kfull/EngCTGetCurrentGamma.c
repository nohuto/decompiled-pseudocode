/*
 * XREFs of EngCTGetCurrentGamma @ 0x1401D1B10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __stdcall EngCTGetCurrentGamma(HDEV hdev)
{
  __int64 v1; // rdx
  ULONG result; // eax

  result = *(_DWORD *)(*(_QWORD *)(W32GetSessionState((_DWORD)hdev, v1) + 96) + 13456LL);
  if ( result == 1200 )
  {
    result = *((_DWORD *)hdev + 608);
    if ( !result )
      return 1200;
  }
  return result;
}
