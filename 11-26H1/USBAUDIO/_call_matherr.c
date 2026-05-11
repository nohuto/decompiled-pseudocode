/*
 * XREFs of _call_matherr @ 0x14001B990
 * Callers:
 *     _handle_error @ 0x14001BAE0 (_handle_error.c)
 *     _handle_errorf @ 0x14001BC60 (_handle_errorf.c)
 * Callees:
 *     _set_errno_from_matherr @ 0x14001A8E0 (_set_errno_from_matherr.c)
 *     _ctrlfp @ 0x14001C500 (_ctrlfp.c)
 *     _matherr @ 0x14001C5E0 (_matherr.c)
 */

double __fastcall call_matherr(int a1, __int64 a2, char *a3, double a4, double a5, double a6, __int64 a7)
{
  _exception Except; // [rsp+20h] [rbp-38h] BYREF

  Except.type = a1;
  Except.arg2 = a5;
  Except.retval = a6;
  *(&Except.type + 1) = 0;
  Except.arg1 = a4;
  Except.name = a3;
  ctrlfp(a7, 65472LL);
  if ( !matherr(&Except) )
    set_errno_from_matherr();
  return Except.retval;
}
