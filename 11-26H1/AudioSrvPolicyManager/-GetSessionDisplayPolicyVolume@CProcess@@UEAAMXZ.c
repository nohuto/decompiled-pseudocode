/*
 * XREFs of ?GetSessionDisplayPolicyVolume@CProcess@@UEAAMXZ @ 0x18001F2E0
 * Callers:
 *     ?IsMutedForSleep@CApplication@@QEAAHXZ @ 0x18002BFD0 (-IsMutedForSleep@CApplication@@QEAAHXZ.c)
 * Callees:
 *     ?TsSessionIdGetAppsBlockedTillConsoleUnlocked@@YA?AW4AppTypesBlockedTillConsoleUnlocked@@K@Z @ 0x18001F340 (-TsSessionIdGetAppsBlockedTillConsoleUnlocked@@YA-AW4AppTypesBlockedTillConsoleUnlocked@@K@Z.c)
 */

float __fastcall CProcess::GetSessionDisplayPolicyVolume(CProcess *this)
{
  float v2; // xmm6_4
  int AppsBlockedTillConsoleUnlocked; // eax

  v2 = FLOAT_1_0;
  AppsBlockedTillConsoleUnlocked = TsSessionIdGetAppsBlockedTillConsoleUnlocked(*((unsigned int *)this + 41));
  if ( AppsBlockedTillConsoleUnlocked )
  {
    if ( *((_DWORD *)this + 106) )
    {
      if ( (AppsBlockedTillConsoleUnlocked & 1) == 0 )
        return v2;
    }
    else if ( (AppsBlockedTillConsoleUnlocked & 2) == 0 )
    {
      return v2;
    }
    return 0.0;
  }
  return v2;
}
