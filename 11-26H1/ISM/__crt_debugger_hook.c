/*
 * XREFs of __crt_debugger_hook @ 0x18009A4EC
 * Callers:
 *     __scrt_fastfail @ 0x18009A500 (__scrt_fastfail.c)
 * Callees:
 *     <none>
 */

void _crt_debugger_hook()
{
  _scrt_debugger_hook_flag = 0;
}
