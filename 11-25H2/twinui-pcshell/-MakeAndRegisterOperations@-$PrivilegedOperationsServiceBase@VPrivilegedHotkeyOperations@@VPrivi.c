/*
 * XREFs of ?MakeAndRegisterOperations@?$PrivilegedOperationsServiceBase@VPrivilegedHotkeyOperations@@VPrivilegedWindowingOperations@@@@IEAAJPEAVPrivilegedOperationsService@@@Z @ 0x1800690A8
 * Callers:
 *     ?MakeAndRegisterOperations@?$PrivilegedOperationsServiceBase@VPrivilegedWindowOwnershipOperations@@VPrivilegedHotkeyOperations@@VPrivilegedWindowingOperations@@@@IEAAJPEAVPrivilegedOperationsService@@@Z @ 0x18021B528 (-MakeAndRegisterOperations@-$PrivilegedOperationsServiceBase@VPrivilegedWindowOwnershipOperation.c)
 * Callees:
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x180025070 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MakeAndRegisterOperations@?$PrivilegedOperationsServiceBase@VPrivilegedWindowingOperations@@@@IEAAJPEAVPrivilegedOperationsService@@@Z @ 0x180068EA8 (-MakeAndRegisterOperations@-$PrivilegedOperationsServiceBase@VPrivilegedWindowingOperations@@@@I.c)
 *     ??$MakeAndInitialize@VPrivilegedHotkeyOperations@@V1@PEAVIamAccess@@AEAPEAVPrivilegedOperationsService@@@Details@WRL@Microsoft@@YAJPEAPEAVPrivilegedHotkeyOperations@@$$QEAPEAVIamAccess@@AEAPEAVPrivilegedOperationsService@@@Z @ 0x180068F9C (--$MakeAndInitialize@VPrivilegedHotkeyOperations@@V1@PEAVIamAccess@@AEAPEAVPrivilegedOperationsS.c)
 *     ?InternalRelease@?$ComPtr@VPrivilegedWindowOwnershipOperations@@@WRL@Microsoft@@IEAAKXZ @ 0x1800696C0 (-InternalRelease@-$ComPtr@VPrivilegedWindowOwnershipOperations@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

__int64 __fastcall PrivilegedOperationsServiceBase<PrivilegedHotkeyOperations,PrivilegedWindowingOperations>::MakeAndRegisterOperations(
        __int64 a1,
        __int64 a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  int v7[2]; // [rsp+20h] [rbp-48h] BYREF
  volatile int *v8; // [rsp+28h] [rbp-40h] BYREF
  GUID v9; // [rsp+30h] [rbp-38h] BYREF
  __int64 v10; // [rsp+40h] [rbp-28h]
  __int64 v11; // [rsp+48h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  *(_QWORD *)v7 = a2;
  v4 = PrivilegedOperationsServiceBase<PrivilegedWindowingOperations>::MakeAndRegisterOperations(a1, a2);
  if ( v4 < 0 )
  {
    v5 = 621LL;
    goto LABEL_5;
  }
  v8 = *(volatile int **)a1;
  Microsoft::WRL::ComPtr<PrivilegedWindowOwnershipOperations>::InternalRelease(a1 + 16);
  v4 = Microsoft::WRL::Details::MakeAndInitialize<PrivilegedHotkeyOperations,PrivilegedHotkeyOperations,IamAccess *,PrivilegedOperationsService * &>(
         (_QWORD *)(a1 + 16),
         &v8,
         (__int64 *)v7);
  if ( v4 < 0 )
  {
    v5 = 622LL;
    goto LABEL_5;
  }
  v10 = *(_QWORD *)(a1 + 16);
  v9 = GUID_a993a76e_0909_48bb_b0e9_4d8236263896;
  v11 = 0LL;
  v4 = CImmersiveShellComponent::RegisterServiceInformation((CImmersiveShellComponent *)(a2 + 48), (__int64)&v9, 1uLL);
  if ( v4 < 0 )
  {
    v5 = 625LL;
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
