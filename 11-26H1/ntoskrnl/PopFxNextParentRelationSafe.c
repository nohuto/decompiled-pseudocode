/*
 * XREFs of PopFxNextParentRelationSafe @ 0x14046A9F0
 * Callers:
 *     PopFxComponentRelationsCleanup @ 0x14046A5D4 (PopFxComponentRelationsCleanup.c)
 *     PopFxDeviceRelationsCleanup @ 0x14046A7E4 (PopFxDeviceRelationsCleanup.c)
 *     PopFxNotifyPostDIrpCompletion @ 0x14046A938 (PopFxNotifyPostDIrpCompletion.c)
 *     PopFxNotifyPreDIrpIssue @ 0x1405123F4 (PopFxNotifyPreDIrpIssue.c)
 *     PoFxRemoveComponentRelation @ 0x140607110 (PoFxRemoveComponentRelation.c)
 *     PoFxRemoveDeviceRelation @ 0x140607360 (PoFxRemoveDeviceRelation.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

char __fastcall PopFxNextParentRelationSafe(_QWORD **a1, __int64 a2, _QWORD *a3)
{
  _QWORD **v6; // rdi
  _QWORD *v7; // rsi
  _QWORD *v9; // rbp
  __int64 v10; // rcx
  _QWORD *v11; // rax

  if ( a2 )
  {
    KxReleaseSpinLock((PKSPIN_LOCK)(a2 + 8));
    v6 = (_QWORD **)(a2 + 56);
  }
  else
  {
    v6 = a1;
  }
  while ( 1 )
  {
    v7 = *v6;
    if ( *v6 == a1 )
      return 0;
    v9 = v7 - 7;
    KxAcquireSpinLock(v7 - 6);
    if ( (*(_DWORD *)(v7 - 5) & 4) != 0 )
      break;
    KxReleaseSpinLock(v9 + 1);
    *((_DWORD *)v9 + 4) &= ~8u;
    v9[6] = 0LL;
    v10 = *v7;
    if ( *(_QWORD **)(*v7 + 8LL) != v7 || (v11 = (_QWORD *)v7[1], (_QWORD *)*v11 != v7) )
      __fastfail(3u);
    *v11 = v10;
    *(_QWORD *)(v10 + 8) = v11;
    ExFreePoolWithTag(v7 - 7, 0x4D584650u);
  }
  *a3 = v9;
  return 1;
}
