/*
 * XREFs of ?ConfirmCompSurfInfoUpate@CComposition@@QEAAXAEBUtagCOMPOSITION_TARGET_ID@@@Z @ 0x180195468
 * Callers:
 *     ?Present@CLegacyRenderTarget@@IEAAJXZ @ 0x18025303C (-Present@CLegacyRenderTarget@@IEAAJXZ.c)
 *     ?Present@CDDisplayRenderTarget@@IEAAJXZ @ 0x180253F5C (-Present@CDDisplayRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CComposition::ConfirmCompSurfInfoUpate(CComposition *this, const struct tagCOMPOSITION_TARGET_ID *a2)
{
  _QWORD *v3; // rdi
  _QWORD *i; // rbx

  v3 = (_QWORD *)*((_QWORD *)g_pComposition + 744);
  for ( i = (_QWORD *)*((_QWORD *)g_pComposition + 743); i != v3; ++i )
    (*(void (__fastcall **)(_QWORD, const struct tagCOMPOSITION_TARGET_ID *))(*(_QWORD *)*i + 232LL))(*i, a2);
}
