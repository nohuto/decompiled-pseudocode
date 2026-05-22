/*
 * XREFs of ?reset@?$_Optional_destruct_base@UHandlerContext@ShellGesturesProcessor@@$0A@@std@@QEAAXXZ @ 0x18015DD8C
 * Callers:
 *     ?OnInput@ShellGesturesProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180086670 (-OnInput@ShellGesturesProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRe.c)
 *     ?StartOperation@ShellGesturesProcessor@@QEAA_NI_N_K1PEAVDragManagerClientProxy@@@Z @ 0x18015D598 (-StartOperation@ShellGesturesProcessor@@QEAA_NI_N_K1PEAVDragManagerClientProxy@@@Z.c)
 * Callees:
 *     ??1HandlerContext@ShellGesturesProcessor@@QEAA@XZ @ 0x18015C624 (--1HandlerContext@ShellGesturesProcessor@@QEAA@XZ.c)
 */

void __fastcall std::_Optional_destruct_base<ShellGesturesProcessor::HandlerContext,0>::reset(
        ShellGesturesProcessor::HandlerContext *a1)
{
  if ( *((_BYTE *)a1 + 32) )
  {
    ShellGesturesProcessor::HandlerContext::~HandlerContext(a1);
    *((_BYTE *)a1 + 32) = 0;
  }
}
