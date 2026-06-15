/*
 * XREFs of ?AtlCrtErrorCheck@ATL@@YAHH@Z @ 0x18001E294
 * Callers:
 *     ?Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z @ 0x18001D3E0 (-Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z.c)
 *     ?Add@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@QEAA_KAEAV?$CAutoPtr@VCAccessAce@CDacl@ATL@@@2@@Z @ 0x18001DFB0 (-Add@-$CAtlArray@V-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V-$CAutoPtrElementTraits@VCAccessAce@C.c)
 *     ?memmove_s@Checked@ATL@@YAXPEAX_KPEBX1@Z @ 0x18001E104 (-memmove_s@Checked@ATL@@YAXPEAX_KPEBX1@Z.c)
 *     ?GrowBuffer@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@AEAA_N_K@Z @ 0x18001E170 (-GrowBuffer@-$CAtlArray@V-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V-$CAutoPtrElementTraits@VCAcce.c)
 *     ?Init@CSecurityDesc@ATL@@IEAAXAEBU_SECURITY_DESCRIPTOR@@@Z @ 0x18001E4CC (-Init@CSecurityDesc@ATL@@IEAAXAEBU_SECURITY_DESCRIPTOR@@@Z.c)
 *     ?SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z @ 0x18001E600 (-SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z.c)
 *     ?LoadStringW@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@@I@Z @ 0x18003DDF0 (-LoadStringW@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18002E7E8 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::AtlCrtErrorCheck(unsigned int a1)
{
  if ( a1 && a1 != 80 )
  {
    if ( a1 != 12 )
    {
      if ( a1 != 22 && a1 != 34 )
        ATL::AtlThrowImpl(-2147467259);
      ATL::AtlThrowImpl(-2147024809);
    }
    ATL::AtlThrowImpl(-2147024882);
  }
  return a1;
}
