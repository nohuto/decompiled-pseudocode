/*
 * XREFs of ??R?$_Func_class@X$$V@std@@QEBAXXZ @ 0x1800A1118
 * Callers:
 *     ?OnGlobalTimeUpdated@CAcrylicSheet@@MEAAJXZ @ 0x180035EE0 (-OnGlobalTimeUpdated@CAcrylicSheet@@MEAAJXZ.c)
 *     ?StartAlphaAnimation@CAcrylicSheet@@QEAAJMMMV?$function@$$A6AXXZ@std@@@Z @ 0x1800A14D8 (-StartAlphaAnimation@CAcrylicSheet@@QEAAJMMMV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?Unload@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800E0AB0 (-Unload@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ.c)
 * Callees:
 *     ?_Dwm_Xbad_function_call@std@@YAXXZ @ 0x1800E9924 (-_Dwm_Xbad_function_call@std@@YAXXZ.c)
 */

__int64 __fastcall std::_Func_class<void,>::operator()(__int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 56);
  if ( !v1 )
    std::_Dwm_Xbad_function_call();
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
}
