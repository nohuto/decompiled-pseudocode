/*
 * XREFs of ?KiRemoveThreadFromSchedulingGroup@@YAXPEAU_KTHREAD@@EPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1402040B4
 * Callers:
 *     KiSetThreadSchedulingGroup @ 0x140203854 (KiSetThreadSchedulingGroup.c)
 * Callees:
 *     KiUpdateThreadSchedulingProperties @ 0x14020433C (KiUpdateThreadSchedulingProperties.c)
 *     KiReleaseThreadStateLock @ 0x140305180 (KiReleaseThreadStateLock.c)
 *     KiInsertDeferredReadyList @ 0x140307900 (KiInsertDeferredReadyList.c)
 *     KiRemoveThreadFromScbQueue @ 0x140307964 (KiRemoveThreadFromScbQueue.c)
 *     KiAcquireThreadStateLockForWrite @ 0x1403342E0 (KiAcquireThreadStateLockForWrite.c)
 */

void __fastcall KiRemoveThreadFromSchedulingGroup(struct _KTHREAD *a1, char a2, struct _SINGLE_LIST_ENTRY *a3)
{
  unsigned int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // esi
  struct _KPRCB *v9[2]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v10; // [rsp+30h] [rbp-28h]
  __int64 v11; // [rsp+40h] [rbp-18h]

  *(_OWORD *)v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v6 = KiAcquireThreadStateLockForWrite(a1, v9);
  _interlockedbittestandreset(&a1->Header.Lock, 0x12u);
  a1->SchedulingGroup = 0LL;
  v8 = v6;
  if ( a2 )
  {
    _interlockedbittestandreset((volatile signed __int32 *)&a1->116 + 1, 9u);
  }
  else
  {
    if ( (*((_DWORD *)&a1->0 + 1) & 0x800) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)&a1->116 + 1, 0xBu);
    KiUpdateThreadSchedulingProperties(a1, v6, v9);
    if ( v8 == 1 && (a1->MiscFlags & 0x2000) != 0 )
    {
      KiRemoveThreadFromScbQueue(v9[0]);
      KiInsertDeferredReadyList(a3, a1);
    }
  }
  KiReleaseThreadStateLock(v7, v9);
}
