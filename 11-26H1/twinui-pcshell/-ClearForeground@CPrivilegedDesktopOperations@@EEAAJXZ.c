/*
 * XREFs of ?ClearForeground@CPrivilegedDesktopOperations@@EEAAJXZ @ 0x1803F3610
 * Callers:
 *     <none>
 * Callees:
 *     ??1SyncIamAccess@IamAccess@@QEAA@XZ @ 0x1800C25D8 (--1SyncIamAccess@IamAccess@@QEAA@XZ.c)
 *     ?TakeIamAccess@IamAccess@@QEAA?AVSyncIamAccess@1@XZ @ 0x18018F9FC (-TakeIamAccess@IamAccess@@QEAA-AVSyncIamAccess@1@XZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802C6380 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CPrivilegedDesktopOperations::ClearForeground(CPrivilegedDesktopOperations *this)
{
  const char *v1; // r9
  unsigned int LastError; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *v5; // [rsp+30h] [rbp+8h] BYREF

  IamAccess::TakeIamAccess(*((_QWORD *)this + 6), &v5);
  if ( (unsigned int)ClearForeground() )
    LastError = 0;
  else
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x9B,
                  (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
                  v1);
  IamAccess::SyncIamAccess::~SyncIamAccess(&v5);
  return LastError;
}
