/*
 * XREFs of ?UpdateSizeConstraints@CPrivilegedArrangementOperations@@EEAAJPEAUHWND__@@PEAUtagSIZE@@1@Z @ 0x1803EA560
 * Callers:
 *     <none>
 * Callees:
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1800B71B0 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ??1SyncIamAccess@IamAccess@@QEAA@XZ @ 0x1800B7AB0 (--1SyncIamAccess@IamAccess@@QEAA@XZ.c)
 *     ?TakeIamAccess@IamAccess@@QEAA?AVSyncIamAccess@1@XZ @ 0x180197C3C (-TakeIamAccess@IamAccess@@QEAA-AVSyncIamAccess@1@XZ.c)
 */

__int64 __fastcall CPrivilegedArrangementOperations::UpdateSizeConstraints(
        CPrivilegedArrangementOperations *this,
        HWND a2,
        struct tagSIZE *a3,
        struct tagSIZE *a4)
{
  wil::details *v7; // rcx
  unsigned int LastErrorFailHr; // ebx
  RTL_SRWLOCK *v10; // [rsp+30h] [rbp+8h] BYREF

  IamAccess::TakeIamAccess(*((_QWORD *)this + 6), &v10);
  if ( (unsigned int)UpdateWindowTrackingInfo(a2, a4, a3) )
    LastErrorFailHr = 0;
  else
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v7);
  IamAccess::SyncIamAccess::~SyncIamAccess(&v10);
  return LastErrorFailHr;
}
