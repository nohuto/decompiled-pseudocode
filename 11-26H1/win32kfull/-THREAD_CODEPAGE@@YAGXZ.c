/*
 * XREFs of ?THREAD_CODEPAGE@@YAGXZ @ 0x14003CF24
 * Callers:
 *     fnHkINLPMSG @ 0x14003B750 (fnHkINLPMSG.c)
 *     RtlWCSMessageWParamCharToMB @ 0x14003DEC4 (RtlWCSMessageWParamCharToMB.c)
 *     RtlMBMessageWParamCharToWCS @ 0x14003E354 (RtlMBMessageWParamCharToWCS.c)
 *     SfnIMECONTROL @ 0x140214380 (SfnIMECONTROL.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall THREAD_CODEPAGE(__int64 a1)
{
  return *(unsigned __int16 *)(*((_QWORD *)PtiCurrent(a1) + 64) + 152LL);
}
