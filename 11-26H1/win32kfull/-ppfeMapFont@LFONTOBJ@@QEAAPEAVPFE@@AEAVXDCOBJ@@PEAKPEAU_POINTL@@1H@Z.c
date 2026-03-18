/*
 * XREFs of ?ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z @ 0x1400C6EDC
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1400C4834 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 * Callees:
 *     ?BuildMapperParameters@@YAXAEAUPARAMETERS@MAPPER@@AEAVXDCOBJ@@_N2@Z @ 0x1400C6B4C (-BuildMapperParameters@@YAXAEAUPARAMETERS@MAPPER@@AEAVXDCOBJ@@_N2@Z.c)
 *     ?ppfeMapFont@LFONTCOREOBJ@@QEAAPEAVPFE@@AEAUPARAMETERS@MAPPER@@PEAKPEAU_POINTL@@1@Z @ 0x1400C6FC0 (-ppfeMapFont@LFONTCOREOBJ@@QEAAPEAVPFE@@AEAUPARAMETERS@MAPPER@@PEAKPEAU_POINTL@@1@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

struct PFE *__fastcall LFONTOBJ::ppfeMapFont(
        LFONTOBJ *this,
        struct XDCOBJ *a2,
        unsigned int *a3,
        struct _POINTL *a4,
        unsigned int *a5,
        int a6)
{
  struct PFE *result; // rax
  _BYTE v11[96]; // [rsp+30h] [rbp-98h] BYREF

  memset_0(v11, 0, sizeof(v11));
  BuildMapperParameters(
    (struct MAPPER::PARAMETERS *)v11,
    a2,
    (*(_DWORD *)(*((_QWORD *)this + 1) + 28LL) & 2) != 0,
    a6 != 0);
  result = LFONTCOREOBJ::ppfeMapFont(this, (struct MAPPER::PARAMETERS *)v11, a3, a4, a5);
  if ( result )
  {
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 4LL) = *a5 >> 8;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 152LL) &= ~0x10u;
  }
  return result;
}
