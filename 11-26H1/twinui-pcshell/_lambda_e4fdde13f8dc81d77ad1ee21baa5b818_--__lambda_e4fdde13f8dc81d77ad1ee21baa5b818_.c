/*
 * XREFs of _lambda_e4fdde13f8dc81d77ad1ee21baa5b818_::__lambda_e4fdde13f8dc81d77ad1ee21baa5b818_ @ 0x1804F74B8
 * Callers:
 *     ?LogViewDiagnosticInfo@GamingPosturePositioner@@CAXPEAUIApplicationView@@AEBV?$function@$$A6AXPEAUHWND__@@PEBG1KUtagRECT@@@Z@std@@@Z @ 0x1804FF398 (-LogViewDiagnosticInfo@GamingPosturePositioner@@CAXPEAUIApplicationView@@AEBV-$func_ea_1804FF398.c)
 *     ?LogViewDiagnosticInfo@GamingPosturePositioner@@CAXPEAUIApplicationView@@AEBV?$function@$$A6AXPEAUHWND__@@PEBG1KUtagRECT@@KK@Z@std@@@Z @ 0x1804FF428 (-LogViewDiagnosticInfo@GamingPosturePositioner@@CAXPEAUIApplicationView@@AEBV-$func_ea_1804FF428.c)
 *     std::_Func_impl_no_alloc__lambda_e4fdde13f8dc81d77ad1ee21baa5b818__void_HWND_____unsigned_short_const___unsigned_short_const___unsigned_long_tagRECT_::_Delete_this @ 0x180503DD0 (std--_Func_impl_no_alloc__lambda_e4fdde13f8dc81d77ad1ee21baa5b818__void_HWND_____un_ea_180503DD0.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_e4fdde13f8dc81d77ad1ee21baa5b818_::__lambda_e4fdde13f8dc81d77ad1ee21baa5b818_(
        __int64 a1,
        __int64 a2)
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
