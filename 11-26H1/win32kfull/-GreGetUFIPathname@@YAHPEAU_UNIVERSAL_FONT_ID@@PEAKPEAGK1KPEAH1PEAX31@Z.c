/*
 * XREFs of ?GreGetUFIPathname@@YAHPEAU_UNIVERSAL_FONT_ID@@PEAKPEAGK1KPEAH1PEAX31@Z @ 0x140310798
 * Callers:
 *     NtGdiGetUFIPathname @ 0x14032AFB0 (NtGdiGetUFIPathname.c)
 * Callees:
 *     ?UmfdIsUmfdTrueTypePff@@YA_NPEBVPFF@@@Z @ 0x140101D70 (-UmfdIsUmfdTrueTypePff@@YA_NPEBVPFF@@@Z.c)
 *     ?ppfeGetPFEFromUFI@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@HH@Z @ 0x140205BE0 (-ppfeGetPFEFromUFI@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@HH@Z.c)
 *     ??1MapViewOfSectionObj@Gre@@QEAA@XZ @ 0x14020AFBC (--1MapViewOfSectionObj@Gre@@QEAA@XZ.c)
 *     ?Map@MapViewOfSectionObj@Gre@@QEAA_NPEAXW4MapKind@12@_K@Z @ 0x14021164C (-Map@MapViewOfSectionObj@Gre@@QEAA_NPEAXW4MapKind@12@_K@Z.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

__int64 __fastcall GreGetUFIPathname(
        struct _UNIVERSAL_FONT_ID *a1,
        unsigned int *a2,
        unsigned __int16 *a3,
        unsigned int a4,
        unsigned int *a5,
        char a6,
        int *a7,
        unsigned int *a8,
        void *a9,
        int *a10,
        unsigned int *a11)
{
  unsigned int v13; // esi
  struct PFE *PFEFromUFI; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  struct PFE *v17; // r12
  __int64 v18; // r15
  __int64 v19; // r13
  __int64 v20; // rcx
  bool v21; // zf
  __int64 v22; // rcx
  unsigned __int16 *v23; // rax
  unsigned __int64 v24; // r13
  unsigned __int8 v25; // al
  size_t v27; // r8
  const struct PFF *v28; // r13
  unsigned int v29; // eax
  struct PFE *v30; // [rsp+30h] [rbp-48h]
  _QWORD v31[2]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v32; // [rsp+48h] [rbp-30h]
  unsigned __int64 v33; // [rsp+50h] [rbp-28h]
  int v34; // [rsp+58h] [rbp-20h]

  v13 = 1;
  PFEFromUFI = ppfeGetPFEFromUFI(a1, a6 & 5, 1);
  v17 = PFEFromUFI;
  v30 = PFEFromUFI;
  if ( !PFEFromUFI )
    return 0LL;
  v18 = *(_QWORD *)PFEFromUFI;
  if ( a5 )
    *a5 = *(_DWORD *)(v18 + 36);
  if ( a2 )
    *a2 = *(_DWORD *)(v18 + 32);
  if ( a3 )
  {
    v19 = *(unsigned int *)(v18 + 32);
    if ( (unsigned int)v19 > a4 )
      return 0LL;
    memmove(a3, *(const void **)(v18 + 24), 2 * v19);
    v20 = a4 - (unsigned int)v19;
    v21 = 2 * v20 == 0;
    v22 = 2 * v20;
    v23 = &a3[v19];
    if ( !v21 )
    {
      do
      {
        *(_BYTE *)v23 = 0;
        v23 = (unsigned __int16 *)((char *)v23 + 1);
        --v22;
      }
      while ( v22 );
    }
  }
  if ( a7 )
    *a7 = *((_DWORD *)v17 + 3) & 0x40;
  if ( (*((_DWORD *)v17 + 3) & 0x40) != 0 )
  {
    v24 = *(unsigned int *)(**(_QWORD **)(v18 + 208) + 24LL);
    if ( a8 )
      *a8 = v24;
    if ( a9 )
    {
      v31[0] = 0LL;
      v31[1] = 0LL;
      v32 = 0LL;
      v33 = 0LL;
      v34 = 6;
      v25 = Gre::MapViewOfSectionObj::Map((__int64)v31, *(_QWORD *)(**(_QWORD **)(v18 + 208) + 32LL), 4LL, 0LL);
      v13 = v25;
      if ( !v25 )
      {
        Gre::MapViewOfSectionObj::~MapViewOfSectionObj((Gre::MapViewOfSectionObj *)v31);
        return 0LL;
      }
      GreProbeForWriteToUntrustedVa(a9, v24, 1uLL);
      if ( v33 < 0x10 )
      {
        v13 = 0;
      }
      else
      {
        v27 = v33 - 16;
        if ( v33 - 16 >= v24 )
          v27 = v24;
        memmove(a9, (const void *)(v32 + 16), v27);
      }
      Gre::MapViewOfSectionObj::~MapViewOfSectionObj((Gre::MapViewOfSectionObj *)v31);
    }
  }
  if ( v13 )
  {
    if ( a10 )
    {
      if ( a11 )
      {
        *a10 = 0;
        *a11 = 0;
        v28 = *(const struct PFF **)v17;
        if ( UmfdIsUmfdTrueTypePff(*(const struct PFF **)v17, v15, v16) )
        {
          v29 = *((_DWORD *)v28 + 54);
          if ( v29 >= 4 && (v29 & 1) == 0 )
          {
            *a11 = (unsigned int)(*((_DWORD *)v30 + 22) - 1) >> 1;
            *a10 = 1;
          }
        }
      }
    }
  }
  return v13;
}
