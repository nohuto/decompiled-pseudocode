/*
 * XREFs of ?ApplyWindowAction@PrivilegedWindowingOperations@@EEAAJPEAUHWND__@@U_WINDOW_ACTION@@@Z @ 0x1803E9B40
 * Callers:
 *     <none>
 * Callees:
 *     ??1SyncIamAccess@IamAccess@@QEAA@XZ @ 0x1800B7AB0 (--1SyncIamAccess@IamAccess@@QEAA@XZ.c)
 *     ?TakeIamAccess@IamAccess@@QEAA?AVSyncIamAccess@1@XZ @ 0x180197C3C (-TakeIamAccess@IamAccess@@QEAA-AVSyncIamAccess@1@XZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180290FC8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

__int64 __fastcall PrivilegedWindowingOperations::ApplyWindowAction(__int64 a1, __int64 a2, _OWORD *a3)
{
  __int64 v3; // rcx
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  const char *v10; // r9
  unsigned int LastError; // ebx
  RTL_SRWLOCK *v13; // [rsp+20h] [rbp-78h] BYREF
  _OWORD v14[6]; // [rsp+28h] [rbp-70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v3 = *(_QWORD *)(a1 + 48);
  v5 = a3[1];
  v14[0] = *a3;
  v6 = a3[2];
  v14[1] = v5;
  v7 = a3[3];
  v14[2] = v6;
  v8 = a3[4];
  v14[3] = v7;
  v9 = a3[5];
  v14[4] = v8;
  v14[5] = v9;
  IamAccess::TakeIamAccess(v3, &v13);
  if ( (unsigned int)ApplyWindowAction(a2, v14) )
    LastError = 0;
  else
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x226,
                  (unsigned int)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
                  v10);
  IamAccess::SyncIamAccess::~SyncIamAccess(&v13);
  return LastError;
}
