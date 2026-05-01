/*
 * XREFs of ??4?$ComPtr@VIamAccess@@@WRL@Microsoft@@QEAAAEAV012@PEAVIamAccess@@@Z @ 0x1800C15E8
 * Callers:
 *     ??$MakeAndInitialize@VCPrivilegedPresentationOperations@@V1@PEAVIamAccess@@AEAPEAVPrivilegedOperationsService@@@Details@WRL@Microsoft@@YAJPEAPEAVCPrivilegedPresentationOperations@@$$QEAPEAVIamAccess@@AEAPEAVPrivilegedOperationsService@@@Z @ 0x18010C278 (--$MakeAndInitialize@VCPrivilegedPresentationOperations@@V1@PEAVIamAccess@@AEAPEAVPrivilegedOper.c)
 *     ?RuntimeClassInitialize@?$PrivilegedOperationsBase@UIPrivilegedForegroundOperations@@@@QEAAJPEAVIamAccess@@PEAVPrivilegedOperationsService@@@Z @ 0x18010CA48 (-RuntimeClassInitialize@-$PrivilegedOperationsBase@UIPrivilegedForegroundOperations@@@@QEAAJPEAV.c)
 *     ??$MakeAndInitialize@VPrivilegedWindowingOperations@@V1@PEAVIamAccess@@AEAPEAVPrivilegedOperationsService@@@Details@WRL@Microsoft@@YAJPEAPEAVPrivilegedWindowingOperations@@$$QEAPEAVIamAccess@@AEAPEAVPrivilegedOperationsService@@@Z @ 0x18010D140 (--$MakeAndInitialize@VPrivilegedWindowingOperations@@V1@PEAVIamAccess@@AEAPEAVPrivilegedOperatio.c)
 *     ??$MakeAndInitialize@VCPrivilegedTabletModeOperations@@V1@PEAVIamAccess@@AEAPEAVPrivilegedOperationsService@@@Details@WRL@Microsoft@@YAJPEAPEAVCPrivilegedTabletModeOperations@@$$QEAPEAVIamAccess@@AEAPEAVPrivilegedOperationsService@@@Z @ 0x1803F319C (--$MakeAndInitialize@VCPrivilegedTabletModeOperations@@V1@PEAVIamAccess@@AEAPEAVPrivilegedOperat.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x1800717E8 (-InternalRelease@-$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180072320 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

volatile signed __int32 **__fastcall Microsoft::WRL::ComPtr<IamAccess>::operator=(
        volatile signed __int32 **a1,
        volatile int *a2)
{
  volatile int *v2; // r8
  volatile signed __int32 *v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = a2;
  if ( *a1 != a2 )
  {
    if ( a2 )
      Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(a2 + 9), a2);
    v5 = *a1;
    *a1 = v2;
    Microsoft::WRL::ComPtr<NotificationDispatcher>::InternalRelease(&v5);
  }
  return a1;
}
