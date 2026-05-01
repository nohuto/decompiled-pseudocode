/*
 * XREFs of ?RmpGameModeCancelRecipientProcessThreadpoolWait@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18006E8F0
 * Callers:
 *     ?RmpGameModeRecipientProcessTerminationCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x1800698A0 (-RmpGameModeRecipientProcessTerminationCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@.c)
 *     ?RmpGameModeDereferenceRemovedProcesses@@YAXPEAU_LIST_ENTRY@@@Z @ 0x18006E8AC (-RmpGameModeDereferenceRemovedProcesses@@YAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?RmpGameModeRundownRecipientProcessTreeCallback@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z @ 0x180087E88 (-RmpGameModeRundownRecipientProcessTreeCallback@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z.c)
 *     ?RmpGameModeUnregisterProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z @ 0x180088440 (-RmpGameModeUnregisterProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z.c)
 * Callees:
 *     ?RmpGameModeAcquireLock@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x18000F294 (-RmpGameModeAcquireLock@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     ?RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180069AB4 (-RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 */

void __fastcall RmpGameModeCancelRecipientProcessThreadpoolWait(struct _RM_GAME_MODE_RECIPIENT_PROCESS *a1)
{
  __int64 v1; // rdi
  char v3; // al

  v1 = *((_QWORD *)a1 + 4);
  TpSetWait(*((_QWORD *)a1 + 6), 0LL, 0LL);
  TpWaitForWait(*((_QWORD *)a1 + 6), 1LL);
  RmpGameModeAcquireLock((struct _RM_GAME_MODE_CONTEXT *)v1);
  v3 = *((_BYTE *)a1 + 170);
  if ( (v3 & 2) != 0 )
  {
    *((_BYTE *)a1 + 170) = v3 & 0xFD;
    RmpGameModeDereferenceRecipientProcess(a1);
  }
  *(_DWORD *)(v1 + 80) = 0;
  RtlReleaseSRWLockExclusive(v1 + 72);
}
