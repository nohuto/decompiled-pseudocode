/*
 * XREFs of ?attach@?$com_ptr_t@VDialogSession@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAVDialogSession@@@Z @ 0x1800BFB60
 * Callers:
 *     ?GetWatcher@AudioEffectsWatcherFactory@@YAJPEBGKHW4DiscoverySettings@@PEAPEAUIAudioEffectsWatcher@@@Z @ 0x1800BF148 (-GetWatcher@AudioEffectsWatcherFactory@@YAJPEBGKHW4DiscoverySettings@@PEAPEAUIAudioEffectsWatche.c)
 *     s_afxCloseAudioEffectsWatcher @ 0x1800BFBB0 (s_afxCloseAudioEffectsWatcher.c)
 *     DIALOGSESSION_rundown @ 0x180102EF0 (DIALOGSESSION_rundown.c)
 *     s_StopPersonalAssistantDialogSession @ 0x180102FA0 (s_StopPersonalAssistantDialogSession.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::com_ptr_t<DialogSession,wil::err_returncode_policy>::attach(__int64 *a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 result; // rax

  v2 = *a1;
  *a1 = a2;
  if ( v2 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return result;
}
