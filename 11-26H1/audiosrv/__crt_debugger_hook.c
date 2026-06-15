/*
 * XREFs of __crt_debugger_hook @ 0x1800B2E24
 * Callers:
 *     __scrt_fastfail @ 0x1800B2E38 (__scrt_fastfail.c)
 * Callees:
 *     <none>
 */

void _crt_debugger_hook()
{
  _scrt_debugger_hook_flag = 0;
}
