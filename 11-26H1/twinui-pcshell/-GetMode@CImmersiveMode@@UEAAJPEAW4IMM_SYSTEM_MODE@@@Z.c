/*
 * XREFs of ?GetMode@CImmersiveMode@@UEAAJPEAW4IMM_SYSTEM_MODE@@@Z @ 0x180225500
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveMode::GetMode(CImmersiveMode *this, enum IMM_SYSTEM_MODE *a2)
{
  RTL_SRWLOCK *v4; // rcx

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v4 = CApplicationManagerUtility::g_pIAMGlobals;
  *(_DWORD *)a2 = *((_DWORD *)this + 74);
  ReleaseSRWLockShared(v4);
  return 0LL;
}
