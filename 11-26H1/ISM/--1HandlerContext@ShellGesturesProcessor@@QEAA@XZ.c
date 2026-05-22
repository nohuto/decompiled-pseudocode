/*
 * XREFs of ??1HandlerContext@ShellGesturesProcessor@@QEAA@XZ @ 0x18015C624
 * Callers:
 *     ??1?$_Optional_destruct_base@UHandlerContext@ShellGesturesProcessor@@$0A@@std@@QEAA@XZ @ 0x180098608 (--1-$_Optional_destruct_base@UHandlerContext@ShellGesturesProcessor@@$0A@@std@@QEAA@XZ.c)
 *     ?reset@?$_Optional_destruct_base@UHandlerContext@ShellGesturesProcessor@@$0A@@std@@QEAAXXZ @ 0x18015DD8C (-reset@-$_Optional_destruct_base@UHandlerContext@ShellGesturesProcessor@@$0A@@std@@QEAAXXZ.c)
 * Callees:
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x18006BE0C (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall ShellGesturesProcessor::HandlerContext::~HandlerContext(ShellGesturesProcessor::HandlerContext *this)
{
  std::_Ref_count_base *v2; // rcx

  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 3);
  if ( v2 )
    std::_Ref_count_base::_Decwref(v2);
  std::unique_ptr<GestureTracker>::~unique_ptr<GestureTracker>((void **)this + 1);
}
