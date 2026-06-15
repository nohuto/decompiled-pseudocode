/*
 * XREFs of ??1CWindowsPolicyManager@@UEAA@XZ @ 0x18004605C
 * Callers:
 *     ??_GCWindowsPolicyManager@@UEAAPEAXI@Z @ 0x180046170 (--_GCWindowsPolicyManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCDuckingManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180045EA8 (--1-$com_ptr_t@VCDuckingManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCPlaybackManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180045EC8 (--1-$com_ptr_t@VCPlaybackManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall CWindowsPolicyManager::~CWindowsPolicyManager(CWindowsPolicyManager *this)
{
  volatile int *v2; // rdx

  wil::com_ptr_t<CDuckingManager,wil::err_returncode_policy>::~com_ptr_t<CDuckingManager,wil::err_returncode_policy>((__int64 *)this + 5);
  wil::com_ptr_t<CPlaybackManager,wil::err_returncode_policy>::~com_ptr_t<CPlaybackManager,wil::err_returncode_policy>(
    (__int64 *)this + 4,
    v2);
  *((_DWORD *)this + 7) = -1073741823;
}
