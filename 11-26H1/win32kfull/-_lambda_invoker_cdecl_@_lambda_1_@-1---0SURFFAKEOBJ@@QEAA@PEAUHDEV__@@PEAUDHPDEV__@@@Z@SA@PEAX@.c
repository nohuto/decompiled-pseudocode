/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_1_@?1???0SURFFAKEOBJ@@QEAA@PEAUHDEV__@@PEAUDHPDEV__@@@Z@SA@PEAX@Z @ 0x140310330
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall `SURFFAKEOBJ::SURFFAKEOBJ'::`2'::_lambda_1_::_lambda_invoker_cdecl_(Gre::Base *a1)
{
  struct Gre::Base::SESSION_GLOBALS *v2; // rax

  v2 = Gre::Base::Globals(a1);
  return DEC_SHARE_REF_CNT(v2, a1);
}
