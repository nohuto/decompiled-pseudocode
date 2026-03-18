/*
 * XREFs of ?LongLongToLong@@YAJ_JPEAJ@Z @ 0x1400BDD20
 * Callers:
 *     ?bOffset@RGNOBJ@@QEAAHAEBVRustAutoHotpatchLockSH@@PEBU_POINTL@@@Z @ 0x1401C4680 (-bOffset@RGNOBJ@@QEAAHAEBVRustAutoHotpatchLockSH@@PEBU_POINTL@@@Z.c)
 *     ?bOffset@RGNCOREOBJ@@QEAA_NPEBU_POINTL@@@Z @ 0x1401D2450 (-bOffset@RGNCOREOBJ@@QEAA_NPEBU_POINTL@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LongLongToLong(__int64 a1, int *a2)
{
  __int64 result; // rax

  if ( (unsigned __int64)(a1 + 0x80000000LL) > 0xFFFFFFFF )
  {
    result = 2147942934LL;
    LODWORD(a1) = -1;
  }
  else
  {
    result = 0LL;
  }
  *a2 = a1;
  return result;
}
