/*
 * XREFs of ?KiAddThreadToSchedulingGroup@@YAXPEAU_KTHREAD@@PEAU_KSCHEDULING_GROUP@@EPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x140239DC0
 * Callers:
 *     KiSetThreadSchedulingGroup @ 0x140203854 (KiSetThreadSchedulingGroup.c)
 * Callees:
 *     KiUpdateThreadSchedulingProperties @ 0x14020433C (KiUpdateThreadSchedulingProperties.c)
 *     KiActivateScb @ 0x140239EA4 (KiActivateScb.c)
 *     KiReleaseThreadStateLock @ 0x140305180 (KiReleaseThreadStateLock.c)
 *     KiInsertDeferredReadyList @ 0x140307900 (KiInsertDeferredReadyList.c)
 *     KiAcquireThreadStateLockForWrite @ 0x1403342E0 (KiAcquireThreadStateLockForWrite.c)
 *     KiRemoveThreadFromSharedReadyQueue @ 0x140338180 (KiRemoveThreadFromSharedReadyQueue.c)
 */

void __fastcall KiAddThreadToSchedulingGroup(
        struct _KTHREAD *a1,
        struct _KSCHEDULING_GROUP *a2,
        char a3,
        struct _SINGLE_LIST_ENTRY *a4)
{
  __int64 v8; // rcx
  int v9; // edi
  __int128 v10; // [rsp+20h] [rbp-38h] BYREF
  __int128 v11; // [rsp+30h] [rbp-28h]
  __int64 v12; // [rsp+40h] [rbp-18h]

  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v9 = KiAcquireThreadStateLockForWrite(a1, &v10);
  if ( v9 == 2 )
    KiActivateScb(v10, (char *)a2 + *(unsigned int *)(v10 + 216));
  if ( a3 )
    _interlockedbittestandset((volatile signed __int32 *)&a1->116 + 1, 9u);
  a1->SchedulingGroup = a2;
  _interlockedbittestandset(&a1->Header.Lock, 0x12u);
  if ( !a3 )
  {
    KiUpdateThreadSchedulingProperties((__int64)a1, v9);
    if ( v9 == 1 )
    {
      v8 = v11;
      if ( (_QWORD)v11 )
      {
        if ( (*((_DWORD *)&a1->0 + 1) & 0x2000) == 0 )
        {
          KiRemoveThreadFromSharedReadyQueue(v11, a1, (unsigned int)a1->Priority);
          KiInsertDeferredReadyList(a4, a1);
        }
      }
    }
  }
  KiReleaseThreadStateLock(v8, &v10);
}
