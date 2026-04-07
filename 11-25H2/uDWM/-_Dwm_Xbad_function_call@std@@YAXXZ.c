/*
 * XREFs of ?_Dwm_Xbad_function_call@std@@YAXXZ @ 0x1800E9924
 * Callers:
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180006850 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ??R?$_Func_class@X$$V@std@@QEBAXXZ @ 0x1800A1118 (--R-$_Func_class@X$$V@std@@QEBAXXZ.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x180095A74 (ModuleFailFastForHRESULT.c)
 */

void __noreturn std::_Dwm_Xbad_function_call(void)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  ModuleFailFastForHRESULT(0x8000FFFF, retaddr);
}
