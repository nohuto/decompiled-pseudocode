/*
 * XREFs of ??0StartupApproval@StartupDB@@QEAA@XZ @ 0x18055FCD0
 * Callers:
 *     ?IsStartupAppEnabled@StartupAppMonitor@@CA_NPEAUHKEY__@@PEBG1@Z @ 0x1805608A0 (-IsStartupAppEnabled@StartupAppMonitor@@CA_NPEAUHKEY__@@PEBG1@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 */

StartupDB::StartupApproval *__fastcall StartupDB::StartupApproval::StartupApproval(StartupDB::StartupApproval *this)
{
  struct _OSVERSIONINFOW VersionInformation; // [rsp+20h] [rbp-138h] BYREF
  char v4; // [rsp+138h] [rbp-20h]

  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  memset_0(&VersionInformation.dwMajorVersion, 0, 0x118uLL);
  VersionInformation.dwOSVersionInfoSize = 284;
  if ( GetVersionExW(&VersionInformation) && (v4 & 0x40) != 0
    || (unsigned int)SHWindowsPolicy(&POLID_EnableAllStartupApplications) )
  {
    *((_DWORD *)this + 2) = 1;
  }
  return this;
}
