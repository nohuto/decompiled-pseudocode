/*
 * XREFs of ?get_pscnTail@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x1400A973C
 * Callers:
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1400A9580 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?bFindFirstScan@XCLIPOBJ@@IEAAHXZ @ 0x1400E2FFC (-bFindFirstScan@XCLIPOBJ@@IEAAHXZ.c)
 * Callees:
 *     ??$IsBaseRustExportsEnabled@$00@@YA_NXZ @ 0x1400AB1D8 (--$IsBaseRustExportsEnabled@$00@@YA_NXZ.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

struct SCAN *__fastcall REGION_CORE::get_pscnTail(REGION_CORE *this)
{
  const struct BaseRustGlobals *BaseRustGlobals; // rax

  if ( !(unsigned __int8)IsBaseRustExportsEnabled<1>() )
    return (struct SCAN *)(*(_QWORD *)this + *((_QWORD *)this + 2));
  BaseRustGlobals = GetBaseRustGlobals();
  return (struct SCAN *)(*(__int64 (__fastcall **)(REGION_CORE *))(*(_QWORD *)BaseRustGlobals + 224LL))(this);
}
