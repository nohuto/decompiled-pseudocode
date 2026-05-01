/*
 * XREFs of ?_GetWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJAEBVCTaskWindowFinder@@PEAPEAUITaskWindow@@PEA_K@Z @ 0x1802C61CC
 * Callers:
 *     ?GetWindowsInternal@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_GET_WINDOWS_FILTER@@AEBU_GUID@@PEAPEAX@Z @ 0x18003C2B0 (-GetWindowsInternal@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_GET_WINDOWS_FILTER@@AEBU_GUID@@P.c)
 *     ?GetTaskWindow@CImmersiveApp@@UEBAJAEBVCTaskWindowFinder@@PEAPEAUITaskWindow@@@Z @ 0x180302350 (-GetTaskWindow@CImmersiveApp@@UEBAJAEBVCTaskWindowFinder@@PEAPEAUITaskWindow@@@Z.c)
 * Callees:
 *     ?_FindTaskWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJAEBVCTaskWindowFinder@@PEA_K@Z @ 0x180041D70 (-_FindTaskWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJAEBVCTaskWindowFinder@@PEA_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::_GetWindow(
        CImmersiveApp::CImmersiveWindowCollection *this,
        const struct CTaskWindowFinder *a2,
        struct ITaskWindow **a3,
        unsigned __int64 *a4)
{
  __int64 result; // rax
  __int64 (__fastcall ***v8)(_QWORD, GUID *, struct ITaskWindow **); // rcx

  *a3 = 0LL;
  result = CImmersiveApp::CImmersiveWindowCollection::_FindTaskWindow(this, a2, a4);
  if ( (int)result >= 0 )
  {
    v8 = *(__int64 (__fastcall ****)(_QWORD, GUID *, struct ITaskWindow **))(*((_QWORD *)this + 20) + 8 * *a4);
    return (**v8)(v8, &GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee, a3);
  }
  return result;
}
