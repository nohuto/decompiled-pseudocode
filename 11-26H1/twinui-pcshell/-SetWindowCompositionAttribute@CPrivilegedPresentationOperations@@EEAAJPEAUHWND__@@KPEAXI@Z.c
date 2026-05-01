/*
 * XREFs of ?SetWindowCompositionAttribute@CPrivilegedPresentationOperations@@EEAAJPEAUHWND__@@KPEAXI@Z @ 0x1803F41C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1SyncIamAccess@IamAccess@@QEAA@XZ @ 0x1800C25D8 (--1SyncIamAccess@IamAccess@@QEAA@XZ.c)
 *     ?TakeIamAccess@IamAccess@@QEAA?AVSyncIamAccess@1@XZ @ 0x18018F9FC (-TakeIamAccess@IamAccess@@QEAA-AVSyncIamAccess@1@XZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802C6380 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CPrivilegedPresentationOperations::SetWindowCompositionAttribute(
        CPrivilegedPresentationOperations *this,
        HWND a2,
        int a3,
        void *a4,
        unsigned int a5)
{
  const char *v8; // r9
  unsigned int LastError; // ebx
  _DWORD v11[2]; // [rsp+20h] [rbp-28h] BYREF
  void *v12; // [rsp+28h] [rbp-20h]
  unsigned int v13; // [rsp+30h] [rbp-18h]
  int v14; // [rsp+34h] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  RTL_SRWLOCK *v16; // [rsp+50h] [rbp+8h] BYREF

  IamAccess::TakeIamAccess(*((_QWORD *)this + 6), &v16);
  v11[0] = a3;
  v11[1] = 0;
  v13 = a5;
  v14 = 0;
  v12 = a4;
  if ( (unsigned int)SetWindowCompositionAttribute(a2, v11) )
    LastError = 0;
  else
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x108,
                  (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
                  v8);
  IamAccess::SyncIamAccess::~SyncIamAccess(&v16);
  return LastError;
}
