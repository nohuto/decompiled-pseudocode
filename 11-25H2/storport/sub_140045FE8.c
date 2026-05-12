/*
 * XREFs of sub_140045FE8 @ 0x140045FE8
 * Callers:
 *     sub_14004EEC0 @ 0x14004EEC0 (sub_14004EEC0.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_1400567A0 @ 0x1400567A0 (sub_1400567A0.c)
 *     sub_14006A214 @ 0x14006A214 (sub_14006A214.c)
 */

__int64 __fastcall sub_140045FE8(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int AdapterCryptoEngineExtension; // ebx
  int *v8; // r15
  int v9; // eax
  int v10; // ecx
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned int v16; // eax
  __int64 v17; // r8
  unsigned int v18; // eax
  unsigned int v19; // ecx
  unsigned int i; // ebp
  struct _IO_WORKITEM *WorkItem; // rax
  __int64 v22; // r9
  struct _IO_WORKITEM *v23; // rbx
  __int64 v24; // rax
  void *v25; // r13
  unsigned __int64 v26; // rbx
  int v27; // ecx
  __int64 v28; // rdx
  __int64 v29; // r9
  unsigned __int64 v30; // r8
  __int64 v31; // rdx
  int v32; // ecx
  bool v33; // zf
  unsigned __int64 v34; // r8
  __int64 v35; // rdx
  int v36; // ecx
  __int64 *v38; // [rsp+60h] [rbp+8h] BYREF
  PIO_WORKITEM IoWorkItem; // [rsp+68h] [rbp+10h]

  v2 = *(_QWORD *)(a2 + 792);
  v38 = 0LL;
  *(_OWORD *)v2 = 0LL;
  *(_QWORD *)(v2 + 16) = 0LL;
  AdapterCryptoEngineExtension = IoGetAdapterCryptoEngineExtension(*(_QWORD *)(a2 + 160), &v38);
  if ( (AdapterCryptoEngineExtension & 0x80000000) != 0 )
    return 0;
  if ( !v38 )
    return 0;
  v8 = (int *)v38[1];
  if ( !v8 )
    return 0;
  v9 = sub_1400567A0(v6, v5);
  v10 = *v8;
  if ( v9 )
  {
    if ( !v10 )
      return (unsigned int)-1073741811;
    if ( (unsigned int)v8[1] < 0x48 )
      return (unsigned int)-1073741811;
    v14 = *(_QWORD *)(a1 + 5616);
    v15 = (unsigned int)v8[2];
    if ( (unsigned int)v15 >= *(unsigned __int16 *)(v14 + 2) )
      return (unsigned int)-1073741811;
    v13 = *(_DWORD *)(v14 + 16 * v15 + 20);
  }
  else
  {
    if ( v10 != 1 )
      return (unsigned int)-1073741811;
    if ( (unsigned int)v8[1] < 0x48 )
      return (unsigned int)-1073741811;
    v11 = *(_QWORD *)(a1 + 5624);
    v12 = (unsigned int)v8[2];
    if ( (unsigned int)v12 >= *(unsigned __int16 *)(v11 + 10) )
      return (unsigned int)-1073741811;
    v13 = *(_DWORD *)(28 * v12 + v11 + 24);
  }
  if ( v8[3] != v13 )
    return (unsigned int)-1073741811;
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(a1 + 5648));
  v16 = sub_14006A214(a1, v8 + 6, 0LL);
  if ( v16 != *(_DWORD *)(a1 + 5632) )
  {
    v34 = *(_QWORD *)(a1 + 5640) + ((unsigned __int64)v16 << 6);
    v35 = *v38;
    v36 = *(_DWORD *)v34;
    **(_DWORD **)(a2 + 792) = 1;
    *(_DWORD *)(*(_QWORD *)(a2 + 792) + 4LL) = 24;
    *(_DWORD *)(*(_QWORD *)(a2 + 792) + 8LL) = v36;
    *(_QWORD *)(*(_QWORD *)(a2 + 792) + 16LL) = v35;
    _InterlockedAdd((volatile signed __int32 *)(v34 + 40), 1u);
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 5648));
    return AdapterCryptoEngineExtension;
  }
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 5648));
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 5648));
  LOBYTE(v17) = 1;
  v18 = sub_14006A214(a1, v8 + 6, v17);
  v19 = *(_DWORD *)(a1 + 5632);
  if ( v18 != v19 )
  {
    v29 = *(_QWORD *)(a1 + 5640);
    v30 = (unsigned __int64)v18 << 6;
    v31 = *v38;
    v32 = *(_DWORD *)(v30 + v29);
    v33 = *(_DWORD *)(v30 + v29 + 44) == 1;
    **(_DWORD **)(a2 + 792) = 1;
    *(_DWORD *)(*(_QWORD *)(a2 + 792) + 4LL) = 24;
    *(_DWORD *)(*(_QWORD *)(a2 + 792) + 8LL) = v32;
    *(_QWORD *)(*(_QWORD *)(a2 + 792) + 16LL) = v31;
    if ( !v33 )
    {
      _InterlockedAdd((volatile signed __int32 *)(v30 + v29 + 40), 1u);
      goto LABEL_27;
    }
    _InterlockedAdd((volatile signed __int32 *)(v30 + v29 + 40), 1u);
    ExpInterlockedPushEntrySList((PSLIST_HEADER)(v30 + v29 + 48), (PSLIST_ENTRY)(a2 + 32));
LABEL_31:
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 5648));
    return 259;
  }
  if ( *(_BYTE *)(a1 + 5636) )
    goto LABEL_22;
  for ( i = 0; i < v19; ++i )
  {
    if ( !*(_DWORD *)(((unsigned __int64)i << 6) + *(_QWORD *)(a1 + 5640) + 44) )
      break;
  }
  if ( i == v19 )
  {
LABEL_22:
    *(_BYTE *)(a1 + 5636) = 1;
    i = 0;
    if ( v19 )
    {
      do
      {
        if ( !*(_DWORD *)(((unsigned __int64)i << 6) + *(_QWORD *)(a1 + 5640) + 40) )
          break;
        ++i;
      }
      while ( i < *(_DWORD *)(a1 + 5632) );
    }
  }
  if ( i == *(_DWORD *)(a1 + 5632) )
  {
    AdapterCryptoEngineExtension = -1073741823;
LABEL_27:
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 5648));
    return AdapterCryptoEngineExtension;
  }
  WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(a1 + 8));
  v22 = *(_QWORD *)(a1 + 8);
  IoWorkItem = WorkItem;
  v23 = WorkItem;
  v24 = sub_1400143E0(64LL, 56LL, 1917018450LL, v22);
  v25 = (void *)v24;
  if ( v23 && v24 )
  {
    v26 = *(_QWORD *)(a1 + 5640) + ((unsigned __int64)i << 6);
    *(_DWORD *)(v26 + 36) = v8[2];
    *(_OWORD *)(v26 + 4) = *(_OWORD *)(v8 + 6);
    *(_OWORD *)(v26 + 20) = *(_OWORD *)(v8 + 10);
    *(_DWORD *)(v26 + 44) = 1;
    *(_QWORD *)v24 = a1;
    *(_DWORD *)(v24 + 8) = i;
    *(_DWORD *)(v24 + 16) = 2621441;
    *(_DWORD *)(v24 + 20) = i;
    *(_DWORD *)(v24 + 24) = v8[2];
    *(_DWORD *)(v24 + 28) = v8[4];
    *(_DWORD *)(v24 + 32) = v8[5];
    *(_QWORD *)(v24 + 40) = *((_QWORD *)v8 + 7);
    *(_QWORD *)(v24 + 48) = *((_QWORD *)v8 + 8);
    v27 = *(_DWORD *)v26;
    v28 = *v38;
    **(_DWORD **)(a2 + 792) = 1;
    *(_DWORD *)(*(_QWORD *)(a2 + 792) + 4LL) = 24;
    *(_DWORD *)(*(_QWORD *)(a2 + 792) + 8LL) = v27;
    *(_QWORD *)(*(_QWORD *)(a2 + 792) + 16LL) = v28;
    ExpInterlockedPushEntrySList((PSLIST_HEADER)(v26 + 48), (PSLIST_ENTRY)(a2 + 32));
    _InterlockedAdd((volatile signed __int32 *)(v26 + 40), 1u);
    IoQueueWorkItemEx(IoWorkItem, sub_14006A2B0, CriticalWorkQueue, v25);
    goto LABEL_31;
  }
  AdapterCryptoEngineExtension = -1073741670;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 5648));
  if ( v25 )
    ExFreePoolWithTag(v25, 0x72436152u);
  if ( IoWorkItem )
    IoFreeWorkItem(IoWorkItem);
  return AdapterCryptoEngineExtension;
}
