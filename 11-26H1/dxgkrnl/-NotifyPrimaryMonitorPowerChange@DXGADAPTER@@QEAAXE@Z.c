/*
 * XREFs of ?NotifyPrimaryMonitorPowerChange@DXGADAPTER@@QEAAXE@Z @ 0x140014680
 * Callers:
 *     ?PowerSettingCallback@DXGADAPTER@@SAJPEBU_GUID@@PEAXK1@Z @ 0x1404155D0 (-PowerSettingCallback@DXGADAPTER@@SAJPEBU_GUID@@PEAXK1@Z.c)
 * Callees:
 *     McTemplateK0pt_EtwWriteTransfer @ 0x140012744 (McTemplateK0pt_EtwWriteTransfer.c)
 *     ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x140013398 (-UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ.c)
 *     ?ComputeLatencyTolerancesForEngineComponents@DXGADAPTER@@QEAAXXZ @ 0x140014068 (-ComputeLatencyTolerancesForEngineComponents@DXGADAPTER@@QEAAXXZ.c)
 */

void __fastcall DXGADAPTER::NotifyPrimaryMonitorPowerChange(KSPIN_LOCK *this, char a2)
{
  char *v2; // rbx
  bool v5; // zf
  char *v6; // rcx
  char *v7; // [rsp+38h] [rbp-30h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-28h] BYREF
  char v9; // [rsp+58h] [rbp-10h]

  v2 = (char *)(this + 466);
  v9 = 0;
  v7 = (char *)(this + 466);
  KeAcquireInStackQueuedSpinLock(this + 466, &LockHandle);
  v5 = bTracingEnabled == 0;
  *((_QWORD *)v2 + 1) = KeGetCurrentThread();
  v9 = 1;
  *((_BYTE *)this + 3706) = a2;
  if ( !v5 && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
    McTemplateK0pt_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, (__int64)&Dxgk_PrimaryMonitorPowerChange);
  v6 = (char *)(this + 432);
  if ( !a2 )
    v6 = (char *)(this + 438);
  this[444] = (KSPIN_LOCK)v6;
  DXGADAPTER::UpdateLatencyTolerances((DXGADAPTER *)this);
  DXGADAPTER::ComputeLatencyTolerancesForEngineComponents((DXGADAPTER *)this);
  if ( v9 )
  {
    v9 = 0;
    *((_QWORD *)v7 + 1) = 0LL;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
