/*
 * XREFs of ?Advance@GuidedSnapAssistControl@@QEAAX_K@Z @ 0x1805988AC
 * Callers:
 *     ?AdvanceGuidedSnapAssist@CSnapAssistControllerBase@@UEAAJ_K@Z @ 0x1800DA680 (-AdvanceGuidedSnapAssist@CSnapAssistControllerBase@@UEAAJ_K@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     MakeMultitaskingViewTaskCallback__lambda_6853a53403c5e70a089bec5311ff3126___ @ 0x1802B609C (MakeMultitaskingViewTaskCallback__lambda_6853a53403c5e70a089bec5311ff3126___.c)
 *     ?AdvanceGuidedSnapAssist@CSnapComponentTelemetry@@SAXXZ @ 0x1802CF1F8 (-AdvanceGuidedSnapAssist@CSnapComponentTelemetry@@SAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall GuidedSnapAssistControl::Advance(GuidedSnapAssistControl *this, __int64 a2)
{
  int MultitaskingViewTaskCallback__lambda_6853a53403c5e70a089bec5311ff3126; // eax
  int v5; // eax
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  CSnapComponentTelemetry::AdvanceGuidedSnapAssist();
  v9 = a2;
  v8 = 0LL;
  MultitaskingViewTaskCallback__lambda_6853a53403c5e70a089bec5311ff3126 = MakeMultitaskingViewTaskCallback__lambda_6853a53403c5e70a089bec5311ff3126_(
                                                                            &v8,
                                                                            &v9);
  if ( MultitaskingViewTaskCallback__lambda_6853a53403c5e70a089bec5311ff3126 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xE2,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\guidedsnapassistcontrol.cpp",
      (const char *)(unsigned int)MultitaskingViewTaskCallback__lambda_6853a53403c5e70a089bec5311ff3126,
      v6);
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 2) + 24LL))(
         *((_QWORD *)this + 2),
         v8,
         0LL);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xE3,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\guidedsnapassistcontrol.cpp",
      (const char *)(unsigned int)v5,
      v6);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v8);
}
