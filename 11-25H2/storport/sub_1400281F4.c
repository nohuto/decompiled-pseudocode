/*
 * XREFs of sub_1400281F4 @ 0x1400281F4
 * Callers:
 *     sub_140027FB4 @ 0x140027FB4 (sub_140027FB4.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_140015BC8 @ 0x140015BC8 (sub_140015BC8.c)
 *     sub_140017C40 @ 0x140017C40 (sub_140017C40.c)
 *     sub_14002285C @ 0x14002285C (sub_14002285C.c)
 *     sub_140028E24 @ 0x140028E24 (sub_140028E24.c)
 *     sub_140028EF8 @ 0x140028EF8 (sub_140028EF8.c)
 *     sub_140029040 @ 0x140029040 (sub_140029040.c)
 *     sub_14006CED0 @ 0x14006CED0 (sub_14006CED0.c)
 *     sub_1401AA320 @ 0x1401AA320 (sub_1401AA320.c)
 */

__int64 __fastcall sub_1400281F4(__int64 a1)
{
  _QWORD *v1; // r14
  __int64 v2; // rbp
  __int64 v4; // rdx
  ULONG MaximumProcessorCount; // eax
  __int64 v6; // rcx
  __int64 v7; // rdx
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  PVOID *v10; // r15
  int v11; // ebx
  PDEVICE_OBJECT *v12; // rdi
  __int64 *v13; // rbx
  __int64 v14; // rcx
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // rdx
  unsigned int v19; // eax
  __int64 v20; // rax
  USHORT CurrentNodeNumber; // ax
  PSLIST_ENTRY v22; // rax
  int v23; // edi
  unsigned int v24; // r14d
  unsigned int i; // ebx
  int v26; // ecx
  _DWORD *v27; // rcx
  __int64 v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rdx
  unsigned int v31; // ecx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rbx
  _DWORD *v35; // rax
  PIO_WORKITEM WorkItem; // rax
  PIO_WORKITEM v37; // rax
  struct _DEVICE_OBJECT *v38; // rcx
  PIO_WORKITEM v39; // rax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *CacheAwareRundownProtection; // rax

  v1 = (_QWORD *)(a1 + 24);
  *(_DWORD *)(a1 + 1032) = 0x10000000;
  v2 = *(_QWORD *)(a1 + 24);
  *(_DWORD *)(a1 + 1824) = -1;
  KeInitializeEvent((PRKEVENT)(a1 + 520), SynchronizationEvent, 0);
  v4 = *(_QWORD *)(a1 + 32);
  if ( v4 )
  {
    *(_DWORD *)(v4 + 80) ^= (*(_DWORD *)(v4 + 80) ^ (unsigned __int8)byte_140168D80) & 1;
    **(_DWORD **)(a1 + 32) = 1;
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 32) + 80LL) & 1) == 0 )
    {
      MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
      if ( MaximumProcessorCount )
      {
        v6 = 0LL;
        v7 = MaximumProcessorCount;
        do
        {
          v6 += 64LL;
          *(_DWORD *)(*(_QWORD *)(a1 + 40) + v6 - 60) = 1;
          --v7;
        }
        while ( v7 );
        v1 = (_QWORD *)(a1 + 24);
      }
    }
    v8 = (_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
    v8[1] = v8;
    *v8 = v8;
    v9 = (_QWORD *)(*(_QWORD *)(a1 + 32) + 48LL);
    v9[1] = v9;
    *v9 = v9;
    KeInitializeTimer((PKTIMER)(*(_QWORD *)(a1 + 32) + 88LL));
    v10 = (PVOID *)(a1 + 8);
    KeInitializeDpc((PRKDPC)(*(_QWORD *)(a1 + 32) + 152LL), sub_14003E980, *(PVOID *)(a1 + 8));
  }
  else
  {
    v10 = (PVOID *)(a1 + 8);
  }
  KeInitializeDpc((PRKDPC)(a1 + 1312), sub_1400A06F0, *v10);
  KeInitializeDpc((PRKDPC)(a1 + 1120), sub_140030B40, *v10);
  KeInitializeTimer((PKTIMER)(a1 + 1056));
  KeInitializeTimer((PKTIMER)(a1 + 1184));
  KeInitializeDpc((PRKDPC)(a1 + 1248), sub_1400422E0, *v10);
  KeSetCoalescableTimer((PKTIMER)(a1 + 1056), (LARGE_INTEGER)-20000000LL, 0x7D0u, 0x12Cu, (PKDPC)(a1 + 1120));
  v11 = sub_140028E24(a1 + 560);
  if ( v11 < 0 )
    goto LABEL_20;
  v12 = (PDEVICE_OBJECT *)v10;
  if ( (unsigned __int8)sub_140029040(*v1) )
  {
    sub_14006CED0(*(_QWORD *)(a1 + 560), 0LL);
    v12 = (PDEVICE_OBJECT *)(a1 + 8);
  }
  if ( *(_DWORD *)v2 == 1094997074 && (*(_BYTE *)(v2 + 111) & 4) != 0 )
  {
    v13 = (__int64 *)v12;
  }
  else
  {
    v11 = sub_1401AA320(a1 + 576, (unsigned int)(*(_DWORD *)(v2 + 592) + 1), *v10);
    if ( v11 < 0 )
    {
LABEL_20:
      sub_140015BC8(a1);
      return (unsigned int)v11;
    }
    v13 = (__int64 *)(a1 + 8);
  }
  KeInitializeSpinLock((PKSPIN_LOCK)(a1 + 48));
  KeInitializeSpinLock((PKSPIN_LOCK)(a1 + 1920));
  v14 = *(_QWORD *)(a1 + 32);
  if ( v14 )
  {
    KeInitializeSpinLock((PKSPIN_LOCK)(v14 + 24));
    *(_QWORD *)(*(_QWORD *)(a1 + 32) + 64LL) = IoAllocateWorkItem(*v12);
    if ( !*(_QWORD *)(*(_QWORD *)(a1 + 32) + 64LL) )
      goto LABEL_19;
  }
  v16 = *v13;
  v17 = *(unsigned int *)(v2 + 592);
  v18 = *(_QWORD *)(v2 + 960);
  *(_DWORD *)(a1 + 912) = 0;
  *(_QWORD *)(a1 + 704) = v16;
  *(_QWORD *)(a1 + 712) = sub_14004EEC0;
  sub_140028EF8(a1 + 720, v18, v17);
  v19 = *(_DWORD *)(v2 + 520);
  if ( v19 )
  {
    v20 = sub_1400143E0(64LL, v19, 1163223378LL, *v13);
    *(_QWORD *)(a1 + 16) = v20;
    if ( !v20 )
    {
      v11 = -1073741801;
      goto LABEL_20;
    }
  }
  if ( *(_DWORD *)v2 != 1094997074 || (*(_BYTE *)(v2 + 111) & 4) == 0 )
  {
    CurrentNodeNumber = KeGetCurrentNodeNumber();
    v22 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(*(_QWORD *)(a1 + 576) + ((unsigned __int64)CurrentNodeNumber << 6)));
    if ( !v22 )
    {
      v23 = 0;
      v24 = KeQueryHighestNodeNumber() + 1;
      do
      {
        for ( i = 0; i < v24; ++i )
        {
          v22 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(*(_QWORD *)(a1 + 576) + ((unsigned __int64)i << 6)));
          if ( v22 )
            goto LABEL_34;
        }
        ++v23;
      }
      while ( v23 != 10 );
      goto LABEL_19;
    }
