/*
 * XREFs of ??1AttachProcessObj@Gre@@QEAA@XZ @ 0x1401403F0
 * Callers:
 *     ??1AutoAttachFonDrvProcess@UmfdHostLifeTimeManager@@QEAA@XZ @ 0x140140398 (--1AutoAttachFonDrvProcess@UmfdHostLifeTimeManager@@QEAA@XZ.c)
 *     ?BackPropagateLargeBitmapBits@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAXH@Z @ 0x14034A094 (-BackPropagateLargeBitmapBits@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAXH@Z.c)
 * Callees:
 *     ?Detach@AttachProcessObj@Gre@@QEAAXXZ @ 0x14014040C (-Detach@AttachProcessObj@Gre@@QEAAXXZ.c)
 */

void __fastcall Gre::AttachProcessObj::~AttachProcessObj(Gre::AttachProcessObj *this)
{
  if ( *((_BYTE *)this + 48) )
    Gre::AttachProcessObj::Detach(this);
}
