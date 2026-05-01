/*
 * XREFs of ?SetRootXamlIslandWindow@CApplicationManager@@UEAAJPEAUHWND__@@@Z @ 0x1802EBA40
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireExclusive@CIAMGlobals@@QEAA?AVCAutoSRWExclusiveLock@@XZ @ 0x1801D54D0 (-AcquireExclusive@CIAMGlobals@@QEAA-AVCAutoSRWExclusiveLock@@XZ.c)
 */

__int64 __fastcall CApplicationManager::SetRootXamlIslandWindow(CApplicationManager *this, HWND a2)
{
  RTL_SRWLOCK *v5; // [rsp+30h] [rbp+8h] BYREF

  CIAMGlobals::AcquireExclusive((__int64)this, &v5);
  *((_QWORD *)this + 86) = a2;
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v5);
  return 0LL;
}
