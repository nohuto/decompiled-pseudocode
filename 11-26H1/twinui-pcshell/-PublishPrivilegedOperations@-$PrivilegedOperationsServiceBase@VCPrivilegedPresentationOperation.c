/*
 * XREFs of ?PublishPrivilegedOperations@?$PrivilegedOperationsServiceBase@VCPrivilegedPresentationOperations@@VCPrivilegedNotificationOperations@@VCPrivilegedArrangementOperations@@VCPrivilegedForegroundOperations@@VCPrivilegedTabletModeOperations@@VCPrivilegedSizeConstraintsOperations@@VPrivilegedWindowOwnershipOperations@@VPrivilegedHotkeyOperations@@VPrivilegedWindowingOperations@@@@IEAAJPEAUIPrivilegedOperationsConsumer@@AEBU_GUID@@@Z @ 0x180178DA8
 * Callers:
 *     ?InitializePrivilegedOperationsForIam@PrivilegedOperationsService@@QEAAJPEAUIPrivilegedOperationsConsumer@@@Z @ 0x180178B88 (-InitializePrivilegedOperationsForIam@PrivilegedOperationsService@@QEAAJPEAUIPrivilegedOperation.c)
 *     ?PublishPrivilegedOperations@?$PrivilegedOperationsServiceBase@VCPrivilegedDesktopOperations@@VCPrivilegedPresentationOperations@@VCPrivilegedNotificationOperations@@VCPrivilegedArrangementOperations@@VCPrivilegedForegroundOperations@@VCPrivilegedTabletModeOperations@@VCPrivilegedSizeConstraintsOperations@@VPrivilegedWindowOwnershipOperations@@VPrivilegedHotkeyOperations@@VPrivilegedWindowingOperations@@@@IEAAJPEAUIPrivilegedOperationsConsumer@@AEBU_GUID@@@Z @ 0x180178D28 (-PublishPrivilegedOperations@-$PrivilegedOperationsServiceBase@VCPrivilegedDesktopOperations@@VC.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PublishPrivilegedOperations@?$PrivilegedOperationsServiceBase@VCPrivilegedTabletModeOperations@@VCPrivilegedSizeConstraintsOperations@@VPrivilegedWindowOwnershipOperations@@VPrivilegedHotkeyOperations@@VPrivilegedWindowingOperations@@@@IEAAJPEAUIPrivilegedOperationsConsumer@@AEBU_GUID@@@Z @ 0x180178ED4 (-PublishPrivilegedOperations@-$PrivilegedOperationsServiceBase@VCPrivilegedTabletModeOperations@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall PrivilegedOperationsServiceBase<CPrivilegedPresentationOperations,CPrivilegedNotificationOperations,CPrivilegedArrangementOperations,CPrivilegedForegroundOperations,CPrivilegedTabletModeOperations,CPrivilegedSizeConstraintsOperations,PrivilegedWindowOwnershipOperations,PrivilegedHotkeyOperations,PrivilegedWindowingOperations>::PublishPrivilegedOperations(
        _QWORD *a1,
        __int64 *a2,
        _QWORD *a3)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  GUID *v8; // rdx
  __int64 v9; // r8
  int v10; // eax
  unsigned int v11; // ebx
  int v13; // eax
  unsigned __int64 v14; // r9
  __int64 v15; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *a3 - *(_QWORD *)&GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9.Data1;
  if ( *a3 == *(_QWORD *)&GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9.Data1 )
    v4 = a3[1] - *(_QWORD *)GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9.Data4;
  if ( v4 )
  {
    v5 = *a3 - *(_QWORD *)&GUID_3dc37409_1289_4110_adb6_a03083c66a7d.Data1;
    if ( *a3 == *(_QWORD *)&GUID_3dc37409_1289_4110_adb6_a03083c66a7d.Data1 )
      v5 = a3[1] - *(_QWORD *)GUID_3dc37409_1289_4110_adb6_a03083c66a7d.Data4;
    if ( v5 )
    {
      v6 = *a3 - *(_QWORD *)&GUID_4aa32b90_a324_4d8b_aa7e_c8a4b13e5b90.Data1;
      if ( *a3 == *(_QWORD *)&GUID_4aa32b90_a324_4d8b_aa7e_c8a4b13e5b90.Data1 )
        v6 = a3[1] - *(_QWORD *)GUID_4aa32b90_a324_4d8b_aa7e_c8a4b13e5b90.Data4;
      if ( v6 )
      {
        v15 = *a3 - *(_QWORD *)&GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6.Data1;
        if ( *a3 == *(_QWORD *)&GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6.Data1 )
          v15 = a3[1] - *(_QWORD *)GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6.Data4;
        if ( v15 )
          return (unsigned int)PrivilegedOperationsServiceBase<CPrivilegedTabletModeOperations,CPrivilegedSizeConstraintsOperations,PrivilegedWindowOwnershipOperations,PrivilegedHotkeyOperations,PrivilegedWindowingOperations>::PublishPrivilegedOperations(
                                 a1,
                                 a2,
                                 a3,
                                 a2);
        v7 = *a2;
        v8 = &GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6;
        v9 = a1[6];
      }
      else
      {
        v7 = *a2;
        v8 = &GUID_4aa32b90_a324_4d8b_aa7e_c8a4b13e5b90;
        v9 = a1[7];
      }
    }
    else
    {
      v7 = *a2;
      v8 = &GUID_3dc37409_1289_4110_adb6_a03083c66a7d;
      v9 = a1[8];
    }
    v10 = (*(__int64 (__fastcall **)(__int64 *, GUID *, __int64))(v7 + 24))(a2, v8, v9);
    v11 = v10;
    if ( v10 >= 0 )
      return 0;
    v14 = (unsigned int)v10;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x299,
      (int)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
      (const char *)v14);
    return v11;
  }
  v13 = (*(__int64 (__fastcall **)(__int64 *, GUID *, _QWORD))(*a2 + 24))(
          a2,
          &GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9,
          a1[9]);
  v11 = v13;
  if ( v13 < 0 )
  {
    v14 = (unsigned int)v13;
    goto LABEL_16;
  }
  return 0LL;
}
