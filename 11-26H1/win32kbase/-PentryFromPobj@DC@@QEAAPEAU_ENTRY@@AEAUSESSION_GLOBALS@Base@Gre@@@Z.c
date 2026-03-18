/*
 * XREFs of ?PentryFromPobj@DC@@QEAAPEAU_ENTRY@@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140017E8C
 * Callers:
 *     GreSelectVisRgn @ 0x140016B80 (GreSelectVisRgn.c)
 *     GreSelectVisRgnShared @ 0x140017500 (GreSelectVisRgnShared.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x140017FB0 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     ?vReleaseRao@DC@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140035F30 (-vReleaseRao@DC@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?vUpdate_VisRect@DC@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVREGION@@@Z @ 0x140037830 (-vUpdate_VisRect@DC@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVREGION@@@Z.c)
 *     ?SetCachedDpiScaleValue@DC@@QEAAXJ@Z @ 0x140039950 (-SetCachedDpiScaleValue@DC@@QEAAXJ@Z.c)
 *     ?bDelete@XDCOBJ@@QEAA_NK@Z @ 0x14003E5B4 (-bDelete@XDCOBJ@@QEAA_NK@Z.c)
 *     GrepDeleteDC @ 0x14003ECB0 (GrepDeleteDC.c)
 *     ?SaveAttributes@DCOBJ@@AEAAHXZ @ 0x140040610 (-SaveAttributes@DCOBJ@@AEAAHXZ.c)
 *     ?vLock@DCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1400407D4 (-vLock@DCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?SetupDCAttributes@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVDC@@PEAU_DC_ATTR@@@Z @ 0x140102DC4 (-SetupDCAttributes@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVDC@@PEAU_DC_ATTR@@@Z.c)
 *     ?GetUserAttr@DCOBJ@@AEAAPEAU_DC_ATTR@@XZ @ 0x14016CA40 (-GetUserAttr@DCOBJ@@AEAAPEAU_DC_ATTR@@XZ.c)
 *     ?vReleaseVis@DC@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140179DF8 (-vReleaseVis@DC@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?FreeDCAttributes@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVDC@@@Z @ 0x140186EB4 (-FreeDCAttributes@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVDC@@@Z.c)
 * Callees:
 *     HmgPentryFromPobj @ 0x140019EC0 (HmgPentryFromPobj.c)
 */

struct _ENTRY *__fastcall DC::PentryFromPobj(DC *this, struct Gre::Base::SESSION_GLOBALS *a2)
{
  struct _ENTRY *result; // rax

  if ( *(_QWORD *)this )
    return (struct _ENTRY *)HmgPentryFromPobj(a2);
  result = (DC *)((char *)this + 2152);
  *(_OWORD *)((char *)this + 2152) = 0LL;
  *((_QWORD *)this + 271) = 0LL;
  *((_DWORD *)this + 540) = -2147483630;
  *((_QWORD *)this + 271) = 0LL;
  return result;
}
