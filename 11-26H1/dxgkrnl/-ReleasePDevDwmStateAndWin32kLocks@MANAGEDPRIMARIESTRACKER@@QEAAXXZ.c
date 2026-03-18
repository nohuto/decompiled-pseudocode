/*
 * XREFs of ?ReleasePDevDwmStateAndWin32kLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x14039D300
 * Callers:
 *     ??1MANAGEDPRIMARIESTRACKER@@QEAA@XZ @ 0x14039D288 (--1MANAGEDPRIMARIESTRACKER@@QEAA@XZ.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402C6C90 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?ReleasePDevAndDwmStateLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x14039D388 (-ReleasePDevAndDwmStateLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 */

void __fastcall MANAGEDPRIMARIESTRACKER::ReleasePDevDwmStateAndWin32kLocks(MANAGEDPRIMARIESTRACKER *this)
{
  DXGGLOBAL *Global; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  struct DXGSESSIONDATA *SessionData; // rbx

  MANAGEDPRIMARIESTRACKER::ReleasePDevAndDwmStateLocks(this);
  if ( (*((_DWORD *)this + 104) & 1) != 0 )
  {
    Global = DXGGLOBAL::GetGlobal();
    SessionData = DXGGLOBAL::GetSessionData(Global, v3, v4, v5);
    (*(void (**)(void))(*(_QWORD *)(*((_QWORD *)this + 1) + 88LL) + 184LL))();
    *((_DWORD *)this + 104) &= ~1u;
    *((_QWORD *)SessionData + 2409) = 0LL;
    ExReleasePushLockExclusiveEx((char *)SessionData + 19264, 0LL);
    KeLeaveCriticalRegion();
  }
}
