/*
 * XREFs of ??1SectionObj@Gre@@QEAA@XZ @ 0x14015D9B0
 * Callers:
 *     ?bDeleteSurface@SURFACE@@QEAAHAEAUSESSION_GLOBALS@Base@Gre@@W4_CLEANUPTYPE@@H@Z @ 0x1400126D0 (-bDeleteSurface@SURFACE@@QEAAHAEAUSESSION_GLOBALS@Base@Gre@@W4_CLEANUPTYPE@@H@Z.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x140026090 (--1SURFMEM@@QEAA@XZ.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHH@Z @ 0x140026360 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHH@Z.c)
 *     ?AllocateKernelSectionForUserMapping@@YAJKPEAPEAX@Z @ 0x14015D860 (-AllocateKernelSectionForUserMapping@@YAJKPEAPEAX@Z.c)
 *     ?Disconnect@CConnection@DirectComposition@@QEAAXXZ @ 0x140163454 (-Disconnect@CConnection@DirectComposition@@QEAAXXZ.c)
 *     ?AllocateSharedSection@@YAJKPEAPEAX00@Z @ 0x1401B46EC (-AllocateSharedSection@@YAJKPEAPEAX00@Z.c)
 *     ??1CConnection@DirectComposition@@AEAA@XZ @ 0x1401B55DC (--1CConnection@DirectComposition@@AEAA@XZ.c)
 *     ?AllocateKernelSection@@YAJKKPEAPEAX@Z @ 0x1401BEC68 (-AllocateKernelSection@@YAJKKPEAPEAX@Z.c)
 *     ?vFreeKernelSection@@YAXPEAX@Z @ 0x1401C0010 (-vFreeKernelSection@@YAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Gre::SectionObj::~SectionObj(void **this)
{
  void *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    ObfDereferenceObject(v2);
    *this = 0LL;
  }
}
