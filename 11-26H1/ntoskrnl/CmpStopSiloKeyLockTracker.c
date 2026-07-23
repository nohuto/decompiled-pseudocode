/*
 * XREFs of CmpStopSiloKeyLockTracker @ 0x140A74604
 * Callers:
 *     PspDeleteExternalServerSiloState @ 0x1407F48B8 (PspDeleteExternalServerSiloState.c)
 *     CmpFreeSiloContextCallback @ 0x140A745B0 (CmpFreeSiloContextCallback.c)
 * Callees:
 *     CmpFreeSiloKeyLockEntry @ 0x140861CAC (CmpFreeSiloKeyLockEntry.c)
 *     CmpUnlockSiloKeyLockTracker @ 0x140966AAC (CmpUnlockSiloKeyLockTracker.c)
 *     KsepCacheLock @ 0x140967E30 (KsepCacheLock.c)
 *     CmpLockRegistry @ 0x140C5E850 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
 */

struct _KTHREAD **__fastcall CmpStopSiloKeyLockTracker(
        struct _KTHREAD *a1,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *Blink; // rdx
  struct _KTHREAD **SListFaultAddress; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  struct _KTHREAD **result; // rax
  ULONG_PTR *v12; // rax
  __int64 v13; // rcx
  struct _KTHREAD *v14; // [rsp+20h] [rbp-10h] BYREF
  struct _KTHREAD **v15; // [rsp+28h] [rbp-8h]

  KsepCacheLock((unsigned __int64 *)a1, a2, a3, a4);
  LODWORD(a1->Header.WaitListHead.Flink) = (__int64)a1->Header.WaitListHead.Flink & 0xFFFFFFFC | 2;
  Blink = (struct _KTHREAD *)a1->Header.WaitListHead.Blink;
  v15 = &v14;
  v14 = (struct _KTHREAD *)&v14;
  if ( Blink != (struct _KTHREAD *)&a1->Header.WaitListHead.Blink )
  {
    SListFaultAddress = (struct _KTHREAD **)a1->SListFaultAddress;
    v14 = Blink;
    v15 = SListFaultAddress;
    Blink->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)&v14;
    *SListFaultAddress = (struct _KTHREAD *)&v14;
    a1->SListFaultAddress = &a1->Header.WaitListHead.Blink;
    a1->Header.WaitListHead.Blink = (struct _LIST_ENTRY *)&a1->Header.WaitListHead.Blink;
  }
  CmpUnlockSiloKeyLockTracker(a1);
  result = &v14;
  if ( v14 != (struct _KTHREAD *)&v14 )
  {
    CmpLockRegistry(v8, v7, v9, v10);
    while ( 1 )
    {
      v12 = (ULONG_PTR *)v14;
      if ( (struct _KTHREAD **)v14->Header.WaitListHead.Flink != &v14
        || (v13 = *(_QWORD *)&v14->Header.Lock, *(struct _KTHREAD **)(*(_QWORD *)&v14->Header.Lock + 8LL) != v14) )
      {
        __fastfail(3u);
      }
      v14 = *(struct _KTHREAD **)&v14->Header.Lock;
      *(_QWORD *)(v13 + 8) = &v14;
      if ( v12 == (ULONG_PTR *)&v14 )
        break;
      CmpFreeSiloKeyLockEntry(v12);
    }
    return (struct _KTHREAD **)CmpUnlockRegistry(&v14);
  }
  return result;
}
