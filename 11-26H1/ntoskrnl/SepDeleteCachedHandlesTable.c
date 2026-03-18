/*
 * XREFs of SepDeleteCachedHandlesTable @ 0x140AFE698
 * Callers:
 *     SepDeleteLogonSessionTrack @ 0x140AFE360 (SepDeleteLogonSessionTrack.c)
 *     SepDeReferenceLogonSession @ 0x140B7CDEC (SepDeReferenceLogonSession.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     RtlEnumerateEntryHashTable @ 0x1403D8330 (RtlEnumerateEntryHashTable.c)
 *     RtlInitEnumerationHashTable @ 0x140466F60 (RtlInitEnumerationHashTable.c)
 *     RtlEndWeakEnumerationHashTable @ 0x14046DE30 (RtlEndWeakEnumerationHashTable.c)
 *     RtlDeleteHashTable @ 0x1404B8B10 (RtlDeleteHashTable.c)
 *     SepDereferenceCachedHandlesEntryInternal @ 0x140A8BBE8 (SepDereferenceCachedHandlesEntryInternal.c)
 */

__int64 __fastcall SepDeleteCachedHandlesTable(struct _KTHREAD *a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 result; // rax
  int v5; // esi
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v8; // rax
  void *v9; // rdx
  AutoBoost *v10; // rbp
  struct _LIST_ENTRY *Flink; // rcx
  int v12; // eax
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v13; // rax
  struct _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator; // [rsp+20h] [rbp-38h] BYREF
  char v15; // [rsp+60h] [rbp+8h] BYREF

  result = 0LL;
  v5 = 0;
  memset(&Enumerator, 0, sizeof(Enumerator));
  if ( a1 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v8 = (AutoBoost *)KeAbPreAcquire((__int64)a1, 0LL, 0LL, a4);
    v10 = v8;
    if ( _interlockedbittestandset64(&a1->Header.Lock, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)a1, v8, (__int64)a1);
    if ( v10 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v10, v9);
      else
        *((_BYTE *)v10 + 10) = 1;
    }
    Flink = a1->Header.WaitListHead.Flink;
    if ( Flink )
    {
      RtlInitEnumerationHashTable((PRTL_DYNAMIC_HASH_TABLE)Flink, &Enumerator);
      do
      {
        v13 = RtlEnumerateEntryHashTable((PRTL_DYNAMIC_HASH_TABLE)a1->Header.WaitListHead.Flink, &Enumerator);
        if ( !v13 )
          break;
        v15 = 0;
        v12 = SepDereferenceCachedHandlesEntryInternal(a1, 1, (__int64)v13, (struct _KLOCK_ENTRIES *)&v15);
        v5 = v12;
        if ( !v15 )
        {
          v5 = -1073741823;
          break;
        }
      }
      while ( v12 >= 0 );
      RtlEndWeakEnumerationHashTable((PRTL_DYNAMIC_HASH_TABLE)a1->Header.WaitListHead.Flink, &Enumerator);
      if ( v5 >= 0 )
      {
        RtlDeleteHashTable((PRTL_DYNAMIC_HASH_TABLE)a1->Header.WaitListHead.Flink);
        a1->Header.WaitListHead.Flink = 0LL;
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&a1->Header.Lock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&a1->Header.Lock);
    KeAbPostRelease((unsigned __int64)a1);
    KeLeaveCriticalRegion();
    return (unsigned int)v5;
  }
  return result;
}
