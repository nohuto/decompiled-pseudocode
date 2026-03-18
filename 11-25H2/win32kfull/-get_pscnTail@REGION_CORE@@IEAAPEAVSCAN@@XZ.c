/*
 * XREFs of ?get_pscnTail@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x1400F5C6C
 * Callers:
 *     ?bFindFirstScan@XCLIPOBJ@@IEAAHXZ @ 0x1400F4C68 (-bFindFirstScan@XCLIPOBJ@@IEAAHXZ.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1400F596C (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 * Callees:
 *     ??$IsBaseRustExportsEnabled@$00@@YA_NXZ @ 0x14009C598 (--$IsBaseRustExportsEnabled@$00@@YA_NXZ.c)
 *     ?RegionCore_get_pscnTail_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z @ 0x1400F5E1C (-RegionCore_get_pscnTail_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z.c)
 */

struct SCAN *__fastcall REGION_CORE::get_pscnTail(REGION_CORE *this)
{
  struct REGION_CORE *v2; // rdx

  if ( IsBaseRustExportsEnabled<1>() )
    return Win32kRS::RegionCore_get_pscnTail_mut(this, v2);
  else
    return (struct SCAN *)(*(_QWORD *)this + *((_QWORD *)this + 2));
}
