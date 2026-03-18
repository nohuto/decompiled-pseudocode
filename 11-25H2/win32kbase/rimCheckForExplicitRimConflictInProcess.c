/*
 * XREFs of rimCheckForExplicitRimConflictInProcess @ 0x14002A994
 * Callers:
 *     RIMIDECreateHIDDesc @ 0x14002A1AC (RIMIDECreateHIDDesc.c)
 *     RIMCreateHidDesc @ 0x1401DF458 (RIMCreateHidDesc.c)
 * Callees:
 *     rimIsExplicitRimUsagesMatchingUsages @ 0x14002AA58 (rimIsExplicitRimUsagesMatchingUsages.c)
 *     RIMLockExclusive @ 0x140033CB0 (RIMLockExclusive.c)
 *     RIMUnlockExclusive @ 0x140033F70 (RIMUnlockExclusive.c)
 */

__int64 __fastcall rimCheckForExplicitRimConflictInProcess(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  unsigned __int16 v4; // bp
  __int64 UserSessionState; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  _QWORD *v10; // rcx
  _QWORD **v11; // rbx
  _QWORD *v12; // r9
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8

  v4 = a2;
  UserSessionState = W32GetUserSessionState(a1, a2);
  RIMLockExclusive(UserSessionState + 56);
  v11 = (_QWORD **)(W32GetUserSessionState(v8, v7) + 120);
  v12 = *v11;
  while ( v12 != v11 )
  {
    v10 = v12 - 2;
    v12 = (_QWORD *)*v12;
    if ( !*((_BYTE *)v10 + 81)
      && !*((_BYTE *)v10 + 80)
      && v10[4] == a1
      && (unsigned int)rimIsExplicitRimUsagesMatchingUsages(v10, v4, a3) )
    {
      v13 = W32GetUserSessionState(v10, v9);
      RIMUnlockExclusive(v13 + 56, v14, v15);
      return 1LL;
    }
  }
  v17 = W32GetUserSessionState(v10, v9);
  RIMUnlockExclusive(v17 + 56, v18, v19);
  return 0LL;
}
