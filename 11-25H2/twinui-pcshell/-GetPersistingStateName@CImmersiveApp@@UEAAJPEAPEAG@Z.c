/*
 * XREFs of ?GetPersistingStateName@CImmersiveApp@@UEAAJPEAPEAG@Z @ 0x1801E7C50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveApp::GetPersistingStateName(CImmersiveApp *this, unsigned __int16 **a2)
{
  RTL_SRWLOCK *v4; // rbx
  unsigned int v5; // esi

  *a2 = 0LL;
  v4 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v5 = 0;
  *a2 = 0LL;
  if ( *((_QWORD *)this + 46) )
    v5 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int16 **))(***((_QWORD ***)this + 45) + 256LL))(
           **((_QWORD **)this + 45),
           a2);
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return v5;
}
