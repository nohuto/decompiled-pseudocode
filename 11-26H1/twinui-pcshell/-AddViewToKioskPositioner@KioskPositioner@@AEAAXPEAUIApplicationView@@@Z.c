/*
 * XREFs of ?AddViewToKioskPositioner@KioskPositioner@@AEAAXPEAUIApplicationView@@@Z @ 0x1804EFEF4
 * Callers:
 *     ?OnApplicationViewChanged@KioskPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1804F1440 (-OnApplicationViewChanged@KioskPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall KioskPositioner::AddViewToKioskPositioner(KioskPositioner *this, struct IApplicationView *a2)
{
  __int64 v3; // rax
  int v4; // eax
  int v5; // eax
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  KioskPositioner *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = this;
  v3 = *(_QWORD *)a2;
  v8 = 0LL;
  v4 = (*(__int64 (__fastcall **)(struct IApplicationView *, KioskPositioner **))(v3 + 264))(a2, &v8);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x495,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
      (const char *)(unsigned int)v4,
      v6);
  (*(void (__fastcall **)(KioskPositioner *, __int64))(*(_QWORD *)v8 + 40LL))(v8, 8LL);
  v5 = (*(__int64 (__fastcall **)(struct IApplicationView *, KioskPositioner *))(*(_QWORD *)a2 + 272LL))(a2, v8);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x497,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
      (const char *)(unsigned int)v5,
      v6);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v8);
}
