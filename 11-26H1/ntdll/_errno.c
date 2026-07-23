/*
 * XREFs of _errno @ 0x180106E40
 * Callers:
 *     wcstoxq @ 0x180128FC8 (wcstoxq.c)
 *     mbstowcs @ 0x18012AEF0 (mbstowcs.c)
 *     strtoxlX @ 0x18012CD80 (strtoxlX.c)
 *     wcstoxlX @ 0x18012E034 (wcstoxlX.c)
 *     wcstombs @ 0x18012E310 (wcstombs.c)
 *     strtoxq @ 0x18012E510 (strtoxq.c)
 *     write_string @ 0x18012F084 (write_string.c)
 *     write_string_0 @ 0x18012FAF4 (write_string_0.c)
 *     _except1 @ 0x180130900 (_except1.c)
 *     _handle_qnan1 @ 0x180130D40 (_handle_qnan1.c)
 *     _set_errno_from_matherr @ 0x1801310E0 (_set_errno_from_matherr.c)
 *     _umatherr @ 0x180131120 (_umatherr.c)
 *     _wctomb_s_l @ 0x180132378 (_wctomb_s_l.c)
 * Callees:
 *     <none>
 */

int *__cdecl errno()
{
  return (int *)&NtCurrentTeb()->TlsSlots[16];
}
