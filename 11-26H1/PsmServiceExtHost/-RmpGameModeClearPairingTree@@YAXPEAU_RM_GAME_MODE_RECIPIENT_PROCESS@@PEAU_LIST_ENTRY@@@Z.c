/*
 * XREFs of ?RmpGameModeClearPairingTree@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_LIST_ENTRY@@@Z @ 0x180086EE0
 * Callers:
 *     ?RmpGameModeRecipientProcessTerminationCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x1800698A0 (-RmpGameModeRecipientProcessTerminationCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@.c)
 *     ?RmpGameModeRundownRecipientProcessTreeCallback@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z @ 0x180087E88 (-RmpGameModeRundownRecipientProcessTreeCallback@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z.c)
 *     ?RmpGameModeUnregisterProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z @ 0x180088440 (-RmpGameModeUnregisterProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z.c)
 * Callees:
 *     ?RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180069AB4 (-RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 *     ?RmpGameModeCheckRemovePairedAuxiliary@@YAEPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180086E68 (-RmpGameModeCheckRemovePairedAuxiliary@@YAEPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 *     ?RmpGameModeDestroyProcessPairing@@YAXPEAU_RM_GAME_MODE_PROCESS_PAIRING@@@Z @ 0x180087058 (-RmpGameModeDestroyProcessPairing@@YAXPEAU_RM_GAME_MODE_PROCESS_PAIRING@@@Z.c)
 *     ?RmpGameModeIsProcessValidPairingTarget@@YAEPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180087650 (-RmpGameModeIsProcessValidPairingTarget@@YAEPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 */

void __fastcall RmpGameModeClearPairingTree(struct _RM_GAME_MODE_RECIPIENT_PROCESS *a1, struct _LIST_ENTRY *a2)
{
  unsigned __int64 v4; // rdi
  __int64 v5; // rax
  unsigned __int8 IsProcessValidPairingTarget; // r14
  __int64 v7; // rsi
  __int64 v8; // rcx
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *v12; // rax

  if ( a2 )
  {
    a2->Blink = a2;
    a2->Flink = a2;
  }
  v4 = (unsigned __int64)a1 + 72;
  v5 = *((_QWORD *)a1 + 9);
  if ( (*((_BYTE *)a1 + 80) & 1) != 0 )
  {
    if ( !v5 )
      return;
    v5 ^= v4;
  }
  if ( v5 )
  {
    IsProcessValidPairingTarget = RmpGameModeIsProcessValidPairingTarget(a1);
    v7 = 0LL;
    while ( 1 )
    {
      v8 = *((_QWORD *)a1 + 10);
      if ( (v8 & 1) != 0 )
      {
        if ( !*(_QWORD *)v4 )
          return;
        v9 = *(_QWORD *)v4 ^ v4;
      }
      else
      {
        v9 = *(_QWORD *)v4;
      }
      if ( !v9 )
        break;
      if ( (*((_QWORD *)a1 + 10) & 1LL) != 0 )
      {
        if ( v8 == 1 )
          v10 = 0LL;
        else
          v10 = v8 ^ (v4 | 1);
      }
      else
      {
        v10 = *((_QWORD *)a1 + 10);
      }
      if ( IsProcessValidPairingTarget )
      {
        v7 = *(_QWORD *)(v10 + 56);
        if ( _InterlockedIncrement64((volatile signed __int64 *)v7) <= 1 )
          __fastfail(0xEu);
      }
      else
      {
        v10 -= 24LL;
      }
      RmpGameModeDestroyProcessPairing((struct _RM_GAME_MODE_PROCESS_PAIRING *)v10);
      if ( IsProcessValidPairingTarget )
      {
        if ( RmpGameModeCheckRemovePairedAuxiliary((struct _RM_GAME_MODE_RECIPIENT_PROCESS *)v7) )
        {
          Blink = a2->Blink;
          v12 = (struct _LIST_ENTRY *)(v7 + 56);
          if ( Blink->Flink != a2 )
            __fastfail(3u);
          v12->Flink = a2;
          *(_QWORD *)(v7 + 64) = Blink;
          Blink->Flink = v12;
          a2->Blink = v12;
        }
        else
        {
          RmpGameModeDereferenceRecipientProcess((struct _RM_GAME_MODE_RECIPIENT_PROCESS *)v7);
        }
      }
    }
  }
}
