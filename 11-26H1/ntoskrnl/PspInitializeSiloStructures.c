/*
 * XREFs of PspInitializeSiloStructures @ 0x140CDF024
 * Callers:
 *     PspInitPhase0 @ 0x140D0D27C (PspInitPhase0.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ObCreateObjectType @ 0x14077E5D0 (ObCreateObjectType.c)
 *     PspSiloInitializeSharedUserSessionId @ 0x1407F525C (PspSiloInitializeSharedUserSessionId.c)
 *     PspStorageAllocSlot @ 0x140805414 (PspStorageAllocSlot.c)
 *     PspStorageFreeSlot @ 0x140805524 (PspStorageFreeSlot.c)
 *     PspAllocStorage @ 0x140B0BB04 (PspAllocStorage.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

char PspInitializeSiloStructures()
{
  ULONG_PTR Pool2; // rax
  __int64 v1; // rdx
  __int64 v2; // r8
  struct _KLOCK_ENTRIES *v3; // r9
  __int64 v4; // rdx
  __int64 v5; // r8
  struct _KLOCK_ENTRIES *v6; // r9
  __int64 v7; // rdx
  __int64 v8; // r8
  struct _KLOCK_ENTRIES *v9; // r9
  unsigned int v10; // ecx
  __int64 v12; // rdx
  __int64 v13; // r8
  struct _KLOCK_ENTRIES *v14; // r9
  void *Flink; // rcx
  __int16 v16; // [rsp+20h] [rbp-29h] BYREF
  char v17; // [rsp+22h] [rbp-27h]
  int v18; // [rsp+2Ch] [rbp-1Dh]
  int v19; // [rsp+30h] [rbp-19h]
  int v20; // [rsp+34h] [rbp-15h]
  int v21; // [rsp+38h] [rbp-11h]
  int v22; // [rsp+3Ch] [rbp-Dh]
  int v23; // [rsp+44h] [rbp-5h]
  __int64 (__fastcall *v24)(__int64); // [rsp+68h] [rbp+1Fh]

  Pool2 = ExAllocatePool2(64LL, 0x270uLL, 0x476C6953u);
  qword_140FC9E48 = Pool2;
  if ( !Pool2
    || (int)PspSiloInitializeSharedUserSessionId(Pool2) < 0
    || (int)PspStorageAllocSlot((ULONG *)&PsObjectDirectorySiloContextSlot, v1, v2, v3) < 0 )
  {
    return 0;
  }
  if ( (int)PspStorageAllocSlot((ULONG *)&PsObjectDirectoryTeardownSlot, v4, v5, v6) < 0 )
  {
    v10 = PsObjectDirectorySiloContextSlot;
LABEL_6:
    PspStorageFreeSlot(v10, v7, v8, v9);
    return 0;
  }
  if ( (int)PspStorageAllocSlot((ULONG *)&PsSystemRootSiloContextSlot, v7, v8, v9) < 0 )
  {
    PspStorageFreeSlot(PsObjectDirectorySiloContextSlot, v12, v13, v14);
    v10 = PsObjectDirectoryTeardownSlot;
    goto LABEL_6;
  }
  *(_QWORD *)&PspSiloMonitorLock.Header.Lock = 0LL;
  *(_QWORD *)&KiSystemServiceTraceCallbackLock.CurrentRunTime = &KiSystemServiceTraceCallbackLock.CycleTime;
  KiSystemServiceTraceCallbackLock.CycleTime = (volatile unsigned __int64)&KiSystemServiceTraceCallbackLock.CycleTime;
  memset_0(&v16, 0, 0x78uLL);
  v17 |= 0x84u;
  v16 = 120;
  v18 = 0x20000;
  v19 = 0x20000;
  v20 = 0x20000;
  v23 = 1;
  v21 = 983040;
  v22 = 983040;
  v24 = PspDeleteSiloContext;
  if ( (int)ObCreateObjectType((const UNICODE_STRING *)L"$&", &v16, 0LL, (__int64)&PspSiloMonitorLock.600) < 0 )
    return 0;
  v23 = 512;
  if ( (int)ObCreateObjectType((const UNICODE_STRING *)L"*,", &v16, 0LL, (__int64)&PspSiloMonitorLock.IoSelfBoostsEntry) < 0 )
  {
    Flink = PspSiloMonitorLock.SavedApcState.ApcListHead[0].Flink;
LABEL_13:
    ObfDereferenceObjectWithTag(Flink, 0x746C6644u);
    return 0;
  }
  if ( (int)PspAllocStorage(&qword_140FC9E30) < 0 )
  {
    ObfDereferenceObjectWithTag(PspSiloMonitorLock.SavedApcState.ApcListHead[0].Flink, 0x746C6644u);
    Flink = PspSiloMonitorLock.IoSelfBoostsEntry.Next;
    goto LABEL_13;
  }
  return 1;
}
