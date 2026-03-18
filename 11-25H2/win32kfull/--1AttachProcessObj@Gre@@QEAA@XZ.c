/*
 * XREFs of ??1AttachProcessObj@Gre@@QEAA@XZ @ 0x14010EA74
 * Callers:
 *     EngMapFontFileFDInternal @ 0x1400B2070 (EngMapFontFileFDInternal.c)
 *     ??1AutoAttachFonDrvProcess@UmfdHostLifeTimeManager@@QEAA@XZ @ 0x14010EA20 (--1AutoAttachFonDrvProcess@UmfdHostLifeTimeManager@@QEAA@XZ.c)
 *     ?GetProcessSessionFonts@@YAJPEAU_EPROCESS@@IIPEAI1PEAPEAXPEAG@Z @ 0x1401FF2A4 (-GetProcessSessionFonts@@YAJPEAU_EPROCESS@@IIPEAI1PEAPEAXPEAG@Z.c)
 *     ?SecureConnectPort@PROXYPORT@@SAJPEAPEAXPEAU_UNICODE_STRING@@PEAU_SECURITY_QUALITY_OF_SERVICE@@PEAU_PORT_VIEW@@0PEAXPEAK@Z @ 0x1403380D4 (-SecureConnectPort@PROXYPORT@@SAJPEAPEAXPEAU_UNICODE_STRING@@PEAU_SECURITY_QUALITY_OF_SERVICE@@P.c)
 * Callees:
 *     ?Detach@AttachProcessObj@Gre@@QEAAXXZ @ 0x14010EA90 (-Detach@AttachProcessObj@Gre@@QEAAXXZ.c)
 */

void __fastcall Gre::AttachProcessObj::~AttachProcessObj(Gre::AttachProcessObj *this)
{
  if ( *((_BYTE *)this + 48) )
    Gre::AttachProcessObj::Detach(this);
}
