/*
 * XREFs of RaidAdapterAcquireCryptoKeyResources @ 0x1400531D0
 * Callers:
 *     RaUnitStartIo @ 0x140013D70 (RaUnitStartIo.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline @ 0x140015330 (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline.c)
 *     RaidAdapterGetCryptoKeyIndex @ 0x140070F80 (RaidAdapterGetCryptoKeyIndex.c)
 */

__int64 __fastcall RaidAdapterAcquireCryptoKeyResources(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int AdapterCryptoEngineExtension; // ebx
  int *v6; // r12
  int IsEnabledDeviceUsageNoInline; // eax
  int v8; // ecx
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rdx
  unsigned int CryptoKeyIndex; // eax
  volatile LONG *v15; // rcx
  __int64 v16; // r8
  unsigned int v17; // eax
  unsigned int v18; // ecx
  unsigned int v19; // r14d
  struct _IO_WORKITEM *WorkItem; // rax
  __int64 v21; // r9
  struct _IO_WORKITEM *v22; // rdi
  _QWORD *Pool; // rax
  __int64 v24; // rbx
  unsigned __int64 v25; // rdi
  int v26; // ecx
  __int64 v27; // rdx
  __int64 v28; // r9
  unsigned __int64 v29; // r8
  __int64 v30; // rdx
  int v31; // ecx
  bool v32; // zf
  __int64 v33; // r9
  unsigned __int64 v34; // r10
  __int64 v35; // r8
  int v36; // edx
  __int64 *v38; // [rsp+60h] [rbp+8h] BYREF
  PVOID Context; // [rsp+68h] [rbp+10h]
  PIO_WORKITEM IoWorkItem; // [rsp+70h] [rbp+18h]

  v2 = *(_QWORD *)(a2 + 792);
  v38 = 0LL;
  *(_OWORD *)v2 = 0LL;
  *(_QWORD *)(v2 + 16) = 0LL;
  AdapterCryptoEngineExtension = IoGetAdapterCryptoEngineExtension(*(_QWORD *)(a2 + 160), &v38);
  if ( (AdapterCryptoEngineExtension & 0x80000000) != 0 )
    return 0;
  if ( !v38 )
    return 0;
  v6 = (int *)v38[1];
  if ( !v6 )
    return 0;
  IsEnabledDeviceUsageNoInline = Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline();
  v8 = *v6;
  if ( IsEnabledDeviceUsageNoInline )
  {
    if ( !v8 )
      return (unsigned int)-1073741811;
    if ( (unsigned int)v6[1] < 0x48 )
      return (unsigned int)-1073741811;
    v12 = *(_QWORD *)(a1 + 5680);
    v13 = (unsigned int)v6[2];
    if ( (unsigned int)v13 >= *(unsigned __int16 *)(v12 + 2) )
      return (unsigned int)-1073741811;
    v11 = *(_DWORD *)(v12 + 16 * v13 + 20);
  }
  else
  {
    if ( v8 != 1 )
      return (unsigned int)-1073741811;
    if ( (unsigned int)v6[1] < 0x48 )
      return (unsigned int)-1073741811;
    v9 = *(_QWORD *)(a1 + 5688);
    v10 = (unsigned int)v6[2];
    if ( (unsigned int)v10 >= *(unsigned __int16 *)(v9 + 10) )
      return (unsigned int)-1073741811;
    v11 = *(_DWORD *)(28 * v10 + v9 + 24);
  }
  if ( v6[3] != v11 )
    return (unsigned int)-1073741811;
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(a1 + 5712));
  CryptoKeyIndex = RaidAdapterGetCryptoKeyIndex(a1, v6 + 6, 0LL);
  v15 = (volatile LONG *)(a1 + 5712);
  if ( CryptoKeyIndex != *(_DWORD *)(a1 + 5696) )
  {
    v33 = *(_QWORD *)(a1 + 5704);
    v34 = (unsigned __int64)CryptoKeyIndex << 6;
    v35 = *v38;
    v36 = *(_DWORD *)(v34 + v33);
    **(_DWORD **)(a2 + 792) = 1;
    *(_DWORD *)(*(_QWORD *)(a2 + 792) + 4LL) = 24;
    *(_DWORD *)(*(_QWORD *)(a2 + 792) + 8LL) = v36;
    *(_QWORD *)(*(_QWORD *)(a2 + 792) + 16LL) = v35;
    _InterlockedAdd((volatile signed __int32 *)(v34 + v33 + 40), 1u);
    ExReleaseSpinLockSharedFromDpcLevel(v15);
    return AdapterCryptoEngineExtension;
  }
  ExReleaseSpinLockSharedFromDpcLevel(v15);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 5712));
  LOBYTE(v16) = 1;
  v17 = RaidAdapterGetCryptoKeyIndex(a1, v6 + 6, v16);
  v18 = *(_DWORD *)(a1 + 5696);
  if ( v17 != v18 )
  {
    v28 = *(_QWORD *)(a1 + 5704);
    v29 = (unsigned __int64)v17 << 6;
    v30 = *v38;
    v31 = *(_DWORD *)(v29 + v28);
    v32 = *(_DWORD *)(v29 + v28 + 44) == 1;
    **(_DWORD **)(a2 + 792) = 1;
    *(_DWORD *)(*(_QWORD *)(a2 + 792) + 4LL) = 24;
    *(_DWORD *)(*(_QWORD *)(a2 + 792) + 8LL) = v31;
    *(_QWORD *)(*(_QWORD *)(a2 + 792) + 16LL) = v30;
    if ( !v32 )
    {
      _InterlockedAdd((volatile signed __int32 *)(v29 + v28 + 40), 1u);
      goto LABEL_27;
    }
    _InterlockedAdd((volatile signed __int32 *)(v29 + v28 + 40), 1u);
    ExpInterlockedPushEntrySList((PSLIST_HEADER)(v29 + v28 + 48), (PSLIST_ENTRY)(a2 + 32));
LABEL_31:
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 5712));
    return 259;
  }
  if ( *(_BYTE *)(a1 + 5700) )
    goto LABEL_22;
  v19 = 0;
  if ( v18 )
  {
    while ( *(_DWORD *)(((unsigned __int64)v19 << 6) + *(_QWORD *)(a1 + 5704) + 44) )
    {
      if ( ++v19 >= v18 )
        goto LABEL_21;
    }
    goto LABEL_25;
  }
