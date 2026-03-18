/*
 * XREFs of ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x140013398
 * Callers:
 *     ?PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z @ 0x140012E10 (-PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z.c)
 *     ?LatencyToleranceTimerNotification@DXGADAPTER@@QEAAX_K@Z @ 0x1400140D8 (-LatencyToleranceTimerNotification@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?NotifyPrimaryMonitorPowerChange@DXGADAPTER@@QEAAXE@Z @ 0x140014680 (-NotifyPrimaryMonitorPowerChange@DXGADAPTER@@QEAAXE@Z.c)
 *     ?NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z @ 0x140014774 (-NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z.c)
 *     ?ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x14030E300 (-ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?NotifyProcessThaw@DXGPROCESS@@QEAAXXZ @ 0x1403B6204 (-NotifyProcessThaw@DXGPROCESS@@QEAAXXZ.c)
 *     ?NotifyProcessFreeze@DXGPROCESS@@QEAAXXZ @ 0x1403B819C (-NotifyProcessFreeze@DXGPROCESS@@QEAAXXZ.c)
 *     ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x14041EB18 (-InitializePowerManagement@DXGADAPTER@@AEAAJXZ.c)
 * Callees:
 *     ?ComputeLatencyToleranceForMemoryComponents@DXGADAPTER@@QEAAXXZ @ 0x140013AAC (-ComputeLatencyToleranceForMemoryComponents@DXGADAPTER@@QEAAXXZ.c)
 *     ?SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z @ 0x140013E40 (-SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z.c)
 */

void __fastcall DXGADAPTER::UpdateLatencyTolerances(DXGADAPTER *this)
{
  struct _KTHREAD *v1; // rdx
  int v3; // eax
  int v4; // eax
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // rbx
  unsigned int v7; // edx
  int v8; // eax
  KSPIN_LOCK *v9; // [rsp+28h] [rbp-30h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF
  char v11; // [rsp+48h] [rbp-10h]

  v1 = (struct _KTHREAD *)*((_QWORD *)this + 467);
  v9 = (KSPIN_LOCK *)((char *)this + 3728);
  v11 = 0;
  if ( v1 != KeGetCurrentThread() )
  {
    KeAcquireInStackQueuedSpinLock(v9, &LockHandle);
    v9[1] = (KSPIN_LOCK)KeGetCurrentThread();
    v11 = 1;
  }
  if ( *((_QWORD *)this + 453) && *((_DWORD *)this + 40) != 1 )
  {
    v3 = *((_DWORD *)this + 855);
    if ( *((_BYTE *)this + 3706) )
    {
      if ( !v3 )
      {
        v5 = *((_QWORD *)this + 454);
        v6 = *((_QWORD *)this + 460);
        goto LABEL_12;
      }
      v4 = *((_DWORD *)this + 927);
      if ( !v4 )
      {
LABEL_11:
        v5 = *((_QWORD *)this + 445);
        v6 = *((_QWORD *)this + 458);
LABEL_12:
        if ( *((_BYTE *)this + 3704) )
          DXGADAPTER::SetPowerComponentLatencyCB(this, *((_DWORD *)this + 853), v5);
        v7 = *((_DWORD *)this + 854);
        if ( v7 != -1 )
          DXGADAPTER::SetPowerComponentLatencyCB(this, v7, v6);
        goto LABEL_4;
      }
      if ( v4 != 2 )
      {
        v6 = *((_QWORD *)this + 459);
        if ( v4 == 3 )
          v5 = *((_QWORD *)this + 451);
        else
          v5 = *((_QWORD *)this + 447);
        goto LABEL_12;
      }
      v5 = *((_QWORD *)this + 449);
    }
    else
    {
      if ( !v3 || (v8 = *((_DWORD *)this + 927), v8 == 2) || v8 == 3 )
      {
        v5 = *((_QWORD *)this + 455);
        v6 = *((_QWORD *)this + 461);
        goto LABEL_12;
      }
      if ( !v8 )
        goto LABEL_11;
      v5 = *((_QWORD *)this + 447);
    }
    v6 = *((_QWORD *)this + 459);
    goto LABEL_12;
  }
LABEL_4:
  DXGADAPTER::ComputeLatencyToleranceForMemoryComponents(this);
  if ( v11 )
  {
    v11 = 0;
    v9[1] = 0LL;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
