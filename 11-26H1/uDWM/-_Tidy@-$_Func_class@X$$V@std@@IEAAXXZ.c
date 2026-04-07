/*
 * XREFs of ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x1800401D0
 * Callers:
 *     ?_Reset_move@?$_Func_class@J$$V@std@@IEAAX$$QEAV12@@Z @ 0x18003FFAC (-_Reset_move@-$_Func_class@J$$V@std@@IEAAX$$QEAV12@@Z.c)
 *     ?UnregisterAnimationCompletedHandler@CTopLevelWindow3D@@QEAAXXZ @ 0x1800401B0 (-UnregisterAnimationCompletedHandler@CTopLevelWindow3D@@QEAAXXZ.c)
 *     ??1?$function@$$A6AJXZ@std@@QEAA@XZ @ 0x1800401C4 (--1-$function@$$A6AJXZ@std@@QEAA@XZ.c)
 *     ?AnimateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@MKUInterpolationParameters@@M@Z @ 0x180042604 (-AnimateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@MKUInterpolationParameters@@M@Z.c)
 *     ?StartRectAnimation@CAcrylicSheet@@QEAAJPEBUtagRECT@@0MUInterpolationParameters@@M@Z @ 0x18004282C (-StartRectAnimation@CAcrylicSheet@@QEAAJPEBUtagRECT@@0MUInterpolationParameters@@M@Z.c)
 *     ?_Reset_move@?$_Func_class@X$$V@std@@IEAAX$$QEAV12@@Z @ 0x180079648 (-_Reset_move@-$_Func_class@X$$V@std@@IEAAX$$QEAV12@@Z.c)
 *     ??1CTopLevelWindow3D@@MEAA@XZ @ 0x1800821A8 (--1CTopLevelWindow3D@@MEAA@XZ.c)
 *     ?RegisterAnimationCompletedHandler@CTopLevelWindow3D@@QEAAXV?$function@$$A6AJXZ@std@@@Z @ 0x180087084 (-RegisterAnimationCompletedHandler@CTopLevelWindow3D@@QEAAXV-$function@$$A6AJXZ@std@@@Z.c)
 *     std::function_void___cdecl(void)_::operator___CAcrylicSheet::AnimateRect_::_21_::_lambda_1__0_ @ 0x180095644 (std--function_void___cdecl(void)_--operator___CAcrylicSheet--AnimateRect_--_21_--_lambda_1__0_.c)
 *     ??1CAcrylicSheet@@EEAA@XZ @ 0x1800956B8 (--1CAcrylicSheet@@EEAA@XZ.c)
 *     ??4?$function@$$A6AXXZ@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18009573C (--4-$function@$$A6AXXZ@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?StartAlphaAnimation@CAcrylicSheet@@QEAAJMMMV?$function@$$A6AXXZ@std@@@Z @ 0x180095B90 (-StartAlphaAnimation@CAcrylicSheet@@QEAAJMMMV-$function@$$A6AXXZ@std@@@Z.c)
 *     ??$?4AEAUUnloadDelegate@Transitions@Udwm@winrt@@$0A@@?$function@$$A6AXXZ@std@@QEAAAEAV01@AEAUUnloadDelegate@Transitions@Udwm@winrt@@@Z @ 0x1800DCFF0 (--$-4AEAUUnloadDelegate@Transitions@Udwm@winrt@@$0A@@-$function@$$A6AXXZ@std@@QEAAAEAV01@AEAUUnl.c)
 *     ??1UserResizeVisual@implementation@Transitions@Udwm@winrt@@UEAA@XZ @ 0x1800DD2D0 (--1UserResizeVisual@implementation@Transitions@Udwm@winrt@@UEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall std::_Func_class<void,>::_Tidy(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 56);
  if ( v3 )
  {
    LOBYTE(a2) = v3 != a1;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 32LL))(v3, a2);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  return result;
}
