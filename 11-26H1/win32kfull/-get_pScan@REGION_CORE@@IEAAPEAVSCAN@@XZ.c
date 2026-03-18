/*
 * XREFs of ?get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x1400E3898
 * Callers:
 *     ?bSubtract@RGNOBJAPI@@QEAAHPEAU_RECTL@@0H@Z @ 0x1400AA854 (-bSubtract@RGNOBJAPI@@QEAAHPEAU_RECTL@@0H@Z.c)
 *     ?bSubtractComplex@RGNOBJ@@QEAAHPEAU_RECTL@@0H@Z @ 0x1400ABFD0 (-bSubtractComplex@RGNOBJ@@QEAAHPEAU_RECTL@@0H@Z.c)
 *     ?bFindFirstScan@XCLIPOBJ@@IEAAHXZ @ 0x1400E2FFC (-bFindFirstScan@XCLIPOBJ@@IEAAHXZ.c)
 *     ?vStrWrite01@stretch@@YAXPEAU_STRRUN@1@PEAU_XRUNLEN@1@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1400E3100 (-vStrWrite01@stretch@@YAXPEAU_STRRUN@1@PEAU_XRUNLEN@1@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     EngAlphaBlend @ 0x1400E4850 (EngAlphaBlend.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

struct SCAN *__fastcall REGION_CORE::get_pScan(REGION_CORE *this)
{
  const struct BaseRustGlobals *BaseRustGlobals; // rax

  if ( !GetBaseRustGlobals() )
    return *(struct SCAN **)this;
  BaseRustGlobals = GetBaseRustGlobals();
  return (struct SCAN *)(*(__int64 (__fastcall **)(REGION_CORE *))(*(_QWORD *)BaseRustGlobals + 208LL))(this);
}
