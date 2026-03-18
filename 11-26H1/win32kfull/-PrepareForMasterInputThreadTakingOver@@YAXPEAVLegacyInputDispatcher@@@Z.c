/*
 * XREFs of ?PrepareForMasterInputThreadTakingOver@@YAXPEAVLegacyInputDispatcher@@@Z @ 0x140249308
 * Callers:
 *     RawInputThread @ 0x140270B00 (RawInputThread.c)
 * Callees:
 *     EditionPrepareHidForInputThreadMigration @ 0x140249400 (EditionPrepareHidForInputThreadMigration.c)
 */

void __fastcall PrepareForMasterInputThreadTakingOver(struct LegacyInputDispatcher *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 UserSessionState; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx

  EnterCrit(1LL, 0LL);
  SetThreadPriority();
  if ( *(_QWORD *)(W32GetUserSessionState(v3, v2) + 18872) )
  {
    UserSessionState = W32GetUserSessionState(v5, v4);
    SetThreadBasePriority(**(_QWORD **)(UserSessionState + 18872), 16LL);
  }
  EditionPrepareHidForInputThreadMigration();
  EtwTraceRitDisEngaged();
  v9 = W32GetUserSessionState(v8, v7);
  ZwSetEvent(*(HANDLE *)(v9 + 18744), 0LL);
  LegacyInputDispatcher::PurgeInputDispatcherObjects(a1);
  v12 = W32GetUserSessionState(v11, v10);
  CBaseInput::RegisterDispatcherObject(*(CBaseInput **)(v12 + 12920), a1);
  *(_DWORD *)(W32GetUserSessionState(v14, v13) + 18792) = 1;
  UserSessionSwitchLeaveCrit(v15);
}
