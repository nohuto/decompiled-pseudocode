/*
 * XREFs of ?_Dwm_Xbad_function_call@std@@YAXXZ @ 0x1800E550C
 * Callers:
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180013644 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ??R?$_Func_class@X$$V@std@@QEBAXXZ @ 0x180095778 (--R-$_Func_class@X$$V@std@@QEBAXXZ.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x180085D88 (ModuleFailFastForHRESULT.c)
 */

void __noreturn std::_Dwm_Xbad_function_call(void)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  ModuleFailFastForHRESULT(0x8000FFFF, retaddr);
}
