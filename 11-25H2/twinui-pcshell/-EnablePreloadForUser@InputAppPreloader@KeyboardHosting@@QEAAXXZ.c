/*
 * XREFs of ?EnablePreloadForUser@InputAppPreloader@KeyboardHosting@@QEAAXXZ @ 0x1801ECD1C
 * Callers:
 *     ?OnInputAppRequestedShow@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@UViewOptions@@@Z @ 0x18029115C (-OnInputAppRequestedShow@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@UViewOptions@@@Z.c)
 * Callees:
 *     ?SHRegSetBOOL@@YAJPEAUHKEY__@@PEBG1H@Z @ 0x18013EC10 (-SHRegSetBOOL@@YAJPEAUHKEY__@@PEBG1H@Z.c)
 */

void __fastcall KeyboardHosting::InputAppPreloader::EnablePreloadForUser(KeyboardHosting::InputAppPreloader *this)
{
  signed int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( _InterlockedExchange((volatile __int32 *)this + 6, 2) != 2 )
  {
    v1 = SHRegSetBOOL(HKEY_CURRENT_USER, L"Software\\Microsoft\\Input", L"IsInputAppPreloadEnabled", 1);
    if ( v1 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x95,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\inputapppreloader.cpp",
        (const char *)(unsigned int)v1);
  }
}
