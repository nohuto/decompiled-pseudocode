/*
 * XREFs of ?MakeAndRegisterOperations@?$PrivilegedOperationsServiceBase@VCPrivilegedForegroundOperations@@VCPrivilegedTabletModeOperations@@VCPrivilegedSizeConstraintsOperations@@VPrivilegedWindowOwnershipOperations@@VPrivilegedHotkeyOperations@@VPrivilegedWindowingOperations@@@@IEAAJPEAVPrivilegedOperationsService@@@Z @ 0x18010C7E4
 * Callers:
 *     ?MakeAndRegisterOperations@?$PrivilegedOperationsServiceBase@VCPrivilegedArrangementOperations@@VCPrivilegedForegroundOperations@@VCPrivilegedTabletModeOperations@@VCPrivilegedSizeConstraintsOperations@@VPrivilegedWindowOwnershipOperations@@VPrivilegedHotkeyOperations@@VPrivilegedWindowingOperations@@@@IEAAJPEAVPrivilegedOperationsService@@@Z @ 0x18010C718 (-MakeAndRegisterOperations@-$PrivilegedOperationsServiceBase@VCPrivilegedArrangementOperations@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x18004A1A8 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ?InternalRelease@?$ComPtr@VCPrivilegedForegroundOperations@@@WRL@Microsoft@@IEAAKXZ @ 0x180081CF4 (-InternalRelease@-$ComPtr@VCPrivilegedForegroundOperations@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MakeAndRegisterOperations@?$PrivilegedOperationsServiceBase@VCPrivilegedTabletModeOperations@@VCPrivilegedSizeConstraintsOperations@@VPrivilegedWindowOwnershipOperations@@VPrivilegedHotkeyOperations@@VPrivilegedWindowingOperations@@@@IEAAJPEAVPrivilegedOperationsService@@@Z @ 0x18010C8AC (-MakeAndRegisterOperations@-$PrivilegedOperationsServiceBase@VCPrivilegedTabletModeOperations@@V.c)
 *     ??$MakeAndInitialize@VCPrivilegedForegroundOperations@@V1@PEAVIamAccess@@AEAPEAVPrivilegedOperationsService@@@Details@WRL@Microsoft@@YAJPEAPEAVCPrivilegedForegroundOperations@@$$QEAPEAVIamAccess@@AEAPEAVPrivilegedOperationsService@@@Z @ 0x18010C978 (--$MakeAndInitialize@VCPrivilegedForegroundOperations@@V1@PEAVIamAccess@@AEAPEAVPrivilegedOperat.c)
 */

__int64 __fastcall PrivilegedOperationsServiceBase<CPrivilegedForegroundOperations,CPrivilegedTabletModeOperations,CPrivilegedSizeConstraintsOperations,PrivilegedWindowOwnershipOperations,PrivilegedHotkeyOperations,PrivilegedWindowingOperations>::MakeAndRegisterOperations(
        __int64 *a1,
        __int64 a2)
{
  int v4; // ebx
  __int64 v6; // rdx
  GUID v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]
  __int64 v9; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF
  __int64 v12; // [rsp+60h] [rbp+18h] BYREF

  v11 = a2;
  v4 = PrivilegedOperationsServiceBase<CPrivilegedTabletModeOperations,CPrivilegedSizeConstraintsOperations,PrivilegedWindowOwnershipOperations,PrivilegedHotkeyOperations,PrivilegedWindowingOperations>::MakeAndRegisterOperations();
  if ( v4 < 0 )
  {
    v6 = 648LL;
  }
  else
  {
    v12 = *a1;
    Microsoft::WRL::ComPtr<CPrivilegedForegroundOperations>::InternalRelease(a1 + 6);
    v4 = Microsoft::WRL::Details::MakeAndInitialize<CPrivilegedForegroundOperations,CPrivilegedForegroundOperations,IamAccess *,PrivilegedOperationsService * &>(
           a1 + 6,
           &v12,
           &v11);
    if ( v4 < 0 )
    {
      v6 = 649LL;
    }
    else
    {
      v8 = a1[6];
      v7 = GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6;
      v9 = 0LL;
      v4 = CImmersiveShellComponent::RegisterServiceInformation(
             (CImmersiveShellComponent *)(a2 + 48),
             (__int64)&v7,
             1uLL);
      if ( v4 >= 0 )
        return 0LL;
      v6 = 652LL;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (int)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
    (const char *)(unsigned int)v4);
  return (unsigned int)v4;
}
