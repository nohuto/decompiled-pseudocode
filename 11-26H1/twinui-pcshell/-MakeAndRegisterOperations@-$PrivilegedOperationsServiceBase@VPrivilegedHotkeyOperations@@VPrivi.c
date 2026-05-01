/*
 * XREFs of ?MakeAndRegisterOperations@?$PrivilegedOperationsServiceBase@VPrivilegedHotkeyOperations@@VPrivilegedWindowingOperations@@@@IEAAJPEAVPrivilegedOperationsService@@@Z @ 0x18010CDBC
 * Callers:
 *     ?MakeAndRegisterOperations@?$PrivilegedOperationsServiceBase@VPrivilegedWindowOwnershipOperations@@VPrivilegedHotkeyOperations@@VPrivilegedWindowingOperations@@@@IEAAJPEAVPrivilegedOperationsService@@@Z @ 0x18010CCF0 (-MakeAndRegisterOperations@-$PrivilegedOperationsServiceBase@VPrivilegedWindowOwnershipOperation.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x18004A1A8 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ?InternalRelease@?$ComPtr@VPrivilegedWindowOwnershipOperations@@@WRL@Microsoft@@IEAAKXZ @ 0x180080E24 (-InternalRelease@-$ComPtr@VPrivilegedWindowOwnershipOperations@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VPrivilegedHotkeyOperations@@V1@PEAVIamAccess@@AEAPEAVPrivilegedOperationsService@@@Details@WRL@Microsoft@@YAJPEAPEAVPrivilegedHotkeyOperations@@$$QEAPEAVIamAccess@@AEAPEAVPrivilegedOperationsService@@@Z @ 0x18010CE88 (--$MakeAndInitialize@VPrivilegedHotkeyOperations@@V1@PEAVIamAccess@@AEAPEAVPrivilegedOperationsS.c)
 *     ?MakeAndRegisterOperations@?$PrivilegedOperationsServiceBase@VPrivilegedWindowingOperations@@@@IEAAJPEAVPrivilegedOperationsService@@@Z @ 0x18010CF98 (-MakeAndRegisterOperations@-$PrivilegedOperationsServiceBase@VPrivilegedWindowingOperations@@@@I.c)
 */

__int64 __fastcall PrivilegedOperationsServiceBase<PrivilegedHotkeyOperations,PrivilegedWindowingOperations>::MakeAndRegisterOperations(
        volatile int **a1,
        __int64 a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  int v7[4]; // [rsp+20h] [rbp-28h] BYREF
  volatile int *v8; // [rsp+30h] [rbp-18h]
  __int64 v9; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF
  volatile int *v12; // [rsp+60h] [rbp+18h] BYREF

  v11 = a2;
  v4 = PrivilegedOperationsServiceBase<PrivilegedWindowingOperations>::MakeAndRegisterOperations();
  if ( v4 < 0 )
  {
    v5 = 648LL;
    goto LABEL_5;
  }
  v12 = *a1;
  Microsoft::WRL::ComPtr<PrivilegedWindowOwnershipOperations>::InternalRelease(a1 + 2);
  v4 = Microsoft::WRL::Details::MakeAndInitialize<PrivilegedHotkeyOperations,PrivilegedHotkeyOperations,IamAccess *,PrivilegedOperationsService * &>(
         a1 + 2,
         &v12,
         &v11);
  if ( v4 < 0 )
  {
    v5 = 649LL;
    goto LABEL_5;
  }
  v8 = a1[2];
  *(GUID *)v7 = GUID_a993a76e_0909_48bb_b0e9_4d8236263896;
  v9 = 0LL;
  v4 = CImmersiveShellComponent::RegisterServiceInformation((CImmersiveShellComponent *)(a2 + 48), (__int64)v7, 1uLL);
  if ( v4 < 0 )
  {
    v5 = 652LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  return 0LL;
}
