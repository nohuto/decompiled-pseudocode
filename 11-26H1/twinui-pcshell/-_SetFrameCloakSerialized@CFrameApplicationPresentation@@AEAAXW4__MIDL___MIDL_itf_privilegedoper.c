/*
 * XREFs of ?_SetFrameCloakSerialized@CFrameApplicationPresentation@@AEAAXW4__MIDL___MIDL_itf_privilegedoperations_0000_0002_0001@@@Z @ 0x1801F00B0
 * Callers:
 *     ?Hide@CFrameApplicationPresentation@@UEAAJXZ @ 0x1801F0080 (-Hide@CFrameApplicationPresentation@@UEAAJXZ.c)
 *     ?Show@CFrameApplicationPresentation@@UEAAJXZ @ 0x1802119C0 (-Show@CFrameApplicationPresentation@@UEAAJXZ.c)
 *     _lambda_d2fa7908b891c12cbb1669318d2d4613_::operator() @ 0x180223D74 (_lambda_d2fa7908b891c12cbb1669318d2d4613_--operator().c)
 * Callees:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_66130c34581757aa5e7e6aafaafaa423___ @ 0x180291DFC (CFrameApplicationPresentation--_AddTaskToQueue__lambda_66130c34581757aa5e7e6aafaafaa423___.c)
 *     _lambda_7c0ea6bcd92fa0f22b391c2e3237e792_::_lambda_7c0ea6bcd92fa0f22b391c2e3237e792_ @ 0x180298204 (_lambda_7c0ea6bcd92fa0f22b391c2e3237e792_--_lambda_7c0ea6bcd92fa0f22b391c2e3237e792_.c)
 */

__int64 __fastcall CFrameApplicationPresentation::_SetFrameCloakSerialized(__int64 a1, unsigned int a2)
{
  __int64 v3; // r9
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v5[24]; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v6; // [rsp+58h] [rbp+10h] BYREF

  v6 = a2;
  if ( !*(_DWORD *)(a1 + 208) )
    return (*(__int64 (__fastcall **)(PVOID, _QWORD, _QWORD))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[17].Ptr
                                                            + 24LL))(
             CApplicationManagerUtility::g_pIAMGlobals[17].Ptr,
             *(_QWORD *)(a1 + 128),
             a2);
  v4 = *(_OWORD *)lambda_7c0ea6bcd92fa0f22b391c2e3237e792_::_lambda_7c0ea6bcd92fa0f22b391c2e3237e792_(v5, a1, &v6);
  return CFrameApplicationPresentation::_AddTaskToQueue__lambda_66130c34581757aa5e7e6aafaafaa423___(v3, &v4);
}
