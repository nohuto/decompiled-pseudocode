/*
 * XREFs of ??1SectionObj@Gre@@QEAA@XZ @ 0x1400E4AC0
 * Callers:
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x14008C0E0 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x14008CAD0 (--1SURFMEM@@QEAA@XZ.c)
 *     ?Disconnect@CConnection@DirectComposition@@QEAAXXZ @ 0x1400E47F0 (-Disconnect@CConnection@DirectComposition@@QEAAXXZ.c)
 *     ??1CConnection@DirectComposition@@AEAA@XZ @ 0x1400E4978 (--1CConnection@DirectComposition@@AEAA@XZ.c)
 *     ?AllocateKernelSectionForUserMapping@@YAJKPEAPEAX@Z @ 0x1401772B0 (-AllocateKernelSectionForUserMapping@@YAJKPEAPEAX@Z.c)
 *     ?AllocateKernelSection@@YAJKKPEAPEAX@Z @ 0x1401C5DA8 (-AllocateKernelSection@@YAJKKPEAPEAX@Z.c)
 *     ?AllocateSharedSection@@YAJKPEAPEAX00@Z @ 0x1401C5EBC (-AllocateSharedSection@@YAJKPEAPEAX00@Z.c)
 *     ?vFreeKernelSection@@YAXPEAX@Z @ 0x1401C6124 (-vFreeKernelSection@@YAXPEAX@Z.c)
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
