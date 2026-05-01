/*
 * XREFs of ?ApplyWindowAction@PrivilegedWindowingOperations@@EEAAJPEAUHWND__@@U_WINDOW_ACTION@@@Z @ 0x1803F35A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1SyncIamAccess@IamAccess@@QEAA@XZ @ 0x1800C25D8 (--1SyncIamAccess@IamAccess@@QEAA@XZ.c)
 *     ?TakeIamAccess@IamAccess@@QEAA?AVSyncIamAccess@1@XZ @ 0x18018F9FC (-TakeIamAccess@IamAccess@@QEAA-AVSyncIamAccess@1@XZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802C6380 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall PrivilegedWindowingOperations::ApplyWindowAction(__int64 a1, __int64 a2, __int64 a3)
{
  const char *v5; // r9
  unsigned int LastError; // ebx
  RTL_SRWLOCK *v8[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  IamAccess::TakeIamAccess(*(_QWORD *)(a1 + 48), v8);
  if ( (unsigned int)ApplyWindowAction(a2, a3) )
    LastError = 0;
  else
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x241,
                  (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
                  v5);
  IamAccess::SyncIamAccess::~SyncIamAccess(v8);
  return LastError;
}
