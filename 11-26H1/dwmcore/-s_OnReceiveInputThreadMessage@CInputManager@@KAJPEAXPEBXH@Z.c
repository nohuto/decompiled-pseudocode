/*
 * XREFs of ?s_OnReceiveInputThreadMessage@CInputManager@@KAJPEAXPEBXH@Z @ 0x180226C30
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1801785D0 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802014E4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?OnEdgyDetected@CManipulation@@QEAAXPEBUEdgyDetectedParams@@@Z @ 0x18025FA28 (-OnEdgyDetected@CManipulation@@QEAAXPEBUEdgyDetectedParams@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInputManager::s_OnReceiveInputThreadMessage(
        void *a1,
        const struct EdgyDetectedParams *a2,
        int a3,
        const char *a4)
{
  __int64 v5; // rdi
  CManipulation *v6; // rbx
  __int64 *v7; // rcx
  __int64 v8; // rax
  int v9; // edi
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  CManipulation *v13; // [rsp+58h] [rbp+20h] BYREF

  if ( a3 != 56 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x9E,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\input\\inputmanager.cpp",
      a4);
  v5 = *(_QWORD *)a2;
  if ( *(_QWORD *)a2 )
  {
    v6 = 0LL;
    v13 = 0LL;
    v11 = (struct _RTL_CRITICAL_SECTION *)(v5 + 16);
    EnterCriticalSection((LPCRITICAL_SECTION)(v5 + 16));
    v7 = *(__int64 **)(v5 + 64);
    if ( v7 )
    {
      v8 = *v7;
      v6 = *(CManipulation **)(v5 + 64);
      v13 = v6;
      (*(void (__fastcall **)(__int64 *))(v8 + 8))(v7);
      v9 = 0;
    }
    else
    {
      v9 = -2147467261;
    }
    CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v11);
    if ( v9 >= 0 )
      CManipulation::OnEdgyDetected(v6, a2);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v13);
  }
  return 0LL;
}
