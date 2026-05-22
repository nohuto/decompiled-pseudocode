/*
 * XREFs of ?SendCurrentGestureEvent@ShellGesturesProcessor@@AEAAXAEAUHandlerContext@1@@Z @ 0x18006B6CC
 * Callers:
 *     ?OnInput@ShellGesturesProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180086670 (-OnInput@ShellGesturesProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRe.c)
 *     ?StartOperation@ShellGesturesProcessor@@QEAA_NI_N_K1PEAVDragManagerClientProxy@@@Z @ 0x18015D598 (-StartOperation@ShellGesturesProcessor@@QEAA_NI_N_K1PEAVDragManagerClientProxy@@@Z.c)
 * Callees:
 *     ?ProcessGesture@GestureHandler@@QEAAJAEBUGestureAnimationProperties@@W4VirtualKeyModifiers@System@Windows@@W4GestureOperationState@@@Z @ 0x18006B75C (-ProcessGesture@GestureHandler@@QEAAJAEBUGestureAnimationProperties@@W4VirtualKeyModifiers@Syste.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18006BB00 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Incref_nz@_Ref_count_base@std@@QEAA_NXZ @ 0x18006BD48 (-_Incref_nz@_Ref_count_base@std@@QEAA_NXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ShellGesturesProcessor::SendCurrentGestureEvent(
        ShellGesturesProcessor *this,
        std::_Ref_count_base **a2)
{
  struct ShellGesturesProcessor::HandlerContext *v2; // r9
  std::_Ref_count_base *v3; // rcx
  __int128 v4; // rcx
  int v5; // eax
  int v6; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (struct ShellGesturesProcessor::HandlerContext *)a2;
  v6 = 0;
  v3 = a2[3];
  if ( v3 && std::_Ref_count_base::_Incref_nz(v3) )
  {
    v4 = *((_OWORD *)v2 + 1);
    v6 = v4;
  }
  else
  {
    v4 = 0LL;
  }
  if ( (_QWORD)v4 )
  {
    v5 = GestureHandler::ProcessGesture(
           v4,
           *((_QWORD *)v2 + 1),
           *(unsigned int *)(*((_QWORD *)v2 + 1) + 24LL),
           *((unsigned int *)v2 + 1));
    if ( v5 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x45F,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\shellgestures\\process"
                      "or\\shellgesturesprocessor.cpp",
        (const char *)(unsigned int)v5,
        v6);
  }
  if ( *((_QWORD *)&v4 + 1) )
    std::_Ref_count_base::_Decref(*((std::_Ref_count_base **)&v4 + 1));
}
