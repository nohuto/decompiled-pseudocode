/*
 * XREFs of ?AllocateKernelSection@@YAJKKPEAPEAX@Z @ 0x1401C5DA8
 * Callers:
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x14008C0E0 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 * Callees:
 *     ??1SectionObj@Gre@@QEAA@XZ @ 0x1400E4AC0 (--1SectionObj@Gre@@QEAA@XZ.c)
 *     ?Map@MapViewOfSectionObj@Gre@@QEAA_NPEAXW4MapKind@12@_KPEAT_LARGE_INTEGER@@@Z @ 0x14010AB30 (-Map@MapViewOfSectionObj@Gre@@QEAA_NPEAXW4MapKind@12@_KPEAT_LARGE_INTEGER@@@Z.c)
 *     ??0SectionObj@Gre@@QEAA@PEAXPEAT_LARGE_INTEGER@@_NPEAPEAX@Z @ 0x140116F80 (--0SectionObj@Gre@@QEAA@PEAXPEAT_LARGE_INTEGER@@_NPEAPEAX@Z.c)
 *     ??1MapViewOfSectionObj@Gre@@QEAA@XZ @ 0x14011DE58 (--1MapViewOfSectionObj@Gre@@QEAA@XZ.c)
 */

__int64 __fastcall AllocateKernelSection(unsigned int a1, __int64 a2, void **a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rcx
  union _LARGE_INTEGER v9; // [rsp+30h] [rbp-40h] BYREF
  __int64 v10; // [rsp+38h] [rbp-38h] BYREF
  __int64 v11; // [rsp+40h] [rbp-30h] BYREF
  __int64 v12; // [rsp+48h] [rbp-28h]
  __int128 v13; // [rsp+50h] [rbp-20h]
  __int64 v14; // [rsp+60h] [rbp-10h]
  int v15; // [rsp+68h] [rbp-8h]
  __int64 v16; // [rsp+A8h] [rbp+38h] BYREF

  v3 = 0;
  if ( !a1 )
    return 3221225485LL;
  v6 = a1;
  v9.QuadPart = a1 + 16LL;
  Gre::SectionObj::SectionObj((Gre::SectionObj *)&v16, 0LL, &v9, 1u, 0LL);
  v7 = v16;
  if ( v16 )
  {
    v11 = 0LL;
    v12 = 0LL;
    v14 = 0LL;
    v15 = 5;
    v10 = 0LL;
    v13 = 0LL;
    if ( Gre::MapViewOfSectionObj::Map((__int64)&v11, v16, 3, v6, &v10) )
    {
      v8 = v13;
      v13 = 0uLL;
      v11 = 0LL;
      v12 = 0LL;
      v14 = 0LL;
      v15 = 5;
      *(_DWORD *)(v8 + 8) = 1835166535;
      *(_QWORD *)v8 = v7;
      *a3 = (void *)(v8 + 16);
      v16 = 0LL;
    }
    else
    {
      v3 = -1073741801;
    }
    Gre::MapViewOfSectionObj::~MapViewOfSectionObj((Gre::MapViewOfSectionObj *)&v11);
    Gre::SectionObj::~SectionObj((void **)&v16);
    return v3;
  }
  else
  {
    Gre::SectionObj::~SectionObj((void **)&v16);
    return 3221225495LL;
  }
}
