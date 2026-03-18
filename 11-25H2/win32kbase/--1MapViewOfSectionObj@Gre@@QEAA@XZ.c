/*
 * XREFs of ??1MapViewOfSectionObj@Gre@@QEAA@XZ @ 0x14011DE58
 * Callers:
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x14008C0E0 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x14008CAD0 (--1SURFMEM@@QEAA@XZ.c)
 *     ?AllocateKernelSection@@YAJKKPEAPEAX@Z @ 0x1401C5DA8 (-AllocateKernelSection@@YAJKKPEAPEAX@Z.c)
 *     ?AllocateSharedSection@@YAJKPEAPEAX00@Z @ 0x1401C5EBC (-AllocateSharedSection@@YAJKPEAPEAX00@Z.c)
 *     ?vFreeKernelSection@@YAXPEAX@Z @ 0x1401C6124 (-vFreeKernelSection@@YAXPEAX@Z.c)
 * Callees:
 *     ?Unmap@MapViewOfSectionObj@Gre@@QEAA_NXZ @ 0x14011DE80 (-Unmap@MapViewOfSectionObj@Gre@@QEAA_NXZ.c)
 */

void __fastcall Gre::MapViewOfSectionObj::~MapViewOfSectionObj(Gre::MapViewOfSectionObj *this)
{
  if ( *((_DWORD *)this + 10) != 5 )
    Gre::MapViewOfSectionObj::Unmap(this);
}