LABEL_21:
  if ( v19 == v18 )
  {
LABEL_22:
    v19 = 0;
    *(_BYTE *)(a1 + 5700) = 1;
    if ( v18 )
    {
      do
      {
        if ( !*(_DWORD *)(((unsigned __int64)v19 << 6) + *(_QWORD *)(a1 + 5704) + 40) )
          break;
        ++v19;
      }
      while ( v19 < *(_DWORD *)(a1 + 5696) );
    }
  }
LABEL_25:
  if ( v19 == *(_DWORD *)(a1 + 5696) )
  {
    AdapterCryptoEngineExtension = -1073741823;
LABEL_27:
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 5712));
    return AdapterCryptoEngineExtension;
  }
  WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(a1 + 8));
  v21 = *(_QWORD *)(a1 + 8);
  IoWorkItem = WorkItem;
  v22 = WorkItem;
  Pool = (_QWORD *)RaidAllocatePool(64LL, 56LL, 1917018450LL, v21);
  Context = Pool;
  if ( v22 && Pool )
  {
    v24 = *(_QWORD *)(a1 + 5704);
    v25 = (unsigned __int64)v19 << 6;
    *(_DWORD *)(v25 + v24 + 36) = v6[2];
    *(_OWORD *)(v25 + v24 + 4) = *(_OWORD *)(v6 + 6);
    *(_OWORD *)(v25 + v24 + 20) = *(_OWORD *)(v6 + 10);
    *(_DWORD *)(v25 + v24 + 44) = 1;
    *Pool = a1;
    *((_DWORD *)Pool + 2) = v19;
    *((_DWORD *)Pool + 4) = 2621441;
    *((_DWORD *)Pool + 5) = v19;
    *((_DWORD *)Pool + 6) = v6[2];
    *((_DWORD *)Pool + 7) = v6[4];
    *((_DWORD *)Pool + 8) = v6[5];
    Pool[5] = *((_QWORD *)v6 + 7);
    Pool[6] = *((_QWORD *)v6 + 8);
    v26 = *(_DWORD *)(v25 + v24);
    v27 = *v38;
    **(_DWORD **)(a2 + 792) = 1;
    *(_DWORD *)(*(_QWORD *)(a2 + 792) + 4LL) = 24;
    *(_DWORD *)(*(_QWORD *)(a2 + 792) + 8LL) = v26;
    *(_QWORD *)(*(_QWORD *)(a2 + 792) + 16LL) = v27;
    ExpInterlockedPushEntrySList((PSLIST_HEADER)(v25 + v24 + 48), (PSLIST_ENTRY)(a2 + 32));
    _InterlockedAdd((volatile signed __int32 *)(v25 + v24 + 40), 1u);
    IoQueueWorkItemEx(IoWorkItem, RaidAdapterProgramCryptoKeyRoutine, CriticalWorkQueue, Context);
    goto LABEL_31;
  }
  AdapterCryptoEngineExtension = -1073741670;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 5712));
  if ( Context )
    ExFreePoolWithTag(Context, 0x72436152u);
  if ( v22 )
    IoFreeWorkItem(v22);
  return AdapterCryptoEngineExtension;
}
