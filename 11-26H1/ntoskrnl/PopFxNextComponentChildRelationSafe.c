/*
 * XREFs of PopFxNextComponentChildRelationSafe @ 0x140471340
 * Callers:
 *     PopFxComponentRelationsCleanup @ 0x140470E54 (PopFxComponentRelationsCleanup.c)
 *     PoFxRemoveComponentRelation @ 0x140604610 (PoFxRemoveComponentRelation.c)
 *     PoFxRemoveDeviceRelation @ 0x140604860 (PoFxRemoveDeviceRelation.c)
 *     PopDripsWatchdogTakeAction @ 0x14061388C (PopDripsWatchdogTakeAction.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402BDEF0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x14032F2C0 (KxAcquireSpinLock.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

char __fastcall PopFxNextComponentChildRelationSafe(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v3; // rbx
  _QWORD **v6; // rdi
  _QWORD *v7; // r14
  _QWORD *v9; // rbp
  __int64 v10; // rcx
  _QWORD *v11; // rax

  v3 = (_QWORD *)(a1 + 440);
  if ( a2 )
  {
    KxReleaseSpinLock((PKSPIN_LOCK)(a2 + 8));
    v6 = (_QWORD **)(a2 + 32);
  }
  else
  {
    v6 = (_QWORD **)(a1 + 440);
  }
  while ( 1 )
  {
    v7 = *v6;
    if ( *v6 == v3 )
      return 0;
    v9 = v7 - 4;
    KxAcquireSpinLock(v7 - 3);
    if ( (*(_DWORD *)(v7 - 2) & 8) != 0 )
      break;
    KxReleaseSpinLock(v9 + 1);
    *((_DWORD *)v9 + 4) &= ~4u;
    v9[3] = 0LL;
    v10 = *v7;
    if ( *(_QWORD **)(*v7 + 8LL) != v7 || (v11 = (_QWORD *)v7[1], (_QWORD *)*v11 != v7) )
      __fastfail(3u);
    *v11 = v10;
    *(_QWORD *)(v10 + 8) = v11;
    ExFreePoolWithTag(v7 - 4, 0x4D584650u);
  }
  *a3 = v9;
  return 1;
}
