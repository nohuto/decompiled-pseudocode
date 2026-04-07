/*
 * XREFs of ?RegisterAnimationCompletedHandler@CTopLevelWindow3D@@QEAAXV?$function@$$A6AJXZ@std@@@Z @ 0x180087084
 * Callers:
 *     ?AnimationComplete@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAAXAEBUAnimationCompletedHandler@345@@Z @ 0x1800D8400 (-AnimationComplete@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAAXAEBUAnima.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x1800401D0 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ?_Swap@?$_Func_class@J$$V@std@@IEAAXAEAV12@@Z @ 0x180087134 (-_Swap@-$_Func_class@J$$V@std@@IEAAXAEAV12@@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CTopLevelWindow3D::RegisterAnimationCompletedHandler(__int64 a1, __int64 a2)
{
  __int64 (__fastcall ***v4)(_QWORD, _BYTE *); // rcx
  __int64 v5; // rdx
  _BYTE *v6; // rdx
  _BYTE v8[56]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE *v9; // [rsp+68h] [rbp-20h]

  v9 = 0LL;
  v4 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(a2 + 56);
  if ( v4 )
    v9 = (_BYTE *)(**v4)(v4, v8);
  std::_Func_class<long,>::_Swap(v8, a1 + 360);
  if ( v9 )
  {
    v6 = v8;
    LOBYTE(v6) = v9 != v8;
    (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v9 + 32LL))(v9, v6);
  }
  return std::_Func_class<void,>::_Tidy(a2, v5);
}
