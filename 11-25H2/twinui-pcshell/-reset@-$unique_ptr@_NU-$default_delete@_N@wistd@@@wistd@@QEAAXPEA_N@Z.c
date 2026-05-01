/*
 * XREFs of ?reset@?$unique_ptr@_NU?$default_delete@_N@wistd@@@wistd@@QEAAXPEA_N@Z @ 0x180451318
 * Callers:
 *     ?IsStartMenuSuppressedByShellConfigRegistry@@YA_NXZ @ 0x18044EC60 (-IsStartMenuSuppressedByShellConfigRegistry@@YA_NXZ.c)
 *     ??__Fs_isSuppressedByShellConfig@?1??IsStartMenuSuppressedByShellConfigRegistry@@YA_NXZ@YAXXZ @ 0x1806E0650 (--__Fs_isSuppressedByShellConfig@-1--IsStartMenuSuppressedByShellConfigRegistry@@YA_NXZ@YAXXZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall wistd::unique_ptr<bool,wistd::default_delete<bool>>::reset(void **a1, void *a2)
{
  void *v2; // rax

  v2 = *a1;
  *a1 = a2;
  if ( v2 )
    operator delete(v2, (const struct std::nothrow_t *)1);
}
