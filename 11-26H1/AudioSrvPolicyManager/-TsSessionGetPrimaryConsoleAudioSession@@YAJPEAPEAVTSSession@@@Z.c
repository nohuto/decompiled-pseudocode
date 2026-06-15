/*
 * XREFs of ?TsSessionGetPrimaryConsoleAudioSession@@YAJPEAPEAVTSSession@@@Z @ 0x180007C84
 * Callers:
 *     _lambda_3e1d6363a93d165472d6dbf3529801dd_::operator() @ 0x18000676C (_lambda_3e1d6363a93d165472d6dbf3529801dd_--operator().c)
 *     ?TsSessionOnLowPowerEpochStateChanged@@YAXXZ @ 0x180007B04 (-TsSessionOnLowPowerEpochStateChanged@@YAXXZ.c)
 *     ?TsSessionOnPoStandbyAudioRequestChanged@@YAXXZ @ 0x18002DE5C (-TsSessionOnPoStandbyAudioRequestChanged@@YAXXZ.c)
 * Callees:
 *     ?IsPrimaryConsoleAudioSession@TSSession@@QEAAHXZ @ 0x180007D2C (-IsPrimaryConsoleAudioSession@TSSession@@QEAAHXZ.c)
 */

__int64 __fastcall TsSessionGetPrimaryConsoleAudioSession(struct TSSession **a1)
{
  __int64 v2; // r14
  struct TSSession *v3; // rdi
  __int64 *i; // rbx

  EnterCriticalSection(&stru_180068A08);
  v2 = qword_180068A38;
  v3 = 0LL;
  for ( i = *(__int64 **)qword_180068A38;
        i != (__int64 *)v2 && !(unsigned int)TSSession::IsPrimaryConsoleAudioSession((TSSession *)i[3]);
        i = (__int64 *)*i )
  {
    ;
  }
  if ( i != (__int64 *)qword_180068A38 )
    v3 = (struct TSSession *)i[3];
  *a1 = v3;
  LeaveCriticalSection(&stru_180068A08);
  return v3 == 0LL ? 0x80070490 : 0;
}
