/*
 * XREFs of ?UnensureClassicWindow@CClassicWindowManager@@UEAAJPEAUHWND__@@W4CLASSIC_WINDOW_ENSURE_REASONS@@@Z @ 0x1802ECFD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AcquireExclusive@CIAMGlobals@@QEAA?AVCAutoSRWExclusiveLock@@XZ @ 0x1801CAFF0 (-AcquireExclusive@CIAMGlobals@@QEAA-AVCAutoSRWExclusiveLock@@XZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180291BCC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$UnensureClassicWindow@IAEAW4CLASSIC_WINDOW_ENSURE_REASONS@@@CAppManagerTelemetry@@SAX$$QEAIAEAW4CLASSIC_WINDOW_ENSURE_REASONS@@@Z @ 0x1802EBF44 (--$UnensureClassicWindow@IAEAW4CLASSIC_WINDOW_ENSURE_REASONS@@@CAppManagerTelemetry@@SAX$$QEAIAE.c)
 *     ?_HandleDestructionOrHide@CClassicWindowManager@@AEAA_NPEAUHWND__@@W4HandleDestructionOrHideOptions@1@W4CLASSIC_WINDOW_ENSURE_REASONS@@@Z @ 0x1802ED0A4 (-_HandleDestructionOrHide@CClassicWindowManager@@AEAA_NPEAUHWND__@@W4HandleDestructionOrHideOpti.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CClassicWindowManager::UnensureClassicWindow(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        const char *a4)
{
  __int64 v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v10; // [rsp+40h] [rbp+18h] BYREF
  RTL_SRWLOCK *v11; // [rsp+48h] [rbp+20h] BYREF

  v10 = a3;
  if ( !a3 || ((a3 - 1LL) & a3) != 0 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x8CC,
      (int)"pcshell\\twinui\\appmanager\\lib\\classicwndmgr.cpp",
      a4);
  LODWORD(v11) = a2;
  CAppManagerTelemetry::UnensureClassicWindow<unsigned int,enum CLASSIC_WINDOW_ENSURE_REASONS &>(
    (int *)&v11,
    (int *)&v10);
  CIAMGlobals::AcquireExclusive(v7, &v11);
  if ( (unsigned __int8)CClassicWindowManager::_HandleDestructionOrHide(a1 - 88, a2, 2LL) )
  {
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v11);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8D2,
      (int)"pcshell\\twinui\\appmanager\\lib\\classicwndmgr.cpp",
      (const char *)0x80004005LL);
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v11);
    return 2147500037LL;
  }
}
