/*
 * XREFs of ?TsSessionRequiresReevaluationOfAudioInStandby@@YA_NPEBVTSSession@@@Z @ 0x180006A60
 * Callers:
 *     _lambda_3e1d6363a93d165472d6dbf3529801dd_::operator() @ 0x18000676C (_lambda_3e1d6363a93d165472d6dbf3529801dd_--operator().c)
 *     ?TsSessionIdDisplayNotificationCallback@@YAKPEAXK0@Z @ 0x180006860 (-TsSessionIdDisplayNotificationCallback@@YAKPEAXK0@Z.c)
 *     ?TsSessionOnLowPowerEpochStateChanged@@YAXXZ @ 0x180007B04 (-TsSessionOnLowPowerEpochStateChanged@@YAXXZ.c)
 *     _lambda_232257857a1cb6c76353db7ef02330a7_::operator() @ 0x1800288D4 (_lambda_232257857a1cb6c76353db7ef02330a7_--operator().c)
 *     ?TsSessionOnPoStandbyAudioRequestChanged@@YAXXZ @ 0x18002DE5C (-TsSessionOnPoStandbyAudioRequestChanged@@YAXXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall TsSessionRequiresReevaluationOfAudioInStandby(const struct TSSession *a1)
{
  char result; // al

  result = 0;
  if ( *((_DWORD *)a1 + 253) || g_bLowPowerEpoch || g_PoBlockAudioPlayback || !*((_DWORD *)a1 + 254) || g_bApmSuspended )
    return 1;
  return result;
}
