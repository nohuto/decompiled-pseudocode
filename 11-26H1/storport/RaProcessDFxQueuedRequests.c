/*
 * XREFs of RaProcessDFxQueuedRequests @ 0x140073A90
 * Callers:
 *     <none>
 * Callees:
 *     GetRaidAdapter @ 0x140010A8C (GetRaidAdapter.c)
 *     GetNvmeNamespace @ 0x14005CC1C (GetNvmeNamespace.c)
 *     GetNvmeAdapter @ 0x140072360 (GetNvmeAdapter.c)
 *     RaProcessDFxPendingIrp @ 0x140073508 (RaProcessDFxPendingIrp.c)
 */

void __fastcall RaProcessDFxQueuedRequests(__int64 DeviceObject, struct _IO_WORKITEM *Context)
{
  KSPIN_LOCK *v2; // rbx
  int v5; // eax
  KSPIN_LOCK *RaidAdapter; // rbx
  _QWORD *v7; // rdi
  _QWORD *v8; // r14
  _QWORD *v9; // rax
  _QWORD *v10; // rdi
  _QWORD *v11; // r14
  _QWORD *v12; // rax
  _DWORD *NvmeAdapter; // rdi
  __int64 i; // rcx
  _QWORD *v15; // rcx
  _QWORD *v16; // rbx
  _QWORD *v17; // rax
  _DWORD *NvmeNamespace; // rdi
  __int64 j; // rcx
  _QWORD *v20; // rcx
  _QWORD *v21; // rbx
  _QWORD *v22; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-20h] BYREF

  v2 = *(KSPIN_LOCK **)(DeviceObject + 64);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v5 = *(_DWORD *)v2;
  if ( *(_DWORD *)v2 == 1094997074 )
  {
    RaidAdapter = (KSPIN_LOCK *)GetRaidAdapter(DeviceObject);
    v7 = RaidAdapter + 726;
    while ( (_QWORD *)*v7 != v7 )
    {
      KeAcquireInStackQueuedSpinLock(RaidAdapter + 729, &LockHandle);
      v8 = (_QWORD *)RaidAdapter[727];
      if ( (_QWORD *)*v8 != v7 )
        goto LABEL_27;
      v9 = (_QWORD *)v8[1];
      if ( (_QWORD *)*v9 != v8 )
        goto LABEL_27;
      RaidAdapter[727] = (KSPIN_LOCK)v9;
      *v9 = v7;
      --*((_DWORD *)RaidAdapter + 1456);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      RaProcessDFxPendingIrp(DeviceObject, *(v8 - 1));
    }
    *((_BYTE *)RaidAdapter + 109) &= ~0x40u;
  }
  else if ( v5 == 1431193940 )
  {
    v10 = v2 + 437;
    while ( (_QWORD *)*v10 != v10 )
    {
      KeAcquireInStackQueuedSpinLock(v2 + 440, &LockHandle);
      v11 = (_QWORD *)v2[438];
      if ( (_QWORD *)*v11 != v10 )
        goto LABEL_27;
      v12 = (_QWORD *)v11[1];
      if ( (_QWORD *)*v12 != v11 )
        goto LABEL_27;
      v2[438] = (KSPIN_LOCK)v12;
      *v12 = v10;
      --*((_DWORD *)v2 + 878);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      RaProcessDFxPendingIrp(DeviceObject, *(v11 - 1));
    }
    *((_BYTE *)v2 + 507) &= ~2u;
  }
  else
  {
    if ( v5 == 1314275652 )
    {
      NvmeAdapter = GetNvmeAdapter(DeviceObject);
      for ( i = *((_QWORD *)NvmeAdapter + 20); ; i = *((_QWORD *)NvmeAdapter + 20) )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(i + 168), &LockHandle);
        v15 = (_QWORD *)(*((_QWORD *)NvmeAdapter + 20) + 144LL);
        if ( (_QWORD *)*v15 == v15 )
          break;
        v16 = *(_QWORD **)(*((_QWORD *)NvmeAdapter + 20) + 152LL);
        if ( (_QWORD *)*v16 != v15 )
          goto LABEL_27;
        v17 = (_QWORD *)v16[1];
        if ( (_QWORD *)*v17 != v16 )
          goto LABEL_27;
        *(_QWORD *)(*((_QWORD *)NvmeAdapter + 20) + 152LL) = v17;
        *v17 = v15;
        --*(_DWORD *)(*((_QWORD *)NvmeAdapter + 20) + 160LL);
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        RaProcessDFxPendingIrp(DeviceObject, *(v16 - 1));
      }
    }
    else
    {
      if ( v5 != 1314278989 )
        goto LABEL_29;
      NvmeNamespace = GetNvmeNamespace(DeviceObject);
      for ( j = *((_QWORD *)NvmeNamespace + 16); ; j = *((_QWORD *)NvmeNamespace + 16) )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(j + 128), &LockHandle);
        v20 = (_QWORD *)(*((_QWORD *)NvmeNamespace + 16) + 104LL);
        if ( (_QWORD *)*v20 == v20 )
          break;
        v21 = *(_QWORD **)(*((_QWORD *)NvmeNamespace + 16) + 112LL);
        if ( (_QWORD *)*v21 != v20 || (v22 = (_QWORD *)v21[1], (_QWORD *)*v22 != v21) )
LABEL_27:
          __fastfail(3u);
        *(_QWORD *)(*((_QWORD *)NvmeNamespace + 16) + 112LL) = v22;
        *v22 = v20;
        --*(_DWORD *)(*((_QWORD *)NvmeNamespace + 16) + 120LL);
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        RaProcessDFxPendingIrp(DeviceObject, *(v21 - 1));
      }
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
LABEL_29:
  if ( Context )
    IoFreeWorkItem(Context);
}
