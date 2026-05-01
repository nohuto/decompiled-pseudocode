/*
 * XREFs of ?InsertAfterWindow@CPrivilegedArrangementOperations@@EEAAJPEAUHWND__@@0@Z @ 0x1800B7D80
 * Callers:
 *     <none>
 * Callees:
 *     ??1SyncIamAccess@IamAccess@@QEAA@XZ @ 0x1800B7AB0 (--1SyncIamAccess@IamAccess@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@IEBAXXZ @ 0x1800B7E38 (-InternalAddRef@-$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180290FC8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CPrivilegedArrangementOperations::InsertAfterWindow(
        CPrivilegedArrangementOperations *this,
        HWND a2,
        HWND a3)
{
  RTL_SRWLOCK *v3; // rbx
  unsigned int LastError; // ebx
  const char *v7; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  RTL_SRWLOCK *v10; // [rsp+50h] [rbp+8h] BYREF

  v10 = (RTL_SRWLOCK *)*((_QWORD *)this + 6);
  v3 = v10;
  Microsoft::WRL::ComPtr<ApplicationViewManagement::CGlobals>::InternalAddRef(&v10);
  AcquireSRWLockExclusive(v3 + 6);
  EnableIAMAccess(v3[5].Ptr, 1LL);
  LastError = 0;
  if ( !SetWindowPos(a2, a3, 0, 0, 0, 0, 0x4013u) )
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x14E,
                  (unsigned int)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
                  v7);
  IamAccess::SyncIamAccess::~SyncIamAccess(&v10);
  return LastError;
}
