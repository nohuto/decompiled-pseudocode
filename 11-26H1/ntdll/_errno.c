/*
 * XREFs of _errno @ 0x180107440
 * Callers:
 *     wcstoxq @ 0x180129258 (wcstoxq.c)
 *     mbstowcs @ 0x18012B180 (mbstowcs.c)
 *     strtoxlX @ 0x18012D014 (strtoxlX.c)
 *     wcstoxlX @ 0x18012E2C8 (wcstoxlX.c)
 *     wcstombs @ 0x18012E5A0 (wcstombs.c)
 *     strtoxq @ 0x18012E7A0 (strtoxq.c)
 *     write_string @ 0x18012F314 (write_string.c)
 *     write_string_0 @ 0x18012FD84 (write_string_0.c)
 *     _except1 @ 0x180130B90 (_except1.c)
 *     _handle_qnan1 @ 0x180130FD0 (_handle_qnan1.c)
 *     _set_errno_from_matherr @ 0x180131370 (_set_errno_from_matherr.c)
 *     _umatherr @ 0x1801313B0 (_umatherr.c)
 *     _wctomb_s_l @ 0x180132608 (_wctomb_s_l.c)
 * Callees:
 *     <none>
 */

int *__cdecl errno()
{
  return (int *)&NtCurrentTeb()->TlsSlots[16];
}
