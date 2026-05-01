/*
 * XREFs of ?MaximizeWindow@CPrivilegedArrangementOperations@@EEAAJPEAUHWND__@@@Z @ 0x1803E9DA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1SyncIamAccess@IamAccess@@QEAA@XZ @ 0x1800B7AB0 (--1SyncIamAccess@IamAccess@@QEAA@XZ.c)
 *     ?TakeIamAccess@IamAccess@@QEAA?AVSyncIamAccess@1@XZ @ 0x180197C3C (-TakeIamAccess@IamAccess@@QEAA-AVSyncIamAccess@1@XZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180290FC8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CPrivilegedArrangementOperations::MaximizeWindow(CPrivilegedArrangementOperations *this, HWND a2)
{
  const char *v3; // r9
  unsigned int LastError; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *v7; // [rsp+30h] [rbp+8h] BYREF

  IamAccess::TakeIamAccess(*((_QWORD *)this + 6), &v7);
  if ( PostMessageW(a2, 0x112u, 0xF030uLL, -1LL) )
    LastError = 0;
  else
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x143,
                  (unsigned int)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
                  v3);
  IamAccess::SyncIamAccess::~SyncIamAccess(&v7);
  return LastError;
}
