/*
 * XREFs of ?OnMfxEffectsChanged@CAudioStream@@QEAAXXZ @ 0x18006CEE4
 * Callers:
 *     ?ConnectToRightSubmix@CStreamInstanceProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUISubmixProxy@@H@Z @ 0x18006CDF0 (-ConnectToRightSubmix@CStreamInstanceProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUISubmixProxy@@H@Z.c)
 *     std::_Func_impl_no_alloc__lambda_2651c229b598cc9102028192151d000a__void_::_Do_call @ 0x180100610 (std--_Func_impl_no_alloc__lambda_2651c229b598cc9102028192151d000a__void_--_Do_call.c)
 * Callees:
 *     <none>
 */

void __fastcall CAudioStream::OnMfxEffectsChanged(CAudioStream *this, void *a2)
{
  wil::details *v2; // rcx

  v2 = (wil::details *)*((_QWORD *)this + 42);
  if ( v2 )
    wil::details::SetEvent(v2, a2);
}
