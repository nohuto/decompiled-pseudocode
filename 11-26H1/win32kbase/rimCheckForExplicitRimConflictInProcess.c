/*
 * XREFs of rimCheckForExplicitRimConflictInProcess @ 0x1400795B0
 * Callers:
 *     RIMCreateHidDesc @ 0x1400780EC (RIMCreateHidDesc.c)
 *     RIMIDECreateHIDDesc @ 0x14020749C (RIMIDECreateHIDDesc.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x14005A690 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005A6D0 (RIMLockExclusive.c)
 *     rimIsExplicitRimUsagesMatchingUsages @ 0x14007966C (rimIsExplicitRimUsagesMatchingUsages.c)
 */

__int64 __fastcall rimCheckForExplicitRimConflictInProcess(__int64 a1, int a2, int a3)
{
  unsigned __int16 v3; // bp
  unsigned __int16 v4; // r14
  __int64 UserSessionState; // rax
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  unsigned int v10; // ebx
  int v11; // edx
  _QWORD *v12; // rcx
  _QWORD **v13; // rdi
  int v14; // r8d
  _QWORD *v15; // r9
  __int64 v16; // rax

  v3 = a3;
  v4 = a2;
  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  RIMLockExclusive(UserSessionState + 56);
  v10 = 0;
  v13 = (_QWORD **)(W32GetUserSessionState(v8, v7, v9) + 120);
  v15 = *v13;
  while ( v15 != v13 )
  {
    v12 = v15 - 2;
    v15 = (_QWORD *)*v15;
    if ( !*((_BYTE *)v12 + 81)
      && !*((_BYTE *)v12 + 80)
      && v12[4] == a1
      && (unsigned int)rimIsExplicitRimUsagesMatchingUsages(v12, v4, v3) )
    {
      v10 = 1;
      break;
    }
  }
  v16 = W32GetUserSessionState((_DWORD)v12, v11, v14);
  RIMUnlockExclusive(v16 + 56);
  return v10;
}
