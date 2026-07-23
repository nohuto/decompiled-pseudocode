/*
 * XREFs of KiUpdateVpBackingThreadPriorityOnPriorityQuery @ 0x1404F2634
 * Callers:
 *     KeQueryPriorityThread @ 0x1402053B0 (KeQueryPriorityThread.c)
 *     KeQueryEffectivePriorityThread @ 0x140452130 (KeQueryEffectivePriorityThread.c)
 * Callees:
 *     KiAcquireThreadLockRaiseToDpc @ 0x14030F3D0 (KiAcquireThreadLockRaiseToDpc.c)
 *     KiProcessDeferredReadyList @ 0x14037E6D0 (KiProcessDeferredReadyList.c)
 *     KiUpdateVpBackingThreadPriorityFromTopLevel @ 0x1403C9D80 (KiUpdateVpBackingThreadPriorityFromTopLevel.c)
 */

__int64 __fastcall KiUpdateVpBackingThreadPriorityOnPriorityQuery(struct _KTHREAD *a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  unsigned __int8 v5; // [rsp+30h] [rbp+8h] BYREF
  struct _SINGLE_LIST_ENTRY v6; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0;
  v6.Next = 0LL;
  KiAcquireThreadLockRaiseToDpc((__int64)a1, &v5);
  if ( (*((_DWORD *)&a1->0 + 1) & 0x400000) != 0 )
    KiUpdateVpBackingThreadPriorityFromTopLevel(a1, &v6, 1);
  LOBYTE(v2) = v5;
  a1->ThreadLock = 0LL;
  return KiProcessDeferredReadyList(KeGetCurrentPrcb(), &v6, v2, v3);
}
