/*
 * XREFs of ?SetupDPIValues@CDesktopManager@@QEAAXXZ @ 0x18008A6DC
 * Callers:
 *     ?UpdateSettings@CDesktopManager@@QEAAJPEAK@Z @ 0x1800335CC (-UpdateSettings@CDesktopManager@@QEAAJPEAK@Z.c)
 *     ?Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z @ 0x180081384 (-Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?CheckAnyPreference@CDesktopManager@@SA_NK@Z @ 0x18004B350 (-CheckAnyPreference@CDesktopManager@@SA_NK@Z.c)
 */

void __fastcall CDesktopManager::SetupDPIValues(CDesktopManager *this)
{
  *((_QWORD *)this + 52) = 0x3FF0000000000000LL;
  if ( (unsigned __int8)CDesktopManager::CheckAnyPreference(1u) )
    *((double *)this + 52) = (double)(int)GetDpiForSystem() / 96.0;
}
