/*
 * XREFs of __crt_debugger_hook @ 0x1802C9408
 * Callers:
 *     __scrt_fastfail @ 0x1802C941C (__scrt_fastfail.c)
 * Callees:
 *     <none>
 */

void _crt_debugger_hook()
{
  _scrt_debugger_hook_flag = 0;
}
