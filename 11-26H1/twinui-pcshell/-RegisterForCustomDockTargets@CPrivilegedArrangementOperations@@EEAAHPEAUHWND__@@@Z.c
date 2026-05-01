/*
 * XREFs of ?RegisterForCustomDockTargets@CPrivilegedArrangementOperations@@EEAAHPEAUHWND__@@@Z @ 0x180241770
 * Callers:
 *     <none>
 * Callees:
 *     ??1SyncIamAccess@IamAccess@@QEAA@XZ @ 0x1800C25D8 (--1SyncIamAccess@IamAccess@@QEAA@XZ.c)
 *     ?TakeIamAccess@IamAccess@@QEAA?AVSyncIamAccess@1@XZ @ 0x18018F9FC (-TakeIamAccess@IamAccess@@QEAA-AVSyncIamAccess@1@XZ.c)
 */

__int64 __fastcall CPrivilegedArrangementOperations::RegisterForCustomDockTargets(
        CPrivilegedArrangementOperations *this,
        HWND a2)
{
  RTL_SRWLOCK *v4; // [rsp+30h] [rbp+8h] BYREF

  IamAccess::TakeIamAccess(*((_QWORD *)this + 6), &v4);
  LODWORD(a2) = RegisterForCustomDockTargets(a2);
  IamAccess::SyncIamAccess::~SyncIamAccess(&v4);
  return (unsigned int)a2;
}
