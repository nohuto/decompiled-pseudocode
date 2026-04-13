/*
 * XREFs of _Mtxunlock @ 0x18000CFBC
 * Callers:
 *     ??1_Lockit@std@@QEAA@XZ @ 0x180005170 (--1_Lockit@std@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall Mtxunlock(LPCRITICAL_SECTION lpCriticalSection)
{
  LeaveCriticalSection(lpCriticalSection);
}
