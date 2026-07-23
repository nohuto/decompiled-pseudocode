/*
 * XREFs of VfThunkAddDriverThunks @ 0x140C3B084
 * Callers:
 *     ViAddVerifierThunks @ 0x140644514 (ViAddVerifierThunks.c)
 * Callees:
 *     KeReleaseMutex @ 0x1403E02E0 (KeReleaseMutex.c)
 *     ViThunkCreateThunkTable @ 0x140C3B6BC (ViThunkCreateThunkTable.c)
 *     VfDriverLock @ 0x140C4C814 (VfDriverLock.c)
 */

__int64 __fastcall VfThunkAddDriverThunks(void *a1)
{
  __int64 v2; // rcx
  _QWORD *ThunkTable; // rbx
  _QWORD *v4; // rax
  signed __int32 v5[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( (VfRuleClasses & 0x400000) != 0 )
    return 3221225659LL;
  ThunkTable = (_QWORD *)ViThunkCreateThunkTable(a1);
  if ( !ThunkTable )
    return 3221225626LL;
  VfDriverLock(v2);
  VfThunksExtended = 1;
  _InterlockedOr(v5, 0);
  v4 = (_QWORD *)*((_QWORD *)&ViVerifierDriverAddedThunkListHead + 1);
  ++ViActiveVerifierThunks;
  if ( **((__int128 ***)&ViVerifierDriverAddedThunkListHead + 1) != &ViVerifierDriverAddedThunkListHead )
    __fastfail(3u);
  *ThunkTable = &ViVerifierDriverAddedThunkListHead;
  ThunkTable[1] = v4;
  *v4 = ThunkTable;
  *((_QWORD *)&ViVerifierDriverAddedThunkListHead + 1) = ThunkTable;
  ViDriversLoadLockOwner = 0LL;
  KeReleaseMutex(&ViDriversLoadLock, 0);
  return 0LL;
}
