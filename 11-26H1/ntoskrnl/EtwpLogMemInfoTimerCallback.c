/*
 * XREFs of EtwpLogMemInfoTimerCallback @ 0x1404C3F60
 * Callers:
 *     <none>
 * Callees:
 *     EtwpLogMemNodeInfo @ 0x140257F54 (EtwpLogMemNodeInfo.c)
 *     EtwpLogMemInfo @ 0x14034843C (EtwpLogMemInfo.c)
 *     EtwpQueuePerfMemInfoWorkItem @ 0x1404C3FF0 (EtwpQueuePerfMemInfoWorkItem.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

void EtwpLogMemInfoTimerCallback()
{
  _KPROCESS *Process; // r8
  _QWORD v1[4]; // [rsp+20h] [rbp-38h] BYREF

  Process = stru_140E36558.ApcState.Process;
  v1[3] = qword_140E3D700;
  v1[0] = stru_140E36558.ApcState.Process;
  v1[1] = qword_140E2C588;
  v1[2] = qword_140E3D880;
  if ( (DWORD1(PerfGlobalGroupMask) & 0x80000) != 0 )
  {
    EtwpLogMemInfo(0LL, (__int64)v1);
    EtwpLogMemNodeInfo();
    Process = (_KPROCESS *)v1[0];
  }
  if ( (DWORD1(PerfGlobalGroupMask) & 0x800000) != 0 )
    EtwpQueuePerfMemInfoWorkItem(Process);
}
