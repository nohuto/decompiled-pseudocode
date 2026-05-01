/*
 * XREFs of ?SetZOrderBandToMatch@PrivilegedWindowOwnershipOperations@@AEAAJPEAUHWND__@@0@Z @ 0x1803EA3F4
 * Callers:
 *     ?SetWindowOwner@PrivilegedWindowOwnershipOperations@@EEAAJPEAUHWND__@@0@Z @ 0x1803EA240 (-SetWindowOwner@PrivilegedWindowOwnershipOperations@@EEAAJPEAUHWND__@@0@Z.c)
 * Callees:
 *     ??1SyncIamAccess@IamAccess@@QEAA@XZ @ 0x1800B7AB0 (--1SyncIamAccess@IamAccess@@QEAA@XZ.c)
 *     ?TakeIamAccess@IamAccess@@QEAA?AVSyncIamAccess@1@XZ @ 0x180197C3C (-TakeIamAccess@IamAccess@@QEAA-AVSyncIamAccess@1@XZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180290FC8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall PrivilegedWindowOwnershipOperations::SetZOrderBandToMatch(
        PrivilegedWindowOwnershipOperations *this,
        HWND a2,
        HWND a3)
{
  const char *v6; // r9
  __int64 v7; // rdx
  const char *v9; // r9
  unsigned int LastError; // ebx
  int v11; // [rsp+20h] [rbp-18h] BYREF
  RTL_SRWLOCK *v12[2]; // [rsp+28h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v14; // [rsp+58h] [rbp+20h] BYREF

  v11 = 0;
  if ( !(unsigned int)GetWindowBand(a2, &v11) )
  {
    v7 = 458LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v7,
             (unsigned int)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
             v6);
  }
  v14 = 0;
  if ( !(unsigned int)GetWindowBand(a3, &v14) )
  {
    v7 = 461LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v7,
             (unsigned int)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
             v6);
  }
  if ( v11 != v14 )
  {
    IamAccess::TakeIamAccess(*((_QWORD *)this + 6), v12);
    if ( !(unsigned int)SetWindowBand(a2, 0LL, v14) )
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x1D2,
                    (unsigned int)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
                    v9);
      IamAccess::SyncIamAccess::~SyncIamAccess(v12);
      return LastError;
    }
    IamAccess::SyncIamAccess::~SyncIamAccess(v12);
  }
  return 0LL;
}
