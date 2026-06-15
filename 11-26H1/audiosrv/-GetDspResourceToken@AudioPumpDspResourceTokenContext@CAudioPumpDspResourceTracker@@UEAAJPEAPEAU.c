/*
 * XREFs of ?GetDspResourceToken@AudioPumpDspResourceTokenContext@CAudioPumpDspResourceTracker@@UEAAJPEAPEAUIUnknown@@@Z @ 0x1800C1FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$copy_to@UISubmixProxy@@@?$com_ptr_t@UISubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUISubmixProxy@@@Z @ 0x1800814A8 (--$copy_to@UISubmixProxy@@@-$com_ptr_t@UISubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEA.c)
 */

__int64 __fastcall CAudioPumpDspResourceTracker::AudioPumpDspResourceTokenContext::GetDspResourceToken(
        CAudioPumpDspResourceTracker::AudioPumpDspResourceTokenContext *this,
        struct IUnknown **a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = wil::com_ptr_t<ISubmixProxy,wil::err_returncode_policy>::copy_to<ISubmixProxy>((__int64 *)this + 4, a2);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x56,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiopumpdspmanager.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
