/*
 * XREFs of ?GetBehaviorFlags@CTaskWindow@@UEAA?AW4__MIDL___MIDL_itf_shpriv_core_0000_0331_0003@@XZ @ 0x180301BE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qD @ 0x1803028E0 (WPP_SF_qD.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTaskWindow::GetBehaviorFlags(HWND *a1)
{
  unsigned int v2; // ebx
  unsigned int PropW; // eax
  __int64 v4; // rdx
  __int64 v5; // r8

  v2 = 0;
  if ( (*((__int64 (__fastcall **)(HWND *))*a1 + 4))(a1) )
  {
    if ( HIWORD(CApplicationManagerUtility::g_pIAMGlobals[13].Ptr) )
    {
      PropW = (unsigned int)GetPropW(a1[4], (LPCWSTR)HIWORD(CApplicationManagerUtility::g_pIAMGlobals[13].Ptr));
      v2 = PropW;
      if ( (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 1) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
      {
        WPP_SF_qD(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL), v4, v5, a1[4], PropW);
      }
    }
  }
  return v2;
}
