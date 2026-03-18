/*
 * XREFs of TtmSessionMonitorControl @ 0x140A2D9F8
 * Callers:
 *     PopControlMonitor @ 0x140A2CCF0 (PopControlMonitor.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     TtmiTerminalMonitorControl @ 0x140760508 (TtmiTerminalMonitorControl.c)
 *     TtmiLogSessionMonitorControl @ 0x140A2DAA8 (TtmiLogSessionMonitorControl.c)
 *     TtmiLogError @ 0x140A2DC20 (TtmiLogError.c)
 *     TtmpAcquireSessionById @ 0x140A2DD78 (TtmpAcquireSessionById.c)
 */

__int64 __fastcall TtmSessionMonitorControl(unsigned int a1, unsigned int a2, unsigned int a3)
{
  int v6; // eax
  __int64 v7; // rdi
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v11; // [rsp+58h] [rbp+20h] BYREF

  v11 = 0LL;
  v6 = TtmpAcquireSessionById(&v11, a1);
  v7 = v11;
  v8 = v6;
  if ( v6 >= 0 )
  {
    v6 = TtmiTerminalMonitorControl(v11, *(_QWORD *)(v11 + 32), a2, a3);
    v8 = v6;
    if ( v6 >= 0 )
      goto LABEL_6;
    v9 = 4038LL;
  }
  else
  {
    v9 = 4026LL;
  }
  TtmiLogError("TtmSessionMonitorControl", v9, (unsigned int)v6, (unsigned int)v6);
LABEL_6:
  if ( v7 )
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  TtmiLogSessionMonitorControl(a1, a2, a3, v8);
  return v8;
}
