/*
 * XREFs of VfThunkAddSpecialDriverThunks @ 0x140C3B11C
 * Callers:
 *     ViAddVerifierSpecialThunks @ 0x1406443FC (ViAddVerifierSpecialThunks.c)
 * Callees:
 *     KeReleaseMutex @ 0x1403E02E0 (KeReleaseMutex.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ViThunkCreateThunkTable @ 0x140C3B6BC (ViThunkCreateThunkTable.c)
 *     ViThunkFindNextSpecialTable @ 0x140C3B98C (ViThunkFindNextSpecialTable.c)
 *     ViThunkRecoverPristines @ 0x140C3BBEC (ViThunkRecoverPristines.c)
 *     VfDriverLock @ 0x140C4C814 (VfDriverLock.c)
 */

__int64 __fastcall VfThunkAddSpecialDriverThunks(__int64 a1, void *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rcx
  _QWORD *ThunkTable; // rbx
  _QWORD *NextSpecialTable; // rcx
  ULONG_PTR Pool2; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // rcx
  signed __int32 v15[10]; // [rsp+0h] [rbp-28h] BYREF
  __int64 v16; // [rsp+30h] [rbp+8h] BYREF

  v16 = a1;
  ThunkTable = (_QWORD *)ViThunkCreateThunkTable(a2);
  if ( !ThunkTable )
    return 3221225626LL;
  VfDriverLock(v6);
  if ( (*(_DWORD *)(a4 + 104) & 0x2000000) != 0 )
    ViThunkRecoverPristines(ThunkTable);
  NextSpecialTable = (_QWORD *)ViThunkFindNextSpecialTable(&v16, 1LL);
  if ( !NextSpecialTable )
  {
    Pool2 = ExAllocatePool2(256LL, 0x28uLL, 0x74566D4Du);
    NextSpecialTable = (_QWORD *)Pool2;
    if ( !Pool2 )
    {
      ViDriversLoadLockOwner = 0LL;
      KeReleaseMutex(&ViDriversLoadLock, 0);
      return 3221225626LL;
    }
    *(_QWORD *)(Pool2 + 16) = a1;
    v11 = (_QWORD *)(Pool2 + 24);
    v11[1] = v11;
    *v11 = v11;
    v12 = ViVerifierDriverAddedSpecialThunkListHead;
    if ( *((PVOID **)ViVerifierDriverAddedSpecialThunkListHead + 1) != &ViVerifierDriverAddedSpecialThunkListHead )
LABEL_11:
      __fastfail(3u);
    ++ViVerifierSpecialThunkTables;
    *NextSpecialTable = ViVerifierDriverAddedSpecialThunkListHead;
    NextSpecialTable[1] = &ViVerifierDriverAddedSpecialThunkListHead;
    v12[1] = NextSpecialTable;
    ViVerifierDriverAddedSpecialThunkListHead = NextSpecialTable;
  }
  VfThunksExtended = 1;
  _InterlockedOr(v15, 0);
  v13 = (_QWORD *)NextSpecialTable[4];
  v14 = NextSpecialTable + 3;
  ++ViActiveVerifierThunks;
  if ( (_QWORD *)*v13 != v14 )
    goto LABEL_11;
  *ThunkTable = v14;
  ThunkTable[1] = v13;
  *v13 = ThunkTable;
  v14[1] = ThunkTable;
  ViDriversLoadLockOwner = 0LL;
  KeReleaseMutex(&ViDriversLoadLock, 0);
  return 0LL;
}
