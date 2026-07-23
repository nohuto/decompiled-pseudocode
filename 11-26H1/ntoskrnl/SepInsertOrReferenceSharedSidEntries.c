/*
 * XREFs of SepInsertOrReferenceSharedSidEntries @ 0x1409E43BC
 * Callers:
 *     SepSetTokenCapabilities @ 0x1409E2C54 (SepSetTokenCapabilities.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     RtlInsertEntryHashTable @ 0x14045F470 (RtlInsertEntryHashTable.c)
 *     RtlRemoveEntryHashTable @ 0x140471000 (RtlRemoveEntryHashTable.c)
 *     SepFindSharedSidEntry @ 0x1409E470C (SepFindSharedSidEntry.c)
 *     RtlCopySid @ 0x140A3DEA0 (RtlCopySid.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepInsertOrReferenceSharedSidEntries(
        __int64 a1,
        PSID *a2,
        unsigned int a3,
        struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v5; // ebp
  unsigned __int64 *v8; // rdi
  AutoBoost *v9; // rax
  void *v10; // rdx
  AutoBoost *v11; // rsi
  unsigned int v12; // esi
  unsigned int v13; // r15d
  __int64 v14; // r12
  __int64 SharedSidEntry; // rax
  struct _LIST_ENTRY *Blink; // rcx
  _RTL_DYNAMIC_HASH_TABLE_ENTRY *Pool2; // rax
  _RTL_DYNAMIC_HASH_TABLE_ENTRY *v18; // rbp
  __int64 v19; // rcx
  ULONG_PTR v20; // r8
  __int64 v21; // rax
  void *v22; // rdi
  __int64 v23; // rcx
  volatile signed __int64 *p_Lock; // rdi
  int v27; // [rsp+78h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v5 = a3;
  --CurrentThread->KernelApcDisable;
  v8 = (unsigned __int64 *)g_SepSidMapping;
  v9 = (AutoBoost *)KeAbPreAcquire((__int64)g_SepSidMapping, 0LL, 0LL, a4);
  v11 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
    ExfAcquirePushLockExclusiveEx(v8, v9, (__int64)v8);
  if ( v11 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v11, v10);
    else
      *((_BYTE *)v11 + 10) = 1;
  }
  v12 = 0;
  v13 = 0;
  while ( v12 < v5 )
  {
    v14 = v12;
    LODWORD(a2[2 * v12 + 1]) = *(_DWORD *)(a1 + 16LL * v12 + 8);
    SharedSidEntry = SepFindSharedSidEntry(*(PSID *)(a1 + 16LL * v12));
    if ( SharedSidEntry )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(SharedSidEntry + 24)) <= 1 )
        __fastfail(0xEu);
      Blink = *(struct _LIST_ENTRY **)(SharedSidEntry + 32);
    }
    else
    {
      v27 = 8 * *(unsigned __int8 *)(*(_QWORD *)(a1 + 16LL * v12) + 1LL) + 96;
      Pool2 = (_RTL_DYNAMIC_HASH_TABLE_ENTRY *)ExAllocatePool2(0x100uLL);
      v18 = Pool2;
      if ( !Pool2 )
      {
        v13 = -1073741801;
LABEL_21:
        if ( v12 )
        {
          do
          {
            v21 = SepFindSharedSidEntry(*a2);
            v22 = (void *)v21;
            v23 = _InterlockedDecrement64((volatile signed __int64 *)(v21 + 24));
            if ( v23 <= 0 )
            {
              if ( v23 )
                __fastfail(0xEu);
              if ( RtlRemoveEntryHashTable(
                     (PRTL_DYNAMIC_HASH_TABLE)g_SepSidMapping->Header.WaitListHead.Flink,
                     (PRTL_DYNAMIC_HASH_TABLE_ENTRY)v21,
                     0LL) )
              {
                ExFreePoolWithTag(v22, 0);
              }
            }
            a2 += 2;
            --v14;
          }
          while ( v14 );
        }
        break;
      }
      Pool2[1].Linkage.Blink = (struct _LIST_ENTRY *)&Pool2[1].Signature;
      Pool2[1].Linkage.Flink = (struct _LIST_ENTRY *)1;
      RtlCopySid(v27 - 40, &Pool2[1].Signature, *(PSID *)(a1 + 16LL * v12));
      v19 = *(unsigned int *)(*(_QWORD *)(a1 + 16LL * v12)
                            + 4LL * ((unsigned int)*(unsigned __int8 *)(*(_QWORD *)(a1 + 16LL * v12) + 1LL) - 1)
                            + 8);
      v20 = v19 + 1;
      if ( (_DWORD)v19 )
        v20 = *(unsigned int *)(*(_QWORD *)(a1 + 16LL * v12)
                              + 4LL * ((unsigned int)*(unsigned __int8 *)(*(_QWORD *)(a1 + 16LL * v12) + 1LL) - 1)
                              + 8);
      if ( !RtlInsertEntryHashTable((PRTL_DYNAMIC_HASH_TABLE)g_SepSidMapping->Header.WaitListHead.Flink, v18, v20, 0LL) )
      {
        v13 = -1073741823;
        ExFreePoolWithTag(v18, 0x73536553u);
        goto LABEL_21;
      }
      Blink = v18[1].Linkage.Blink;
      v5 = a3;
    }
    a2[2 * v12++] = Blink;
  }
  p_Lock = (volatile signed __int64 *)&g_SepSidMapping->Header.Lock;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&g_SepSidMapping->Header.Lock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(p_Lock);
  KeAbPostRelease((unsigned __int64)p_Lock);
  KeLeaveCriticalRegion();
  return v13;
}
