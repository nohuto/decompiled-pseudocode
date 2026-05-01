/*
 * XREFs of ?AllowSetForegroundWindow@CPrivilegedForegroundOperations@@EEAAJXZ @ 0x1800C13F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1SyncIamAccess@IamAccess@@QEAA@XZ @ 0x1800C25D8 (--1SyncIamAccess@IamAccess@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@IEBAXXZ @ 0x1800C27EC (-InternalAddRef@-$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802C6380 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CPrivilegedForegroundOperations::AllowSetForegroundWindow(CPrivilegedForegroundOperations *this)
{
  RTL_SRWLOCK *v1; // rbx
  DWORD CurrentProcessId; // eax
  const char *v3; // r9
  unsigned int LastError; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = (RTL_SRWLOCK *)*((_QWORD *)this + 6);
  v1 = v7;
  Microsoft::WRL::ComPtr<ApplicationViewManagement::CGlobals>::InternalAddRef(&v7);
  AcquireSRWLockExclusive(v1 + 6);
  EnableIAMAccess(v1[5].Ptr, 1LL);
  CurrentProcessId = GetCurrentProcessId();
  if ( AllowSetForegroundWindow(CurrentProcessId) )
    LastError = 0;
  else
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x18E,
                  (unsigned int)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
                  v3);
  IamAccess::SyncIamAccess::~SyncIamAccess((IamAccess::SyncIamAccess *)&v7);
  return LastError;
}
