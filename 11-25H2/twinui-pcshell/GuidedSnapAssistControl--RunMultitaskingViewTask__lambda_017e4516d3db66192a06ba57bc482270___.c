/*
 * XREFs of GuidedSnapAssistControl::RunMultitaskingViewTask__lambda_017e4516d3db66192a06ba57bc482270___ @ 0x180287C18
 * Callers:
 *     ?Show@GuidedSnapAssistControl@@QEAAXV?$shared_ptr@VGuidedSnapAssistData@@@std@@V?$com_ptr_t@UIApplicationViewCollection@@Uerr_exception_policy@wil@@@wil@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x180288600 (-Show@GuidedSnapAssistControl@@QEAAXV-$shared_ptr@VGuidedSnapAssistData@@@std@@V-$com_ptr_t@UIAp.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     MakeMultitaskingViewTaskCallback__lambda_017e4516d3db66192a06ba57bc482270___ @ 0x180287CB0 (MakeMultitaskingViewTaskCallback__lambda_017e4516d3db66192a06ba57bc482270___.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall GuidedSnapAssistControl::RunMultitaskingViewTask__lambda_017e4516d3db66192a06ba57bc482270___(
        __int64 a1)
{
  int MultitaskingViewTaskCallback__lambda_017e4516d3db66192a06ba57bc482270; // eax
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 result; // rax
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+48h] [rbp+20h] BYREF

  v8 = 0LL;
  MultitaskingViewTaskCallback__lambda_017e4516d3db66192a06ba57bc482270 = MakeMultitaskingViewTaskCallback__lambda_017e4516d3db66192a06ba57bc482270_(&v8);
  if ( MultitaskingViewTaskCallback__lambda_017e4516d3db66192a06ba57bc482270 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xE2,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\guidedsnapassistcontrol.cpp",
      (const char *)(unsigned int)MultitaskingViewTaskCallback__lambda_017e4516d3db66192a06ba57bc482270,
      v6);
  v3 = *(_QWORD *)(a1 + 16);
  v4 = v8;
  result = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v3 + 24LL))(v3, v8, 2LL);
  if ( (int)result < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xE3,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\guidedsnapassistcontrol.cpp",
      (const char *)(unsigned int)result,
      v6);
  if ( v4 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return result;
}
