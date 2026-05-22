/*
 * XREFs of ?OnInput@SystemButtonProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801B78C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSystemButtonEventControllerManager@ISMStatics@@SAPEAVSystemButtonEventControllerManager@@XZ @ 0x180071D34 (-GetSystemButtonEventControllerManager@ISMStatics@@SAPEAVSystemButtonEventControllerManager@@XZ.c)
 *     ?OnInput@SystemButtonEventControllerManager@@QEAAXPEBULegacyInputInfo@@@Z @ 0x18015FCE0 (-OnInput@SystemButtonEventControllerManager@@QEAAXPEBULegacyInputInfo@@@Z.c)
 *     ?ButtonEvent@SystemButtonProcessor@InputETW@@SAXK_N@Z @ 0x1801B7850 (-ButtonEvent@SystemButtonProcessor@InputETW@@SAXK_N@Z.c)
 */

__int64 __fastcall SystemButtonProcessor::OnInput(
        SystemButtonProcessor *this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorResponse *a4)
{
  int v7; // ebx
  SystemButtonEventController **SystemButtonEventControllerManager; // rax

  *((_DWORD *)a4 + 2) = 0;
  if ( *(char *)a2 < 0 )
  {
    v7 = *((_DWORD *)a2 + 16);
    if ( v7 != 301 && (unsigned int)(v7 - 302) > 2 )
      goto LABEL_8;
    SystemButtonEventControllerManager = (SystemButtonEventController **)ISMStatics::GetSystemButtonEventControllerManager();
    if ( *SystemButtonEventControllerManager )
    {
      SystemButtonEventControllerManager::OnInput(SystemButtonEventControllerManager, a2);
    }
    else if ( *((_DWORD *)a3 + 26) != 3 )
    {
LABEL_8:
      InputETW::SystemButtonProcessor::ButtonEvent(v7, *((_BYTE *)a2 + 68));
      return 0LL;
    }
    *((_DWORD *)a4 + 2) = 3;
    goto LABEL_8;
  }
  return 0LL;
}
