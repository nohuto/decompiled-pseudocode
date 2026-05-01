/*
 * XREFs of ?RmpGameModeRemoveRecipientFromAuxiliaryList@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180087D5C
 * Callers:
 *     ?RmpGameModeRemoveRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180069A48 (-RmpGameModeRemoveRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 *     ?RmpGameModeRundownRecipientProcessTreeCallback@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z @ 0x180087E88 (-RmpGameModeRundownRecipientProcessTreeCallback@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z.c)
 * Callees:
 *     CempListEntryRemoveAndClear @ 0x180013890 (CempListEntryRemoveAndClear.c)
 */

void __fastcall RmpGameModeRemoveRecipientFromAuxiliaryList(struct _RM_GAME_MODE_RECIPIENT_PROCESS *a1)
{
  struct _RM_GAME_MODE_RECIPIENT_PROCESS *v1; // r8

  CempListEntryRemoveAndClear((_QWORD *)a1 + 7);
  RmpGameModeDereferenceRecipientProcess(v1);
}
