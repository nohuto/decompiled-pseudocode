/*
 * XREFs of SepAddLuidToIndexEntry @ 0x140AB7B44
 * Callers:
 *     SepSetProcessUniqueAttribute @ 0x140AB7A4C (SepSetProcessUniqueAttribute.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     RtlNumberOfSetBits @ 0x140358310 (RtlNumberOfSetBits.c)
 *     RtlFindClearBitsAndSet @ 0x14035A440 (RtlFindClearBitsAndSet.c)
 *     RtlSetBits @ 0x14035AAB0 (RtlSetBits.c)
 *     SepInitSingletonEntry @ 0x1403B22B8 (SepInitSingletonEntry.c)
 *     RtlInsertEntryHashTable @ 0x14045F470 (RtlInsertEntryHashTable.c)
 *     RtlClearAllBits @ 0x140478400 (RtlClearAllBits.c)
 *     SepExpandSingletonArrays @ 0x1404EEB1C (SepExpandSingletonArrays.c)
 *     SepCleanupMarkedForDeletionEntries @ 0x14052674C (SepCleanupMarkedForDeletionEntries.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepAddLuidToIndexEntry(__int64 *a1, _QWORD *a2, __int64 *a3)
{
  struct _KLOCK_ENTRIES *v4; // r9
  __int64 Pool2; // r14
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v7; // rsi
  AutoBoost *v8; // rax
  void *v9; // rdx
  AutoBoost *v10; // rdi
  ULONG_PTR v11; // rbp
  _RTL_BITMAP *p_Blink; // r15
  ULONG ClearBitsAndSet; // esi
  int v14; // edi
  __int64 v15; // rax
  volatile signed __int64 *p_Lock; // rsi
  ULONG v18; // r12d
  void *v19; // rsi
  _RTL_DYNAMIC_HASH_TABLE *HashTable; // [rsp+70h] [rbp+18h]

  *a3 = 0LL;
  Pool2 = ExAllocatePool2(0x100uLL);
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = (unsigned __int64 *)SeLuidToIndexMapping;
  v8 = (AutoBoost *)KeAbPreAcquire((__int64)SeLuidToIndexMapping, 0LL, 0LL, v4);
  v10 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
    ExfAcquirePushLockExclusiveEx(v7, v8, (__int64)v7);
  v11 = 1LL;
  if ( v10 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v10, v9);
    else
      *((_BYTE *)v10 + 10) = 1;
  }
  p_Blink = (_RTL_BITMAP *)&SeLuidToIndexMapping->Header.WaitListHead.Blink;
  HashTable = (_RTL_DYNAMIC_HASH_TABLE *)SeLuidToIndexMapping->Header.WaitListHead.Flink;
  ClearBitsAndSet = RtlFindClearBitsAndSet((PRTL_BITMAP)&SeLuidToIndexMapping->Header.WaitListHead.Blink, 1u, 0);
  if ( ClearBitsAndSet == -1 )
  {
    SepCleanupMarkedForDeletionEntries();
    ClearBitsAndSet = RtlFindClearBitsAndSet(p_Blink, 1u, 0);
    if ( ClearBitsAndSet == -1 )
    {
      v18 = RtlNumberOfSetBits(p_Blink);
      v19 = (void *)ExAllocatePool2(0x100uLL);
      if ( !v19 )
      {
LABEL_22:
        v14 = -1073741801;
LABEL_23:
        ExFreePoolWithTag((PVOID)Pool2, 0);
        if ( v19 )
          ExFreePoolWithTag(v19, 0);
        goto LABEL_13;
      }
      v14 = SepExpandSingletonArrays();
      if ( v14 < 0 )
        goto LABEL_23;
      ExFreePoolWithTag(p_Blink->Buffer, 0);
      p_Blink->Buffer = (unsigned int *)v19;
      p_Blink->SizeOfBitMap = v18 + 64;
      RtlClearAllBits(p_Blink);
      RtlSetBits(p_Blink, 0, v18);
      ClearBitsAndSet = RtlFindClearBitsAndSet(p_Blink, 1u, 0);
    }
  }
  *(_QWORD *)(Pool2 + 24) = 1LL;
  *(_QWORD *)(Pool2 + 40) = ClearBitsAndSet;
  *(_QWORD *)(Pool2 + 32) = *a1;
  *(_BYTE *)(Pool2 + 48) = 0;
  if ( *a1 )
    v11 = *a1;
  if ( !RtlInsertEntryHashTable(HashTable, (PRTL_DYNAMIC_HASH_TABLE_ENTRY)Pool2, v11, 0LL) )
  {
    *((_BYTE *)p_Blink->Buffer + ((unsigned __int64)ClearBitsAndSet >> 3)) &= ~(1 << (ClearBitsAndSet & 7));
    v19 = 0LL;
    goto LABEL_22;
  }
  v14 = 0;
  SepInitSingletonEntry(ClearBitsAndSet, *a1);
  v15 = *(_QWORD *)(Pool2 + 40);
  *a3 = Pool2;
  *a2 = v15;
LABEL_13:
  p_Lock = (volatile signed __int64 *)&SeLuidToIndexMapping->Header.Lock;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&SeLuidToIndexMapping->Header.Lock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(p_Lock);
  KeAbPostRelease((unsigned __int64)p_Lock);
  KeLeaveCriticalRegion();
  return (unsigned int)v14;
}
