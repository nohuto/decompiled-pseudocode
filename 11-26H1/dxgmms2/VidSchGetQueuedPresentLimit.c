/*
 * XREFs of VidSchGetQueuedPresentLimit @ 0x140115150
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall VidSchGetQueuedPresentLimit(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rcx

  if ( a1 && a2 )
  {
    *a2 = *(_DWORD *)(a1 + 252);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(1LL, -1073741811LL);
    WdLogGlobalForLineNumber = 4885;
    DxgkLogInternalTriageEvent(v3, 0x40000LL);
    return 3221225485LL;
  }
}
