/*
 * XREFs of ?vFreeKernelSection@@YAXPEAX@Z @ 0x1401C6124
 * Callers:
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x14008C0E0 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x14008CAD0 (--1SURFMEM@@QEAA@XZ.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x14008D360 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 * Callees:
 *     ??1SectionObj@Gre@@QEAA@XZ @ 0x1400E4AC0 (--1SectionObj@Gre@@QEAA@XZ.c)
 *     ?GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z @ 0x1400F36E0 (-GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z.c)
 *     ??1MapViewOfSectionObj@Gre@@QEAA@XZ @ 0x14011DE58 (--1MapViewOfSectionObj@Gre@@QEAA@XZ.c)
 *     ?Unmap@MapViewOfSectionObj@Gre@@QEAA_NXZ @ 0x14011DE80 (-Unmap@MapViewOfSectionObj@Gre@@QEAA_NXZ.c)
 */

void __fastcall vFreeKernelSection(_QWORD *a1)
{
  void *v1; // rbx
  _QWORD v2[5]; // [rsp+30h] [rbp-38h] BYREF
  int v3; // [rsp+58h] [rbp-10h]
  void *v4; // [rsp+70h] [rbp+8h] BYREF

  v1 = (void *)*(a1 - 2);
  if ( v1 )
  {
    v2[0] = 0LL;
    v2[1] = 0LL;
    v2[2] = a1 - 2;
    v2[3] = 0LL;
    v2[4] = 0LL;
    v3 = 3;
    Gre::MapViewOfSectionObj::Unmap((Gre::MapViewOfSectionObj *)v2, 0LL);
    v4 = v1;
    Gre::SectionObj::~SectionObj(&v4);
    Gre::MapViewOfSectionObj::~MapViewOfSectionObj((Gre::MapViewOfSectionObj *)v2);
  }
  else
  {
    GrepCaptureLiveMemoryDump(0x190u, 68LL, 1LL, (__int64)a1, 0LL, 0);
  }
}
