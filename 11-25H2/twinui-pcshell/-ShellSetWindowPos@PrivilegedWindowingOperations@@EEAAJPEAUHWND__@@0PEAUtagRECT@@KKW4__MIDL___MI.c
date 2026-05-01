/*
 * XREFs of ?ShellSetWindowPos@PrivilegedWindowingOperations@@EEAAJPEAUHWND__@@0PEAUtagRECT@@KKW4__MIDL___MIDL_itf_privilegedoperations_0000_0010_0001@@@Z @ 0x180197B30
 * Callers:
 *     <none>
 * Callees:
 *     ??1SyncIamAccess@IamAccess@@QEAA@XZ @ 0x1800B7AB0 (--1SyncIamAccess@IamAccess@@QEAA@XZ.c)
 *     ?TakeIamAccess@IamAccess@@QEAA?AVSyncIamAccess@1@XZ @ 0x180197C3C (-TakeIamAccess@IamAccess@@QEAA-AVSyncIamAccess@1@XZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180290FC8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall PrivilegedWindowingOperations::ShellSetWindowPos(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        int a7)
{
  const char *v10; // r9
  unsigned int LastError; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  RTL_SRWLOCK *v14; // [rsp+40h] [rbp+8h] BYREF

  IamAccess::TakeIamAccess(*(_QWORD *)(a1 + 48), &v14);
  if ( (unsigned int)ShellSetWindowPos(a2, a3, a4, a5, a6, a7) )
    LastError = 0;
  else
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x21B,
                  (unsigned int)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
                  v10);
  IamAccess::SyncIamAccess::~SyncIamAccess(&v14);
  return LastError;
}
