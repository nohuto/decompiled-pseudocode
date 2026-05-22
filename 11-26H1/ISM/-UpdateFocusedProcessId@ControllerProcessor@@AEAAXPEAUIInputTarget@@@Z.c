/*
 * XREFs of ?UpdateFocusedProcessId@ControllerProcessor@@AEAAXPEAUIInputTarget@@@Z @ 0x1801809D8
 * Callers:
 *     ?OnTargetWithFocusChanged@ControllerProcessor@@UEAAJPEAUIInputTarget@@0@Z @ 0x1800874E0 (-OnTargetWithFocusChanged@ControllerProcessor@@UEAAJPEAUIInputTarget@@0@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800244C4 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F7EC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad@@@details@wil@@QEAA_NXZ @ 0x1801373B0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad@@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall ControllerProcessor::UpdateFocusedProcessId(
        ControllerProcessor *this,
        __int64 (__fastcall ***a2)(struct IInputTarget *, GUID *, __int64 *))
{
  int v3; // ebx
  __int64 (__fastcall **v4)(struct IInputTarget *, GUID *, __int64 *); // rax
  int v5; // eax
  wil::details::in1diag3 *v6; // rcx
  __int64 v7; // rdx
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v10; // [rsp+30h] [rbp+8h] BYREF
  __int64 v11; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  v10 = 0;
  if ( a2 )
  {
    v4 = *a2;
    v11 = 0LL;
    v5 = (*v4)((struct IInputTarget *)a2, &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59, &v11);
    v6 = retaddr;
    if ( v5 >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v11 + 32LL))(v11, &v10);
      if ( v8 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xD38,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
          (const char *)(unsigned int)v8);
      if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad>::GetImpl'::`2'::impl) )
        goto LABEL_10;
      v5 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v11 + 80LL))(v11, (char *)this + 7816);
      v6 = retaddr;
      if ( v5 >= 0 )
        goto LABEL_10;
      v7 = 3388LL;
    }
    else
    {
      v7 = 3382LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v6,
      (void *)v7,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)v5);
LABEL_10:
    wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(&v11);
    v3 = v10;
  }
  *((_DWORD *)this + 1953) = v3;
}
