/*
 * XREFs of ?CVirtualDesktopSoftLandingHandler_CreateInstance@@YAJPEAUIApplicationViewCollection@@PEAUIVirtualDesktopNotificationServicePrivate@@PEAUIVirtualDesktopRegistryHelpers@@AEBU_GUID@@PEAPEAX@Z @ 0x180241038
 * Callers:
 *     ?SubscribeToServices@CVirtualDesktopComponent@@UEAAJPEAUIServiceProvider@@@Z @ 0x1802686B0 (-SubscribeToServices@CVirtualDesktopComponent@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCVirtualDesktopSoftLandingHandler@@V1@AEAPEAUIApplicationViewCollection@@AEAPEAUIVirtualDesktopNotificationServicePrivate@@AEAPEAUIVirtualDesktopRegistryHelpers@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopSoftLandingHandler@@AEAPEAUIApplicationViewCollection@@AEAPEAUIVirtualDesktopNotificationServicePrivate@@AEAPEAUIVirtualDesktopRegistryHelpers@@@Z @ 0x1802BDD88 (--$MakeAndInitialize@VCVirtualDesktopSoftLandingHandler@@V1@AEAPEAUIApplicationViewCollection@@A.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CVirtualDesktopSoftLandingHandler_CreateInstance(
        struct IApplicationViewCollection *a1,
        struct IVirtualDesktopNotificationServicePrivate *a2,
        struct IVirtualDesktopRegistryHelpers *a3,
        const struct _GUID *a4,
        void **a5)
{
  unsigned int v5; // ebx
  void **v6; // rsi
  int v7; // eax
  unsigned int v8; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IApplicationViewCollection *v11; // [rsp+40h] [rbp+8h] BYREF
  struct IVirtualDesktopNotificationServicePrivate *v12; // [rsp+48h] [rbp+10h] BYREF
  struct IVirtualDesktopRegistryHelpers *v13; // [rsp+50h] [rbp+18h] BYREF
  __int64 v14; // [rsp+58h] [rbp+20h] BYREF

  v13 = a3;
  v12 = a2;
  v11 = a1;
  v5 = 0;
  v6 = a5;
  *a5 = 0LL;
  v14 = 0LL;
  v7 = Microsoft::WRL::Details::MakeAndInitialize<CVirtualDesktopSoftLandingHandler,CVirtualDesktopSoftLandingHandler,IApplicationViewCollection * &,IVirtualDesktopNotificationServicePrivate * &,IVirtualDesktopRegistryHelpers * &>(
         &v14,
         &v11,
         &v12,
         &v13);
  v8 = v7;
  if ( v7 >= 0 )
  {
    if ( v14 )
    {
      if ( (**(int (__fastcall ***)(__int64, GUID *, void **))v14)(v14, &GUID_e78f38d6_dc0c_4e82_b397_c5c8d0516858, v6) >= 0 )
      {
LABEL_10:
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v14);
        return v5;
      }
    }
    else
    {
      *v6 = 0LL;
    }
    v5 = -2147467262;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA1,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopsoftlandinghandler.cpp",
      (const char *)0x80004002LL);
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xA0,
    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopsoftlandinghandler.cpp",
    (const char *)(unsigned int)v7);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  return v8;
}
