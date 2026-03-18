/*
 * XREFs of VidSchDdiNotifyDpc @ 0x140028C80
 * Callers:
 *     <none>
 * Callees:
 *     VidSchDdiNotifyDpcWorker @ 0x140028DF4 (VidSchDdiNotifyDpcWorker.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1400294D8 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0dq_EtwWriteTransfer @ 0x140044EC8 (McTemplateK0dq_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VidSchDdiNotifyDpc(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 DxgAdapter; // rax
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 result; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned int v12; // [rsp+30h] [rbp-30h] BYREF
  __int64 v13; // [rsp+38h] [rbp-28h]
  char v14; // [rsp+40h] [rbp-20h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-18h] BYREF

  v12 = -1;
  v13 = 0LL;
  if ( (qword_14008A010 & 2) != 0 )
  {
    v14 = 1;
    v12 = 5043;
    if ( (byte_14008A202 & 1) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 5043LL);
  }
  else
  {
    v14 = 0;
  }
  ((void (__fastcall *)(unsigned int *, __int64))DxgCoreInterface[82])(&v12, 5043LL);
  if ( (DpiGetSchedulerCallbackState(a1) & 1) != 0 )
  {
    memset(&LockHandle, 0, sizeof(LockHandle));
    DxgAdapter = DpiGetDxgAdapter(a1);
    v7 = DxgAdapter;
    if ( DxgAdapter )
    {
      v8 = *(_QWORD *)(*(_QWORD *)(DxgAdapter + 3168) + 744LL);
      if ( v8 )
      {
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v8 + 2040), &LockHandle);
        VidSchDdiNotifyDpcWorker(*(_QWORD *)(v7 + 3168), 1LL);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      }
    }
  }
  else if ( (byte_14008A202 & 1) != 0 )
  {
    McTemplateK0dq_EtwWriteTransfer(v4, &NotifyDpcCB, v5, 4294967294LL, 0);
  }
  result = ((__int64 (__fastcall *)(unsigned int *))DxgCoreInterface[83])(&v12);
  if ( v14 )
  {
    if ( (byte_14008A202 & 1) != 0 )
      return McTemplateK0q_EtwWriteTransfer(v10, &EventProfilerExit, v11, v12);
  }
  return result;
}
