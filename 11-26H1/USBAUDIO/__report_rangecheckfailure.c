/*
 * XREFs of __report_rangecheckfailure @ 0x14000BF70
 * Callers:
 *     IsClassDriverOnly @ 0x14002F3A0 (IsClassDriverOnly.c)
 * Callees:
 *     <none>
 */

void __noreturn _report_rangecheckfailure()
{
  __fastfail(8u);
}
