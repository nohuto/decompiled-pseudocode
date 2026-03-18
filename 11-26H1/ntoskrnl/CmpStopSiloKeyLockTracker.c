/*
 * XREFs of CmpStopSiloKeyLockTracker @ 0x140A67634
 * Callers:
 *     PspDeleteExternalServerSiloState @ 0x1407EED58 (PspDeleteExternalServerSiloState.c)
 *     CmpFreeSiloContextCallback @ 0x140A675E0 (CmpFreeSiloContextCallback.c)
 * Callees:
 *     CmpFreeSiloKeyLockEntry @ 0x14085B9B8 (CmpFreeSiloKeyLockEntry.c)
 *     CmpUnlockSiloKeyLockTracker @ 0x1409A604C (CmpUnlockSiloKeyLockTracker.c)
 *     KsepCacheLock @ 0x1409A73D0 (KsepCacheLock.c)
 *     CmpLockRegistry @ 0x140C58850 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140C58970 (CmpUnlockRegistry.c)
 */

struct _KTHREAD **__fastcall CmpStopSiloKeyLockTracker(
        struct _KTHREAD *a1,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *Blink; // rdx
  struct _KTHREAD **SListFaultAddress; // rax
  __int64 v7; // rcx
  struct _KTHREAD **result; // rax
  ULONG_PTR *v9; // rax
  __int64 v10; // rcx
  struct _KTHREAD *v11; // [rsp+20h] [rbp-10h] BYREF
  struct _KTHREAD **v12; // [rsp+28h] [rbp-8h]

  KsepCacheLock((unsigned __int64 *)a1, a2, a3, a4);
  LODWORD(a1->Header.WaitListHead.Flink) = (__int64)a1->Header.WaitListHead.Flink & 0xFFFFFFFC | 2;
  Blink = (struct _KTHREAD *)a1->Header.WaitListHead.Blink;
  v12 = &v11;
  v11 = (struct _KTHREAD *)&v11;
  if ( Blink != (struct _KTHREAD *)&a1->Header.WaitListHead.Blink )
  {
    SListFaultAddress = (struct _KTHREAD **)a1->SListFaultAddress;
    v11 = Blink;
    v12 = SListFaultAddress;
    Blink->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)&v11;
    *SListFaultAddress = (struct _KTHREAD *)&v11;
    a1->SListFaultAddress = &a1->Header.WaitListHead.Blink;
    a1->Header.WaitListHead.Blink = (struct _LIST_ENTRY *)&a1->Header.WaitListHead.Blink;
  }
  CmpUnlockSiloKeyLockTracker(a1);
  result = &v11;
  if ( v11 != (struct _KTHREAD *)&v11 )
  {
    CmpLockRegistry(v7);
    while ( 1 )
    {
      v9 = (ULONG_PTR *)v11;
      if ( (struct _KTHREAD **)v11->Header.WaitListHead.Flink != &v11
        || (v10 = *(_QWORD *)&v11->Header.Lock, *(struct _KTHREAD **)(*(_QWORD *)&v11->Header.Lock + 8LL) != v11) )
      {
        __fastfail(3u);
      }
      v11 = *(struct _KTHREAD **)&v11->Header.Lock;
      *(_QWORD *)(v10 + 8) = &v11;
      if ( v9 == (ULONG_PTR *)&v11 )
        break;
      CmpFreeSiloKeyLockEntry(v9);
    }
    return (struct _KTHREAD **)CmpUnlockRegistry(&v11);
  }
  return result;
}
