/*
 * XREFs of ?AllocateSharedSection@@YAJKPEAPEAX00@Z @ 0x1401C5EBC
 * Callers:
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x14008C0E0 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 * Callees:
 *     ??1SectionObj@Gre@@QEAA@XZ @ 0x1400E4AC0 (--1SectionObj@Gre@@QEAA@XZ.c)
 *     ?Map@MapViewOfSectionObj@Gre@@QEAA_NPEAXW4MapKind@12@_KPEAT_LARGE_INTEGER@@@Z @ 0x14010AB30 (-Map@MapViewOfSectionObj@Gre@@QEAA_NPEAXW4MapKind@12@_KPEAT_LARGE_INTEGER@@@Z.c)
 *     ??0SectionObj@Gre@@QEAA@PEAXPEAT_LARGE_INTEGER@@_NPEAPEAX@Z @ 0x140116F80 (--0SectionObj@Gre@@QEAA@PEAXPEAT_LARGE_INTEGER@@_NPEAPEAX@Z.c)
 *     ??1MapViewOfSectionObj@Gre@@QEAA@XZ @ 0x14011DE58 (--1MapViewOfSectionObj@Gre@@QEAA@XZ.c)
 */

__int64 __fastcall AllocateSharedSection(unsigned int a1, void **a2, void **a3, void **a4)
{
  __int64 v4; // rsi
  unsigned int v8; // ebx
  void *v9; // rdi
  void *v11; // rcx
  __int64 v12; // [rsp+38h] [rbp-39h] BYREF
  __int64 v13; // [rsp+40h] [rbp-31h] BYREF
  __int64 v14; // [rsp+48h] [rbp-29h] BYREF
  __int64 v15; // [rsp+50h] [rbp-21h]
  __int128 v16; // [rsp+58h] [rbp-19h]
  __int64 v17; // [rsp+68h] [rbp-9h]
  int v18; // [rsp+70h] [rbp-1h]
  __int64 v19; // [rsp+78h] [rbp+7h] BYREF
  __int64 v20; // [rsp+80h] [rbp+Fh]
  __int128 v21; // [rsp+88h] [rbp+17h]
  __int64 v22; // [rsp+98h] [rbp+27h]
  int v23; // [rsp+A0h] [rbp+2Fh]
  union _LARGE_INTEGER v24; // [rsp+A8h] [rbp+37h] BYREF

  v4 = a1;
  v24.QuadPart = a1;
  v8 = 0;
  Gre::SectionObj::SectionObj((Gre::SectionObj *)&v12, 0LL, &v24, 1u, 0LL);
  v9 = (void *)v12;
  if ( !v12 )
    goto LABEL_2;
  v14 = 0LL;
  v15 = 0LL;
  v17 = 0LL;
  v18 = 5;
  v13 = 0LL;
  v16 = 0LL;
  if ( !Gre::MapViewOfSectionObj::Map((__int64)&v14, v12, 1, v4, &v13) )
  {
    Gre::MapViewOfSectionObj::~MapViewOfSectionObj((Gre::MapViewOfSectionObj *)&v14);
LABEL_2:
    Gre::SectionObj::~SectionObj((void **)&v12);
    return 3221225495LL;
  }
  v19 = 0LL;
  v20 = 0LL;
  v22 = 0LL;
  v23 = 5;
  v13 = 0LL;
  v21 = 0LL;
  if ( Gre::MapViewOfSectionObj::Map((__int64)&v19, (__int64)v9, 2, v4, &v13) )
  {
    v11 = (void *)v21;
    *a4 = (void *)v16;
    *a3 = v11;
    v12 = 0LL;
    *a2 = v9;
    v16 = 0uLL;
    v14 = 0LL;
    v15 = 0LL;
    v17 = 0LL;
    v18 = 5;
    v21 = 0uLL;
    v19 = 0LL;
    v20 = 0LL;
    v22 = 0LL;
    v23 = 5;
  }
  else
  {
    v8 = -1073741801;
  }
  Gre::MapViewOfSectionObj::~MapViewOfSectionObj((Gre::MapViewOfSectionObj *)&v19);
  Gre::MapViewOfSectionObj::~MapViewOfSectionObj((Gre::MapViewOfSectionObj *)&v14);
  Gre::SectionObj::~SectionObj((void **)&v12);
  return v8;
}
