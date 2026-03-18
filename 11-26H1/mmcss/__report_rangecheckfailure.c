/*
 * XREFs of __report_rangecheckfailure @ 0x140004400
 * Callers:
 *     CiConfigQueryValue @ 0x140010E80 (CiConfigQueryValue.c)
 * Callees:
 *     <none>
 */

void __noreturn _report_rangecheckfailure()
{
  __fastfail(8u);
}
