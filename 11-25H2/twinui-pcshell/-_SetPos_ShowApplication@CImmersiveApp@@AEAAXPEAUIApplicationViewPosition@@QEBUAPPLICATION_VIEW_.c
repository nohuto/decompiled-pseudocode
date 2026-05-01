/*
 * XREFs of ?_SetPos_ShowApplication@CImmersiveApp@@AEAAXPEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@_N@Z @ 0x180137B50
 * Callers:
 *     ?SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@PEAUIApplicationViewTitlebarConfiguration@@W4SET_IMM_APP_POS@@W4SESSION_IDLE_STATE@@PEAPEAXPEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@W4APPLICATION_VIEW_CLOAK_TYPE@@W4ZBID@@@Z @ 0x18003F800 (-SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPD.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x180042250 (-ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 *     ?_UpdateApplication@CImmersiveApp@@AEAA?AW4UPDATE_APP_RESULT@1@PEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@@Z @ 0x180137AA8 (-_UpdateApplication@CImmersiveApp@@AEAA-AW4UPDATE_APP_RESULT@1@PEAUIApplicationViewPosition@@QEB.c)
 *     ?_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ @ 0x180137E5C (-_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@W4REPORT_VISIBILITY_STATE@CReportWindowVisibilityChange@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@W4REPORT_VISIBILITY_STATE@CReportWindowVisibilityChange@@@@V?$CSimpleArrayStandardCompareHelper@W4REPORT_VISIBILITY_STATE@CReportWindowVisibilityChange@@@@V?$CSimpleArrayStandardMergeHelper@W4REPORT_VISIBILITY_STATE@CReportWindowVisibilityChange@@@@@@QEAAJ_K0@Z @ 0x1802F0CC4 (-_EnsureCapacity@-$CTSimpleArray@W4REPORT_VISIBILITY_STATE@CReportWindowVisibilityChange@@$0PPPP.c)
 *     ?SendVisibilityChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_J@Z @ 0x180303DC4 (-SendVisibilityChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_J@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CImmersiveApp::_SetPos_ShowApplication(__int64 a1, __int64 a2, __int64 a3, char a4, char a5)
{
  int updated; // ebp
  void (__fastcall *v7)(__int64, __int64 *); // rbx
  char v8; // di
  PSRWLOCK v9; // rbx
  char *Ptr; // rdx
  PVOID v11; // rcx
  _DWORD *v12; // rdx
  int v13; // eax
  __int64 v14; // rdx
  char *v15; // rax
  __int64 v16; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v18; // [rsp+30h] [rbp+8h] BYREF

  updated = CImmersiveApp::_UpdateApplication(a1, a2, a3, a4);
  v18 = 0LL;
  v7 = *(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(a1 + 112) + 464LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
  v7(a1 + 112, &v18);
  if ( a5 && updated == 1 )
  {
    v8 = 1;
    v9 = CApplicationManagerUtility::g_pIAMGlobals;
    Ptr = (char *)CApplicationManagerUtility::g_pIAMGlobals[2].Ptr;
    if ( Ptr != CApplicationManagerUtility::g_pIAMGlobals[4].Ptr
      || (int)CTSimpleArray<enum CReportWindowVisibilityChange::REPORT_VISIBILITY_STATE,4294967294,CTPolicyCoTaskMem<enum CReportWindowVisibilityChange::REPORT_VISIBILITY_STATE>,CSimpleArrayStandardCompareHelper<enum CReportWindowVisibilityChange::REPORT_VISIBILITY_STATE>,CSimpleArrayStandardMergeHelper<enum CReportWindowVisibilityChange::REPORT_VISIBILITY_STATE>>::_EnsureCapacity(
                &CApplicationManagerUtility::g_pIAMGlobals[1],
                Ptr + 1) >= 0 )
    {
      v11 = v9[2].Ptr;
      v9[2].Ptr = (char *)v11 + 1;
      v12 = (char *)v9[1].Ptr + 4 * (_QWORD)v11;
      if ( v12 )
        *v12 = 2;
    }
  }
  else
  {
    v8 = 0;
  }
  *(_BYTE *)(a1 + 480) = 1;
  v13 = CImmersiveApp::CImmersiveWindowCollection::ReconcileVisibility((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 288));
  if ( v13 >= 0 )
  {
    v13 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 432) + 80LL))(*(_QWORD *)(a1 + 432));
    if ( v13 >= 0 )
      goto LABEL_13;
    v14 = 7414LL;
  }
  else
  {
    v14 = 7411LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (int)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
    (const char *)(unsigned int)v13);
LABEL_13:
  CImmersiveApp::_UpdateAppStateAndSendNotifications((CImmersiveApp *)a1);
  GetSystemTimeAsFileTime((LPFILETIME)(a1 + 692));
  if ( v8 )
  {
    v15 = (char *)CApplicationManagerUtility::g_pIAMGlobals[2].Ptr;
    if ( v15 )
      CApplicationManagerUtility::g_pIAMGlobals[2].Ptr = v15 - 1;
    CImmersiveApp::CImmersiveWindowCollection::SendVisibilityChanged(
      (CImmersiveApp::CImmersiveWindowCollection *)(a1 + 288),
      9LL);
    CImmersiveApp::CImmersiveWindowCollection::SendVisibilityChanged(
      (CImmersiveApp::CImmersiveWindowCollection *)(a1 + 288),
      10LL);
  }
  v16 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
}
