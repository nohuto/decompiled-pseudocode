/*
 * XREFs of ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x180038718
 * Callers:
 *     ?AnimateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@MKUInterpolationParameters@@M@Z @ 0x180038378 (-AnimateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@MKUInterpolationParameters@@M@Z.c)
 *     ?StartRectAnimation@CAcrylicSheet@@QEAAJPEBUtagRECT@@0MUInterpolationParameters@@M@Z @ 0x18003859C (-StartRectAnimation@CAcrylicSheet@@QEAAJPEBUtagRECT@@0MUInterpolationParameters@@M@Z.c)
 *     ??1CTopLevelWindow3D@@MEAA@XZ @ 0x180065B5C (--1CTopLevelWindow3D@@MEAA@XZ.c)
 *     ??4?$function@$$A6AXXZ@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800886C4 (--4-$function@$$A6AXXZ@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??1?$function@$$A6AJXZ@std@@QEAA@XZ @ 0x18008A7E8 (--1-$function@$$A6AJXZ@std@@QEAA@XZ.c)
 *     ?RegisterAnimationCompletedHandler@CTopLevelWindow3D@@QEAAXV?$function@$$A6AJXZ@std@@@Z @ 0x180095A84 (-RegisterAnimationCompletedHandler@CTopLevelWindow3D@@QEAAXV-$function@$$A6AJXZ@std@@@Z.c)
 *     ?UnregisterAnimationCompletedHandler@CTopLevelWindow3D@@QEAAXXZ @ 0x180095C2C (-UnregisterAnimationCompletedHandler@CTopLevelWindow3D@@QEAAXXZ.c)
 *     std::function_void___cdecl(void)_::operator___lambda_fe545bda8eea4d2e77db634168ef197a__0_ @ 0x1800A1014 (std--function_void___cdecl(void)_--operator___lambda_fe545bda8eea4d2e77db634168ef197a__0_.c)
 *     ??1CAcrylicSheet@@EEAA@XZ @ 0x1800A1088 (--1CAcrylicSheet@@EEAA@XZ.c)
 *     ?StartAlphaAnimation@CAcrylicSheet@@QEAAJMMMV?$function@$$A6AXXZ@std@@@Z @ 0x1800A14D8 (-StartAlphaAnimation@CAcrylicSheet@@QEAAJMMMV-$function@$$A6AXXZ@std@@@Z.c)
 *     ??$?4AEAUUnloadDelegate@Transitions@Udwm@winrt@@$0A@@?$function@$$A6AXXZ@std@@QEAAAEAV01@AEAUUnloadDelegate@Transitions@Udwm@winrt@@@Z @ 0x1800E0064 (--$-4AEAUUnloadDelegate@Transitions@Udwm@winrt@@$0A@@-$function@$$A6AXXZ@std@@QEAAAEAV01@AEAUUnl.c)
 *     ??1UserResizeVisual@implementation@Transitions@Udwm@winrt@@UEAA@XZ @ 0x1800E033C (--1UserResizeVisual@implementation@Transitions@Udwm@winrt@@UEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
