/*
 * XREFs of ?InitializePrivilegedOperationsForIam@PrivilegedOperationsService@@QEAAJPEAUIPrivilegedOperationsConsumer@@@Z @ 0x180178B88
 * Callers:
 *     ?InitializePrivilegedOperationsForIam@@YAJPEAUIPrivilegedOperationsConsumer@@@Z @ 0x180178B34 (-InitializePrivilegedOperationsForIam@@YAJPEAUIPrivilegedOperationsConsumer@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z @ 0x180083CC4 (-GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z.c)
 *     ?PublishPrivilegedOperations@?$PrivilegedOperationsServiceBase@VCPrivilegedPresentationOperations@@VCPrivilegedNotificationOperations@@VCPrivilegedArrangementOperations@@VCPrivilegedForegroundOperations@@VCPrivilegedTabletModeOperations@@VCPrivilegedSizeConstraintsOperations@@VPrivilegedWindowOwnershipOperations@@VPrivilegedHotkeyOperations@@VPrivilegedWindowingOperations@@@@IEAAJPEAUIPrivilegedOperationsConsumer@@AEBU_GUID@@@Z @ 0x180178DA8 (-PublishPrivilegedOperations@-$PrivilegedOperationsServiceBase@VCPrivilegedPresentationOperation.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x18067A61C (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall PrivilegedOperationsService::InitializePrivilegedOperationsForIam(
        PrivilegedOperationsService *this,
        struct IPrivilegedOperationsConsumer *a2)
{
  struct PrivilegedOperationsService *v2; // r14
  char *v4; // rdi
  __int64 v5; // rax
  CCriticalFailureHandler *v6; // rcx
  int v7; // ebx
  int v9; // eax
  unsigned __int64 *v10; // [rsp+20h] [rbp-49h]
  unsigned __int64 *v11; // [rsp+28h] [rbp-41h]
  int v12[4]; // [rsp+30h] [rbp-39h] BYREF
  _OWORD v13[7]; // [rsp+40h] [rbp-29h] BYREF
  char v14; // [rsp+B0h] [rbp+47h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v2 = PrivilegedOperationsService::s_this;
  v4 = (char *)v13;
  v13[0] = GUID_02d40f3e_548a_4be9_adfe_5c0ffeae1bc8;
  v13[1] = GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9;
  v13[2] = GUID_3dc37409_1289_4110_adb6_a03083c66a7d;
  v13[3] = GUID_4aa32b90_a324_4d8b_aa7e_c8a4b13e5b90;
  v13[4] = GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6;
  v13[5] = GUID_b19132e0_037d_4a7e_ade3_b7ebde5310dd;
  v13[6] = GUID_cd3d4fae_01e6_473b_ad74_73f37cd2b64b;
  while ( 1 )
  {
    if ( v4 == &v14 )
      return 0LL;
    v5 = *(_QWORD *)v4 - *(_QWORD *)&GUID_02d40f3e_548a_4be9_adfe_5c0ffeae1bc8.Data1;
    if ( *(_QWORD *)v4 == *(_QWORD *)&GUID_02d40f3e_548a_4be9_adfe_5c0ffeae1bc8.Data1 )
      v5 = *((_QWORD *)v4 + 1) - *(_QWORD *)GUID_02d40f3e_548a_4be9_adfe_5c0ffeae1bc8.Data4;
    if ( v5 )
    {
      v7 = PrivilegedOperationsServiceBase<CPrivilegedPresentationOperations,CPrivilegedNotificationOperations,CPrivilegedArrangementOperations,CPrivilegedForegroundOperations,CPrivilegedTabletModeOperations,CPrivilegedSizeConstraintsOperations,PrivilegedWindowOwnershipOperations,PrivilegedHotkeyOperations,PrivilegedWindowingOperations>::PublishPrivilegedOperations(
             (char *)v2 + 168,
             a2,
             v4);
    }
    else
    {
      v9 = (*(__int64 (__fastcall **)(struct IPrivilegedOperationsConsumer *, GUID *, _QWORD))(*(_QWORD *)a2 + 24LL))(
             a2,
             &GUID_02d40f3e_548a_4be9_adfe_5c0ffeae1bc8,
             *((_QWORD *)v2 + 31));
      v7 = v9;
      if ( v9 >= 0 )
        v7 = 0;
      else
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x299,
          (int)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
          (const char *)(unsigned int)v9);
    }
    v12[0] = v7;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v6, v12);
      v7 = v12[0];
      CRVPrivate::cfhImmersiveShellStartup = 1;
    }
    if ( v7 < 0 )
    {
      if ( v7 != -2147024882 && v7 != -2144862209 )
      {
        CCriticalFailureHandler::HandleFailure(
          v6,
          v12,
          L"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
          0x366u,
          v10,
          v11);
        v7 = v12[0];
      }
      if ( v7 < 0 )
        break;
    }
    v4 += 16;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x366,
    (int)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
    (const char *)(unsigned int)v7);
  return (unsigned int)v7;
}
