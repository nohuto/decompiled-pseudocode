/*
 * XREFs of ?THREAD_CODEPAGE@@YAGXZ @ 0x140224710
 * Callers:
 *     fnHkINLPMSG @ 0x1400C4FD0 (fnHkINLPMSG.c)
 *     SfnIMECONTROL @ 0x1401EC740 (SfnIMECONTROL.c)
 *     RtlWCSMessageWParamCharToMB @ 0x1401EEA10 (RtlWCSMessageWParamCharToMB.c)
 *     RtlMBMessageWParamCharToWCS @ 0x14022458C (RtlMBMessageWParamCharToWCS.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall THREAD_CODEPAGE(__int64 a1, __int64 a2)
{
  return *(unsigned __int16 *)(*((_QWORD *)PtiCurrent(a1, a2) + 65) + 152LL);
}
