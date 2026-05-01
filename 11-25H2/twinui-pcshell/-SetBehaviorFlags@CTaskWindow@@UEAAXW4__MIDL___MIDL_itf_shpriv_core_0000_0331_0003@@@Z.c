/*
 * XREFs of ?SetBehaviorFlags@CTaskWindow@@UEAAXW4__MIDL___MIDL_itf_shpriv_core_0000_0331_0003@@@Z @ 0x180306900
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_Dq @ 0x180306E54 (WPP_SF_Dq.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int __fastcall CTaskWindow::SetBehaviorFlags(HWND *a1, int a2)
{
  void *v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8

  v3 = (void *)a2;
  v4 = (*((__int64 (__fastcall **)(HWND *))*a1 + 4))(a1);
  if ( v4 )
  {
    LODWORD(v4) = (_DWORD)CApplicationManagerUtility::g_pIAMGlobals;
    if ( HIWORD(CApplicationManagerUtility::g_pIAMGlobals[13].Ptr) )
    {
      LODWORD(v4) = SetPropW(a1[4], (LPCWSTR)HIWORD(CApplicationManagerUtility::g_pIAMGlobals[13].Ptr), v3);
      if ( (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 1) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
      {
        LODWORD(v4) = WPP_SF_Dq(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL), v5, v6, (unsigned int)v3, a1[4]);
      }
    }
  }
  return v4;
}
