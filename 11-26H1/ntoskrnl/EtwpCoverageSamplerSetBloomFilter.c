/*
 * XREFs of EtwpCoverageSamplerSetBloomFilter @ 0x140837544
 * Callers:
 *     EtwpSetCoverageSamplerInformation @ 0x140837A74 (EtwpSetCoverageSamplerInformation.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     MiRemoveFromSystemSpace @ 0x140489AA8 (MiRemoveFromSystemSpace.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     MmMapViewInSessionSpace @ 0x140988210 (MmMapViewInSessionSpace.c)
 */

__int64 __fastcall EtwpCoverageSamplerSetBloomFilter(
        struct _KTHREAD *a1,
        __int64 a2,
        KPROCESSOR_MODE a3,
        struct _KLOCK_ENTRIES *a4)
{
  int SListFaultAddress_high; // eax
  struct _KTHREAD *v5; // rsi
  PVOID v6; // r15
  unsigned int v9; // ebx
  void *v10; // r10
  unsigned int v11; // ecx
  unsigned int v12; // eax
  NTSTATUS v13; // eax
  NTSTATUS v14; // eax
  PVOID v15; // rax
  int v16; // r12d
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v18; // rax
  void *v19; // rdx
  AutoBoost *v20; // rbp
  struct _KTHREAD *Thread; // rcx
  PVOID MappedBase; // [rsp+60h] [rbp+8h] BYREF
  PVOID Section; // [rsp+68h] [rbp+10h] BYREF

  SListFaultAddress_high = HIDWORD(a1->SListFaultAddress);
  v5 = 0LL;
  v6 = 0LL;
  MappedBase = 0LL;
  LOBYTE(a4) = a3;
  if ( *(_DWORD *)(a2 + 12) != SListFaultAddress_high )
    return (unsigned int)-1073741811;
  v10 = *(void **)a2;
  v11 = *(_DWORD *)(a2 + 8);
  if ( !*(_QWORD *)a2 )
  {
    if ( !v11 && !*(_DWORD *)(a2 + 16) )
    {
      v16 = 0;
      goto LABEL_16;
    }
    goto LABEL_25;
  }
  if ( !v11 )
    return (unsigned int)-1073741811;
  if ( ((v11 - 1) & v11) != 0 )
    return (unsigned int)-1073741811;
  if ( v11 > 0x8000000 )
    return (unsigned int)-1073741811;
  v12 = *(_DWORD *)(a2 + 16);
  if ( !v12 || v12 > 0xA )
    return (unsigned int)-1073741811;
  Section = 0LL;
  v13 = ObReferenceObjectByHandle(v10, 4u, MmSectionObjectType, a3, &Section, 0LL);
  v6 = Section;
  v9 = v13;
  if ( v13 >= 0 )
  {
    Section = (PVOID)*(unsigned int *)(a2 + 8);
    v14 = MmMapViewInSessionSpace(v6, &MappedBase, (PSIZE_T)&Section);
    v5 = (struct _KTHREAD *)MappedBase;
    v9 = v14;
    if ( v14 < 0 )
      goto LABEL_26;
    v15 = (PVOID)*(unsigned int *)(a2 + 8);
    if ( Section == v15 )
    {
      v16 = 8 * (_DWORD)v15 - 1;
LABEL_16:
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v18 = (AutoBoost *)KeAbPreAcquire((__int64)a1, 0LL, 0LL, a4);
      v20 = v18;
      if ( _interlockedbittestandset64(&a1->Header.Lock, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)a1, v18, (__int64)a1);
      if ( v20 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v20, v19);
        else
          *((_BYTE *)v20 + 10) = 1;
      }
      a1->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)KeGetCurrentThread();
      Thread = a1[1].WaitBlock[3].Thread;
      a1[1].WaitBlock[3].Thread = v5;
      v5 = Thread;
      LODWORD(a1[1].Spare18) = *(_DWORD *)(a2 + 8);
      HIDWORD(a1[1].Spare18) = v16;
      LODWORD(a1[1].LastXStateSaveDebugInfo) = *(_DWORD *)(a2 + 16);
      a1->Header.WaitListHead.Flink = 0LL;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&a1->Header.Lock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&a1->Header.Lock);
      KeAbPostRelease((unsigned __int64)a1);
      KeLeaveCriticalRegion();
      v9 = 0;
      goto LABEL_26;
    }
LABEL_25:
    v9 = -1073741811;
LABEL_26:
    if ( v5 )
      MiRemoveFromSystemSpace((ULONG_PTR)v5);
  }
  if ( v6 )
    ObfDereferenceObject(v6);
  return v9;
}
