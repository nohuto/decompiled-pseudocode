/*
 * XREFs of _dynamic_atexit_destructor_for__shellComponentFilter__ @ 0x180708B30
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$default_delete@VShellComponentFilter@@@std@@QEBAXPEAVShellComponentFilter@@@Z @ 0x1803E4AB0 (--R-$default_delete@VShellComponentFilter@@@std@@QEBAXPEAVShellComponentFilter@@@Z.c)
 */

void __fastcall dynamic_atexit_destructor_for__shellComponentFilter__(__int64 a1)
{
  if ( shellComponentFilter )
    std::default_delete<ShellComponentFilter>::operator()(a1, (HMODULE *)shellComponentFilter);
}