LABEL_34:
    v26 = *((_DWORD *)&v22->Next + 2);
    if ( v26 == -1 )
    {
LABEL_19:
      v11 = -1073741670;
      goto LABEL_20;
    }
    *(_DWORD *)(a1 + 1824) = v26;
  }
  v27 = *(_DWORD **)(a1 + 24);
  v28 = 79LL;
  v29 = 79LL;
  if ( *v27 != 1314275652 )
    v29 = 131LL;
  v30 = ((v27[v29] + 7) & 0xFFFFFFF8) + 1184;
  v31 = ((v27[v29] + 7) & 0xFFFFFFF8) + 1328;
  if ( *(_BYTE *)(v2 + 482) != 1 )
    v31 = v30;
  v32 = sub_14002285C(v31, v30, (_QWORD *)v2);
  v34 = v32;
  if ( !v32 )
    goto LABEL_19;
  *(_QWORD *)(a1 + 1840) = v32 + 48;
  *(_QWORD *)(a1 + 1848) = v32 + 928;
  *(_QWORD *)(a1 + 1832) = v32 + 1184;
  sub_140017C40(v32 + 48, v33, 0, 0LL);
  if ( *(_BYTE *)(v2 + 482) == 1 )
  {
    *(_DWORD *)(v34 + 792) = 144;
    v35 = *(_DWORD **)(a1 + 24);
    if ( *v35 != 1314275652 )
      v28 = 131LL;
    *(_QWORD *)(v34 + 808) = v34 + ((v35[v28] + 7) & 0xFFFFFFF8) + 1184LL;
  }
  WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(a1 + 8));
  *(_QWORD *)(a1 + 1976) = WorkItem;
  if ( !WorkItem )
    goto LABEL_19;
  v37 = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(a1 + 8));
  *(_QWORD *)(a1 + 1992) = v37;
  if ( !v37 )
    goto LABEL_19;
  v38 = *(struct _DEVICE_OBJECT **)(a1 + 8);
  *(_QWORD *)(a1 + 2000) = 0LL;
  *(_DWORD *)(a1 + 2008) = 0;
  v39 = IoAllocateWorkItem(v38);
  *(_QWORD *)(a1 + 2016) = v39;
  if ( !v39 )
    goto LABEL_19;
  CacheAwareRundownProtection = ExAllocateCacheAwareRundownProtection((POOL_TYPE)512, 0x4F506152u);
  *(_QWORD *)(a1 + 1864) = CacheAwareRundownProtection;
  if ( !CacheAwareRundownProtection )
    goto LABEL_19;
  ExWaitForRundownProtectionReleaseCacheAware(CacheAwareRundownProtection);
  return 0LL;
}
