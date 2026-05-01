/*
 * XREFs of ?RmpSystemNotifyGameModeExtensionStateChange@@YAXPEAXE@Z @ 0x180069304
 * Callers:
 *     ?RmpGameModeTryApplySystemExtensionPolicy@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180088310 (-RmpGameModeTryApplySystemExtensionPolicy@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIP.c)
 * Callees:
 *     IsNotifyGameModeExtensionRecipientsPresentPresent @ 0x18006FDF4 (IsNotifyGameModeExtensionRecipientsPresentPresent.c)
 */

void __fastcall RmpSystemNotifyGameModeExtensionStateChange(void *a1, char a2)
{
  char v4; // al
  __int64 v5; // rdx

  v4 = IsNotifyGameModeExtensionRecipientsPresentPresent(a1);
  v5 = 0LL;
  if ( v4 )
  {
    LOBYTE(v5) = a2 != 0;
    NotifySystemExpandedResourceModeStateChange(a1, v5);
  }
}
