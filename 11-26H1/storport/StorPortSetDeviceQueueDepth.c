/*
 * XREFs of StorPortSetDeviceQueueDepth @ 0x140038750
 * Callers:
 *     <none>
 * Callees:
 *     RaidAdapterFindUnitAtDirql @ 0x140009C04 (RaidAdapterFindUnitAtDirql.c)
 *     RaidAdapterAcquireInterruptLock @ 0x14000CD40 (RaidAdapterAcquireInterruptLock.c)
 *     RaidAdapterReleaseInterruptLock @ 0x14000EDE0 (RaidAdapterReleaseInterruptLock.c)
 *     RaidSetIoQueueDepth @ 0x14003DABC (RaidSetIoQueueDepth.c)
 *     McTemplateK0zquuuqqqt_EtwWriteTransfer @ 0x1400796C0 (McTemplateK0zquuuqqqt_EtwWriteTransfer.c)
 */

char __fastcall StorPortSetDeviceQueueDepth(
        __int64 a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        unsigned int a5)
{
  __int64 v5; // rbp
  char v6; // di
  int v7; // r15d
  int v8; // r12d
  int v9; // r13d
  __int64 v10; // rbp
  KIRQL CurrentIrql; // al
  _QWORD *v12; // r14
  _QWORD **v13; // rbp
  _QWORD *i; // rbx
  _QWORD *UnitAtDirql; // rsi
  KIRQL v17; // bl
  int v18; // eax
  int v19; // edx
  int v20; // r8d
  char v21; // r10
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-48h] BYREF
  int v23; // [rsp+B0h] [rbp+8h]

  v5 = *(_QWORD *)(a1 - 16);
  v6 = 0;
  v7 = a4;
  v8 = a3;
  v9 = a2;
  HIBYTE(v23) = 0;
  if ( (*(_DWORD *)(v5 + 248) & 1) != 0 )
    return 0;
  if ( !v5 )
    return 0;
  v10 = *(_QWORD *)v5;
  if ( !v10 )
    return 0;
  LOBYTE(v23) = a2;
  BYTE1(v23) = a3;
  BYTE2(v23) = a4;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql )
  {
    if ( (unsigned int)CurrentIrql >= *(_DWORD *)(v10 + 872) )
    {
      UnitAtDirql = RaidAdapterFindUnitAtDirql(v10, v23);
    }
    else
    {
      v17 = RaidAdapterAcquireInterruptLock(v10);
      UnitAtDirql = RaidAdapterFindUnitAtDirql(v10, v23);
      RaidAdapterReleaseInterruptLock(v10, v17);
    }
  }
  else
  {
    memset(&LockHandle, 0, sizeof(LockHandle));
    v12 = 0LL;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v10 + 136), &LockHandle);
    v13 = (_QWORD **)(v10 + 144);
    for ( i = *v13; i != v13; i = (_QWORD *)*i )
    {
      v12 = i - 8;
      if ( ((unsigned __int8)BYTE2(*((_DWORD *)i + 10)) | ((((unsigned __int8)*((_DWORD *)i + 10) << 8) | (unsigned __int8)BYTE1(*((_DWORD *)i + 10))) << 8)) == (v7 | ((v8 | (v9 << 8)) << 8)) )
        break;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    UnitAtDirql = 0LL;
    if ( i != v13 )
      UnitAtDirql = v12;
  }
  if ( !UnitAtDirql || a5 > *((_DWORD *)UnitAtDirql + 232) )
    return 0;
  if ( *((_DWORD *)UnitAtDirql + 181) == a5 )
    return 1;
  v18 = RaidSetIoQueueDepth();
  if ( v18 == v19 )
  {
    v6 = 1;
    if ( (Microsoft_Windows_StorPortEnableBits & 0x10) != 0 )
      McTemplateK0zquuuqqqt_EtwWriteTransfer(
        *(_DWORD *)(UnitAtDirql[3] + 56LL),
        v19,
        v20,
        *(_QWORD *)(UnitAtDirql[3] + 48LL),
        *(_DWORD *)(UnitAtDirql[3] + 56LL),
        v9,
        v8,
        v7,
        v21,
        v19,
        *((_DWORD *)UnitAtDirql + 232),
        1);
  }
  return v6;
}
