/*
 * XREFs of ?Uninitialize@StartupApproval@StartupDB@@QEAAXXZ @ 0x180584E58
 * Callers:
 *     ??1?$unique_ptr@VStartupApproval@StartupDB@@U?$default_delete@VStartupApproval@StartupDB@@@std@@@std@@QEAA@XZ @ 0x180583ED4 (--1-$unique_ptr@VStartupApproval@StartupDB@@U-$default_delete@VStartupApproval@StartupDB@@@std@@.c)
 *     ?Initialize@StartupApproval@StartupDB@@QEAAJPEAUHKEY__@@PEBG1K@Z @ 0x1805847DC (-Initialize@StartupApproval@StartupDB@@QEAAJPEAUHKEY__@@PEBG1K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall StartupDB::StartupApproval::Uninitialize(HKEY *this)
{
  if ( (unsigned __int64)*this > 2 )
    RegCloseKey(*this);
  *this = 0LL;
}
