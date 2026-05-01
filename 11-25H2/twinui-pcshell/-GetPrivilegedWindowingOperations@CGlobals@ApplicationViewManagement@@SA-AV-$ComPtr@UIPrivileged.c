/*
 * XREFs of ?GetPrivilegedWindowingOperations@CGlobals@ApplicationViewManagement@@SA?AV?$ComPtr@UIPrivilegedWindowingOperations@@@WRL@Microsoft@@XZ @ 0x18030E474
 * Callers:
 *     ?SetPosition@CWin32ApplicationView@@UEAAJPEAUIApplicationViewPosition@@@Z @ 0x18030FD90 (-SetPosition@CWin32ApplicationView@@UEAAJPEAUIApplicationViewPosition@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x180054134 (-InternalRelease@-$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x1800541B4 (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 *__fastcall ApplicationViewManagement::CGlobals::GetPrivilegedWindowingOperations(__int64 *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rdi
  volatile signed __int32 *v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get((__int64 *)&v5);
  if ( v5 )
  {
    v2 = *((_QWORD *)v5 + 6);
    v3 = *(_QWORD *)(v2 + 648);
    if ( v3 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 8LL))(*(_QWORD *)(v2 + 648));
    v7 = 0LL;
    v6 = *a1;
    *a1 = v3;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v6);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v7);
  }
  Microsoft::WRL::ComPtr<NotificationDispatcher>::InternalRelease(&v5);
  return a1;
}
