/*
 * XREFs of ?_CheckDesktopRemovalPreconditions@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@0@Z @ 0x1805584F0
 * Callers:
 *     ?RemoveDesktopForRecoveryInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x1805544E0 (-RemoveDesktopForRecoveryInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@0@Z.c)
 *     ?RemoveDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x1805545A0 (-RemoveDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@0@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180063200 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Switch_Engineering_Improvements_VDBugFixes@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802A0100 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Switch_Engineering_Improvements_VDBug.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVirtualDesktopManager::_CheckDesktopRemovalPreconditions(
        CVirtualDesktopManager *this,
        struct IUnknown *a2,
        struct IUnknown *a3)
{
  __int64 v6; // rdx
  unsigned int v7; // ebx
  __int64 v8; // r8
  struct IUnknownVtbl *lpVtbl; // rax
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v15; // [rsp+30h] [rbp+8h] BYREF
  __int64 v16; // [rsp+48h] [rbp+20h] BYREF

  if ( !*((_DWORD *)this + 51) )
  {
    if ( SHIsSameObject(a2, a3) )
    {
      v7 = -2147024809;
      v6 = 1023LL;
      goto LABEL_4;
    }
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, struct IUnknown *))(**((_QWORD **)this + 13) + 32LL))(
            *((_QWORD *)this + 13),
            a2) )
    {
      v7 = -2147024809;
      v6 = 1024LL;
      goto LABEL_4;
    }
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, struct IUnknown *))(**((_QWORD **)this + 13) + 32LL))(
            *((_QWORD *)this + 13),
            a3) )
    {
      v7 = -2147024809;
      v6 = 1025LL;
      goto LABEL_4;
    }
    if ( (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 13) + 24LL))(*((_QWORD *)this + 13)) == 1 )
    {
      v6 = 1026LL;
      goto LABEL_3;
    }
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Switch_Engineering_Improvements_VDBugFixes>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_W365Switch_Engineering_Improvements_VDBugFixes>::GetImpl'::`2'::impl,
      1u,
      v8);
    v15 = 0;
    lpVtbl = a3->lpVtbl;
    v16 = 0LL;
    v10 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))lpVtbl->QueryInterface)(
            a3,
            &GUID_a871910e_6cc0_4e65_8b9b_458ce9115e30,
            &v16);
    v7 = v10;
    if ( v10 >= 0 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v16 + 56LL))(v16, &v15);
      v7 = v10;
      if ( v10 >= 0 )
      {
        if ( !v15 )
        {
          v7 = 0;
          goto LABEL_22;
        }
        v7 = -2147024809;
        v12 = 2147942487LL;
        v11 = 1034LL;
LABEL_18:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v11,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
          (const char *)v12);
LABEL_22:
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v16);
        return v7;
      }
      v11 = 1033LL;
    }
    else
    {
      v11 = 1032LL;
    }
    v12 = (unsigned int)v10;
    goto LABEL_18;
  }
  v6 = 1022LL;
LABEL_3:
  v7 = -2147019873;
LABEL_4:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
    (const char *)v7);
  return v7;
}
