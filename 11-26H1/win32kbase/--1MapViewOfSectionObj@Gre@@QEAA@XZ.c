/*
 * XREFs of ??1MapViewOfSectionObj@Gre@@QEAA@XZ @ 0x1401645D0
 * Callers:
 *     ?bDeleteSurface@SURFACE@@QEAAHAEAUSESSION_GLOBALS@Base@Gre@@W4_CLEANUPTYPE@@H@Z @ 0x1400126D0 (-bDeleteSurface@SURFACE@@QEAAHAEAUSESSION_GLOBALS@Base@Gre@@W4_CLEANUPTYPE@@H@Z.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x140026090 (--1SURFMEM@@QEAA@XZ.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHH@Z @ 0x140026360 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHH@Z.c)
 *     ?AllocateSharedSection@@YAJKPEAPEAX00@Z @ 0x1401B46EC (-AllocateSharedSection@@YAJKPEAPEAX00@Z.c)
 *     ?AllocateKernelSection@@YAJKKPEAPEAX@Z @ 0x1401BEC68 (-AllocateKernelSection@@YAJKKPEAPEAX@Z.c)
 *     ?vFreeKernelSection@@YAXPEAX@Z @ 0x1401C0010 (-vFreeKernelSection@@YAXPEAX@Z.c)
 *     MultiUserNtGreCleanup @ 0x1401C0C3C (MultiUserNtGreCleanup.c)
 * Callees:
 *     ?Unmap@MapViewOfSectionObj@Gre@@QEAA_NXZ @ 0x140024EA0 (-Unmap@MapViewOfSectionObj@Gre@@QEAA_NXZ.c)
 */

void __fastcall Gre::MapViewOfSectionObj::~MapViewOfSectionObj(Gre::MapViewOfSectionObj *this)
{
  if ( *((_DWORD *)this + 8) != 6 )
    Gre::MapViewOfSectionObj::Unmap(this);
}
