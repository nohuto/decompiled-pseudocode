/*
 * XREFs of _set_errno_from_matherr @ 0x1801310E0
 * Callers:
 *     _call_matherr @ 0x18012FFF0 (_call_matherr.c)
 *     _handle_error @ 0x180130140 (_handle_error.c)
 * Callees:
 *     _errno @ 0x180106E40 (_errno.c)
 */

void __fastcall set_errno_from_matherr(int a1)
{
  int v1; // ecx

  v1 = a1 - 1;
  if ( v1 )
  {
    if ( (unsigned int)(v1 - 1) <= 1 )
      *errno() = 34;
  }
  else
  {
    *errno() = 33;
  }
}
