/*
 * XREFs of EtwpLogMemInfoTimerCallback @ 0x1404BD840
 * Callers:
 *     <none>
 * Callees:
 *     EtwpLogMemNodeInfo @ 0x140259734 (EtwpLogMemNodeInfo.c)
 *     EtwpLogMemInfo @ 0x14034A4BC (EtwpLogMemInfo.c)
 *     EtwpQueuePerfMemInfoWorkItem @ 0x1404BD8D0 (EtwpQueuePerfMemInfoWorkItem.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void EtwpLogMemInfoTimerCallback()
{
  _KPROCESS *Process; // r8
  _QWORD v1[4]; // [rsp+20h] [rbp-38h] BYREF

  Process = stru_140E366D8.ApcState.Process;
  v1[3] = qword_140E3D880;
  v1[0] = stru_140E366D8.ApcState.Process;
  v1[1] = qword_140E2C708;
  v1[2] = qword_140E3DA00;
  if ( (DWORD1(PerfGlobalGroupMask) & 0x80000) != 0 )
  {
    EtwpLogMemInfo(0LL, (__int64)v1);
    EtwpLogMemNodeInfo();
    Process = (_KPROCESS *)v1[0];
  }
  if ( (DWORD1(PerfGlobalGroupMask) & 0x800000) != 0 )
    EtwpQueuePerfMemInfoWorkItem(Process);
}
