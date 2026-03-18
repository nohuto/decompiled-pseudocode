/*
 * XREFs of CiTaskIndexDereference @ 0x140003BB0
 * Callers:
 *     CiDispatchCreateTaskIndexClient @ 0x14000E0B0 (CiDispatchCreateTaskIndexClient.c)
 *     CiThreadCreate @ 0x14000E900 (CiThreadCreate.c)
 *     CiThreadCleanup @ 0x14000EEF0 (CiThreadCleanup.c)
 *     CiDispatchClose @ 0x14000F320 (CiDispatchClose.c)
 *     CiCreateTaskIndexClientFromThread @ 0x14000F850 (CiCreateTaskIndexClientFromThread.c)
 * Callees:
 *     CiSchedulerUpdateTimer @ 0x140001310 (CiSchedulerUpdateTimer.c)
 *     CiSchedulerRefreshTaskIndexQosProperties @ 0x140002DE0 (CiSchedulerRefreshTaskIndexQosProperties.c)
 *     CiAcquireTaskIndexListLock @ 0x14000E8E0 (CiAcquireTaskIndexListLock.c)
 *     CiTaskIndexRemove @ 0x14000F7E0 (CiTaskIndexRemove.c)
 *     CiReleaseTaskIndexListLock @ 0x14000F820 (CiReleaseTaskIndexListLock.c)
 */

void __fastcall CiTaskIndexDereference(_QWORD *P)
{
  signed __int64 v2; // rax
  signed __int64 v3; // rdx
  bool i; // zf
  signed __int64 v5; // rtt
  signed __int64 v6; // rax
  bool v7; // cc
  signed __int64 v8; // rax
  char v9; // di
  unsigned __int64 v10; // rsi
  unsigned int v11; // eax
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  _m_prefetchw(P + 6);
  v2 = P[6];
  v3 = v2 - 1;
  for ( i = v2 == 1; v2 - 1 > 0; i = v2 == 1 )
  {
    v5 = v2;
    v2 = _InterlockedCompareExchange64(P + 6, v3, v2);
    if ( v5 == v2 )
      return;
    v3 = v2 - 1;
  }
  if ( !i )
    __fastfail(0xEu);
  CiAcquireTaskIndexListLock();
  v6 = _InterlockedExchangeAdd64(P + 6, 0xFFFFFFFFFFFFFFFFuLL);
  v7 = v6 <= 1;
  v8 = v6 - 1;
  if ( !v7 )
  {
    CiReleaseTaskIndexListLock();
    return;
  }
  if ( v8 )
    __fastfail(0xEu);
  CiTaskIndexRemove(P);
  CiReleaseTaskIndexListLock();
  if ( P )
  {
    v9 = 0;
    v12 = 0LL;
    v10 = KeQueryInterruptTimePrecise(&v12);
    KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    WPP_MAIN_CB.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
    *((_DWORD *)P + 46) &= ~8u;
    if ( P[10] )
    {
      P[10] = 0LL;
      if ( *((_BYTE *)P + 92) )
        *((_BYTE *)P + 92) = 0;
      RtlRbRemoveNode(&WPP_MAIN_CB.SectorSize, P + 7);
      if ( (_QWORD *)CiSchedulerTimerNode == P + 7 )
        CiSchedulerTimerNode = 2LL;
      v9 = 1;
    }
    if ( P[15] )
    {
      P[15] = 0LL;
      if ( *((_BYTE *)P + 132) )
        *((_BYTE *)P + 132) = 0;
      RtlRbRemoveNode(&WPP_MAIN_CB.SectorSize, P + 12);
      if ( (_QWORD *)CiSchedulerTimerNode == P + 12 )
        CiSchedulerTimerNode = 2LL;
    }
    else if ( !v9 )
    {
LABEL_22:
      v11 = P[23] & 0xFFFFFFFD;
      *((_DWORD *)P + 46) = v11;
      if ( (v11 & 0x20) != 0 )
      {
        v11 &= ~0x20u;
        --CiTotalTasksDeadlineExpired;
        *((_DWORD *)P + 46) = v11;
      }
      if ( (v11 & 0x10) != 0 )
        *((_DWORD *)P + 46) = v11 & 0xFFFFFFEF;
      CiSchedulerRefreshTaskIndexQosProperties((__int64)P);
      WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
      ExFreePoolWithTag(P, 0);
      return;
    }
    CiSchedulerUpdateTimer(v10);
    goto LABEL_22;
  }
}
