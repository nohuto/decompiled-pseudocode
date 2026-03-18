/*
 * XREFs of ?UpdateMMCSSTask@CKst@@EEAAJXZ @ 0x1801BFE40
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Revert@CMmcssTask@@QEAAXXZ @ 0x1801C0204 (-Revert@CMmcssTask@@QEAAXXZ.c)
 *     ?Apply@CMmcssTask@@QEAAJ_N@Z @ 0x1801C0264 (-Apply@CMmcssTask@@QEAAJ_N@Z.c)
 *     ?UpdateMMCSSTask@DWM@KST@InputTraceLogging@@SAX_N@Z @ 0x18021DE58 (-UpdateMMCSSTask@DWM@KST@InputTraceLogging@@SAX_N@Z.c)
 */

__int64 __fastcall CKst::UpdateMMCSSTask(CKst *this)
{
  char v2; // bl
  CMmcssTask *v3; // rcx
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(_BYTE *)(*((_QWORD *)this + 6) + 808LL);
  InputTraceLogging::KST::DWM::UpdateMMCSSTask(v2);
  v3 = (CMmcssTask *)*((_QWORD *)this + 7);
  if ( !v2 )
  {
    CMmcssTask::Revert(v3);
    return 0LL;
  }
  v5 = CMmcssTask::Apply((LPCRITICAL_SECTION)v3, 1);
  v6 = v5;
  if ( v5 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x46,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\input\\kst.cpp",
    (const char *)(unsigned int)v5);
  return v6;
}
