/*
 * XREFs of ?MakeAndRegisterOperations@?$PrivilegedOperationsServiceBase@VCPrivilegedSizeConstraintsOperations@@VPrivilegedWindowOwnershipOperations@@VPrivilegedHotkeyOperations@@VPrivilegedWindowingOperations@@@@IEAAJPEAVPrivilegedOperationsService@@@Z @ 0x1802B81AC
 * Callers:
 *     ?MakeAndRegisterOperations@?$PrivilegedOperationsServiceBase@VCPrivilegedTabletModeOperations@@VCPrivilegedSizeConstraintsOperations@@VPrivilegedWindowOwnershipOperations@@VPrivilegedHotkeyOperations@@VPrivilegedWindowingOperations@@@@IEAAJPEAVPrivilegedOperationsService@@@Z @ 0x18010C8AC (-MakeAndRegisterOperations@-$PrivilegedOperationsServiceBase@VCPrivilegedTabletModeOperations@@V.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x18004A1A8 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ?InternalRelease@?$ComPtr@VCPrivilegedSizeConstraintsOperations@@@WRL@Microsoft@@IEAAKXZ @ 0x18010CCC8 (-InternalRelease@-$ComPtr@VCPrivilegedSizeConstraintsOperations@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MakeAndRegisterOperations@?$PrivilegedOperationsServiceBase@VPrivilegedWindowOwnershipOperations@@VPrivilegedHotkeyOperations@@VPrivilegedWindowingOperations@@@@IEAAJPEAVPrivilegedOperationsService@@@Z @ 0x18010CCF0 (-MakeAndRegisterOperations@-$PrivilegedOperationsServiceBase@VPrivilegedWindowOwnershipOperation.c)
 *     ??$MakeAndInitialize@VCPrivilegedSizeConstraintsOperations@@V1@PEAVIamAccess@@AEAPEAVPrivilegedOperationsService@@@Details@WRL@Microsoft@@YAJPEAPEAVCPrivilegedSizeConstraintsOperations@@$$QEAPEAVIamAccess@@AEAPEAVPrivilegedOperationsService@@@Z @ 0x18022C520 (--$MakeAndInitialize@VCPrivilegedSizeConstraintsOperations@@V1@PEAVIamAccess@@AEAPEAVPrivilegedO.c)
 */

__int64 __fastcall PrivilegedOperationsServiceBase<CPrivilegedSizeConstraintsOperations,PrivilegedWindowOwnershipOperations,PrivilegedHotkeyOperations,PrivilegedWindowingOperations>::MakeAndRegisterOperations(
        volatile int **a1,
        __int64 a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  GUID v7; // [rsp+20h] [rbp-28h] BYREF
  volatile int *v8; // [rsp+30h] [rbp-18h]
  __int64 v9; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF
  volatile int *v12; // [rsp+60h] [rbp+18h] BYREF

  v11 = a2;
  v4 = PrivilegedOperationsServiceBase<PrivilegedWindowOwnershipOperations,PrivilegedHotkeyOperations,PrivilegedWindowingOperations>::MakeAndRegisterOperations(
         a1,
         a2);
  if ( v4 < 0 )
  {
    v5 = 648LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v12 = *a1;
  Microsoft::WRL::ComPtr<CPrivilegedSizeConstraintsOperations>::InternalRelease(a1 + 4);
  v4 = Microsoft::WRL::Details::MakeAndInitialize<CPrivilegedSizeConstraintsOperations,CPrivilegedSizeConstraintsOperations,IamAccess *,PrivilegedOperationsService * &>(
         (__int64 *)a1 + 4,
         &v12,
         &v11);
  if ( v4 < 0 )
  {
    v5 = 649LL;
    goto LABEL_3;
  }
  v8 = a1[4];
  v7 = GUID_1258a377_0646_40fd_b5fc_b642b81befba;
  v9 = 0LL;
  v4 = CImmersiveShellComponent::RegisterServiceInformation((CImmersiveShellComponent *)(a2 + 48), (__int64)&v7, 1uLL);
  if ( v4 < 0 )
  {
    v5 = 652LL;
    goto LABEL_3;
  }
  return 0LL;
}
