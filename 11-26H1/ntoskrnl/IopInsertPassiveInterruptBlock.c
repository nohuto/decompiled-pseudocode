/*
 * XREFs of IopInsertPassiveInterruptBlock @ 0x1404FEA90
 * Callers:
 *     IopAllocatePassiveInterruptBlock @ 0x140A99270 (IopAllocatePassiveInterruptBlock.c)
 * Callees:
 *     IopReleaseGlobalPassiveInterruptListLock @ 0x1402C507C (IopReleaseGlobalPassiveInterruptListLock.c)
 *     IopAcquireGlobalPassiveInterruptListLock @ 0x1402C50B8 (IopAcquireGlobalPassiveInterruptListLock.c)
 *     IopFindPassiveInterruptBlockLocked @ 0x1402C5694 (IopFindPassiveInterruptBlockLocked.c)
 */

__int64 __fastcall IopInsertPassiveInterruptBlock(__int64 a1, _BYTE *a2)
{
  __int64 PassiveInterruptBlockLocked; // rsi
  __int64 *v5; // rcx
  unsigned __int8 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0;
  *a2 = 1;
  IopAcquireGlobalPassiveInterruptListLock(&v7);
  PassiveInterruptBlockLocked = IopFindPassiveInterruptBlockLocked(*(_DWORD *)(a1 + 20));
  if ( !PassiveInterruptBlockLocked )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 192));
    v5 = (__int64 *)qword_140F849B8;
    if ( *(__int64 **)qword_140F849B8 != &PassiveInterruptList )
      __fastfail(3u);
    *(_QWORD *)a1 = &PassiveInterruptList;
    *(_QWORD *)(a1 + 8) = v5;
    *v5 = a1;
    qword_140F849B8 = a1;
  }
  IopReleaseGlobalPassiveInterruptListLock(v7);
  if ( PassiveInterruptBlockLocked )
    *a2 = 0;
  return 0LL;
}
