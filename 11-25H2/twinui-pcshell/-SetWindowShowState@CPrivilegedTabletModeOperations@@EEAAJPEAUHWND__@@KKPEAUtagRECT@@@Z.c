/*
 * XREFs of ?SetWindowShowState@CPrivilegedTabletModeOperations@@EEAAJPEAUHWND__@@KKPEAUtagRECT@@@Z @ 0x1803EA370
 * Callers:
 *     <none>
 * Callees:
 *     ??1SyncIamAccess@IamAccess@@QEAA@XZ @ 0x1800B7AB0 (--1SyncIamAccess@IamAccess@@QEAA@XZ.c)
 *     ?TakeIamAccess@IamAccess@@QEAA?AVSyncIamAccess@1@XZ @ 0x180197C3C (-TakeIamAccess@IamAccess@@QEAA-AVSyncIamAccess@1@XZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180290FC8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CPrivilegedTabletModeOperations::SetWindowShowState(
        CPrivilegedTabletModeOperations *this,
        HWND a2,
        unsigned int a3,
        unsigned int a4,
        struct tagRECT *a5)
{
  const char *v8; // r9
  unsigned int LastError; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *v12; // [rsp+30h] [rbp+8h] BYREF

  IamAccess::TakeIamAccess(*((_QWORD *)this + 6), &v12);
  if ( (unsigned int)SetWindowShowState(a2, a3, a4, a5) )
    LastError = 0;
  else
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x197,
                  (unsigned int)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
                  v8);
  IamAccess::SyncIamAccess::~SyncIamAccess(&v12);
  return LastError;
}
