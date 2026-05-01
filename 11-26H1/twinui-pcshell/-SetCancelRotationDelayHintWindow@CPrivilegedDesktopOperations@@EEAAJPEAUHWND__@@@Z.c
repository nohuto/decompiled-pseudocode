/*
 * XREFs of ?SetCancelRotationDelayHintWindow@CPrivilegedDesktopOperations@@EEAAJPEAUHWND__@@@Z @ 0x180203B30
 * Callers:
 *     <none>
 * Callees:
 *     ??1SyncIamAccess@IamAccess@@QEAA@XZ @ 0x1800C25D8 (--1SyncIamAccess@IamAccess@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@IEBAXXZ @ 0x1800C27EC (-InternalAddRef@-$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802C6380 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CPrivilegedDesktopOperations::SetCancelRotationDelayHintWindow(
        CPrivilegedDesktopOperations *this,
        HWND a2)
{
  RTL_SRWLOCK *v2; // rbx
  const char *v4; // r9
  unsigned int LastError; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = (RTL_SRWLOCK *)*((_QWORD *)this + 6);
  v2 = v8;
  Microsoft::WRL::ComPtr<ApplicationViewManagement::CGlobals>::InternalAddRef((__int64 *)&v8);
  AcquireSRWLockExclusive(v2 + 6);
  EnableIAMAccess(v2[5].Ptr, 1LL);
  if ( (unsigned int)SetCancelRotationDelayHintWindow(a2) )
    LastError = 0;
  else
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x89,
                  (unsigned int)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
                  v4);
  IamAccess::SyncIamAccess::~SyncIamAccess(&v8);
  return LastError;
}
