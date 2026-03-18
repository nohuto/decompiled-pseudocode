/*
 * XREFs of ?vFreeKernelSection@@YAXPEAX@Z @ 0x1401C0010
 * Callers:
 *     ?bDeleteSurface@SURFACE@@QEAAHAEAUSESSION_GLOBALS@Base@Gre@@W4_CLEANUPTYPE@@H@Z @ 0x1400126D0 (-bDeleteSurface@SURFACE@@QEAAHAEAUSESSION_GLOBALS@Base@Gre@@W4_CLEANUPTYPE@@H@Z.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x140026090 (--1SURFMEM@@QEAA@XZ.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHH@Z @ 0x140026360 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHH@Z.c)
 * Callees:
 *     ?GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z @ 0x1400151C0 (-GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z.c)
 *     ?Unmap@MapViewOfSectionObj@Gre@@QEAA_NXZ @ 0x140024EA0 (-Unmap@MapViewOfSectionObj@Gre@@QEAA_NXZ.c)
 *     ??1SectionObj@Gre@@QEAA@XZ @ 0x14015D9B0 (--1SectionObj@Gre@@QEAA@XZ.c)
 *     ??1MapViewOfSectionObj@Gre@@QEAA@XZ @ 0x1401645D0 (--1MapViewOfSectionObj@Gre@@QEAA@XZ.c)
 */

void __fastcall vFreeKernelSection(_QWORD *a1)
{
  void *v1; // rbx
  _QWORD v2[4]; // [rsp+30h] [rbp-38h] BYREF
  int v3; // [rsp+50h] [rbp-18h]
  void *v4; // [rsp+70h] [rbp+8h] BYREF

  v1 = (void *)*(a1 - 2);
  if ( v1 )
  {
    v2[0] = 0LL;
    v2[1] = 0LL;
    v2[2] = a1 - 2;
    v2[3] = 0LL;
    v3 = 3;
    Gre::MapViewOfSectionObj::Unmap((Gre::MapViewOfSectionObj *)v2);
    v4 = v1;
    Gre::SectionObj::~SectionObj(&v4);
    Gre::MapViewOfSectionObj::~MapViewOfSectionObj((Gre::MapViewOfSectionObj *)v2);
  }
  else
  {
    GrepCaptureLiveMemoryDump(400LL, 68LL, 1LL, (__int64)a1, 0LL, 0);
  }
}
