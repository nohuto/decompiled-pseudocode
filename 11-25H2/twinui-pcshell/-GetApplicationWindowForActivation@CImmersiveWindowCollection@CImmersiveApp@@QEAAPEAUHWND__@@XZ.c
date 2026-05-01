/*
 * XREFs of ?GetApplicationWindowForActivation@CImmersiveWindowCollection@CImmersiveApp@@QEAAPEAUHWND__@@XZ @ 0x1802C62A8
 * Callers:
 *     ?GetWindowAndPrepareForActivation@CImmersiveApp@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAPEAUHWND__@@@Z @ 0x1800423E0 (-GetWindowAndPrepareForActivation@CImmersiveApp@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAPEAU.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::GetApplicationWindowForActivation(
        CImmersiveApp::CImmersiveWindowCollection *this)
{
  __int64 v2; // rbx

  v2 = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(***((_QWORD ***)this + 20) + 128LL))(**((_QWORD **)this + 20)) )
    return (*(__int64 (__fastcall **)(_QWORD))(***((_QWORD ***)this + 20) + 32LL))(**((_QWORD **)this + 20));
  return v2;
}
