/*
 * XREFs of ?InitXform@DC@@QEAAPEAUMATRIX@@K@Z @ 0x140039390
 * Callers:
 *     <none>
 * Callees:
 *     ?vUpdateCachedDPIScaleValue@DC@@QEAAXXZ @ 0x140012F1C (-vUpdateCachedDPIScaleValue@DC@@QEAAXXZ.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1400384A8 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ?bXform@EXFORMOBJ@@QEBA_NPEBU_POINTL@@PEAU2@_K@Z @ 0x1400384E0 (-bXform@EXFORMOBJ@@QEBA_NPEBU_POINTL@@PEAU2@_K@Z.c)
 *     ?bDpiScaleTransform@DC@@QEBAHXZ @ 0x140039928 (-bDpiScaleTransform@DC@@QEBAHXZ.c)
 *     ?SetCachedDpiScaleValue@DC@@QEAAXJ@Z @ 0x140039950 (-SetCachedDpiScaleValue@DC@@QEAAXJ@Z.c)
 *     ?vUpdateWtoDXform@DC@@QEAAXXZ @ 0x140039A40 (-vUpdateWtoDXform@DC@@QEAAXXZ.c)
 *     ?vRealizeLineAttrs@DC@@QEAAXAEAVEXFORMOBJ@@@Z @ 0x14003A42C (-vRealizeLineAttrs@DC@@QEAAXAEAVEXFORMOBJ@@@Z.c)
 *     ?bInverse@EXFORMOBJ@@QEAA_NAEBUMATRIX@@@Z @ 0x14003A5C0 (-bInverse@EXFORMOBJ@@QEAA_NAEBUMATRIX@@@Z.c)
 */

struct MATRIX *__fastcall DC::InitXform(DC *this, int a2)
{
  int v2; // esi
  int v4; // ecx
  char v5; // bp
  char *v6; // r14
  const struct _POINTL *v7; // rdx
  char *v8; // r15
  char *v9; // rdi
  int v10; // esi
  int v11; // esi
  __int64 v13; // rcx
  __int64 v14; // rax
  DC *v15; // rcx
  __int64 v16; // rdx
  unsigned int v17; // ecx
  int v18; // eax
  int v19; // eax
  __int64 v20; // r8
  int v21; // r9d
  unsigned int v22; // ecx
  __int64 v23; // rax
  __int64 v24; // rax
  char *v25; // [rsp+40h] [rbp+8h] BYREF

  v2 = a2;
  if ( a2 >= 0 )
  {
    v5 = 0;
  }
  else
  {
    v4 = *((_DWORD *)this + 130);
    v5 = 1;
    v2 = a2 & 0x7FFFFFFF;
    if ( (v4 & 1) != 0 && (v4 & 2) == 0 )
    {
      v16 = *((_QWORD *)this + 122);
      v17 = v4 & 0xFFFFFFF9 | 2;
      *((_DWORD *)this + 130) = v17;
      v18 = *(_DWORD *)(v16 + 340);
      if ( (v17 & 1) != 0 )
        v19 = v18 | 0x16090;
      else
        v19 = v18 | 0x6090;
      *(_DWORD *)(v16 + 340) = v19;
      if ( (unsigned int)DC::bDpiScaleTransform(this) )
      {
        v21 = *((_DWORD *)this + 131);
        v22 = (unsigned __int8)(v21 >> 23);
        if ( v22 <= 0x9E )
        {
          v23 = v21 & 0x7FFFFF | 0x800000LL;
          v24 = v22 < 0x76 ? v23 >> (118 - (unsigned __int8)v22) : v23 << ((unsigned __int8)v22 - 118);
          v20 = (v24 + 0x80000000LL) >> 32;
          if ( v21 < 0 )
            LODWORD(v20) = -(int)v20;
        }
      }
      DC::SetCachedDpiScaleValue(this, v20);
    }
  }
  v6 = (char *)this + 976;
  v7 = (const struct _POINTL *)*((_QWORD *)this + 122);
  v8 = (char *)this + 976;
  if ( (v7[42].y & 0x1E000) != 0 )
  {
    if ( (v7[19].x & 0x100) != 0 )
    {
      v25 = (char *)this + 356;
      if ( this != (DC *)-356LL )
        EXFORMOBJ::bXform((EXFORMOBJ *)&v25, v7 + 1, (struct _POINTL *)&v7[27], 1LL);
      *(_DWORD *)(*(_QWORD *)v6 + 152LL) &= ~0x100u;
    }
    DC::vUpdateWtoDXform(this);
    v9 = (char *)this + 320;
    *(_DWORD *)(*(_QWORD *)v6 + 152LL) |= 0x200u;
    if ( (*(_DWORD *)(*(_QWORD *)v6 + 340LL) & 0x80u) != 0 )
    {
      v25 = (char *)this + 320;
      if ( this != (DC *)-320LL )
        DC::vRealizeLineAttrs(this, (struct EXFORMOBJ *)&v25);
      v14 = *(_QWORD *)v6;
      *((_DWORD *)this + 63) |= 1u;
      *(_DWORD *)(v14 + 340) &= ~0x80u;
    }
    v8 = (char *)this + 976;
    *(_DWORD *)(*(_QWORD *)v6 + 340LL) |= 0x10u;
  }
  else
  {
    v9 = (char *)this + 320;
  }
  v10 = v2 - 515;
  if ( !v10 )
  {
    v9 = (char *)this + 392;
    goto LABEL_7;
  }
  v11 = v10 - 1;
  if ( v11 )
  {
    if ( v11 != 510 )
      goto LABEL_12;
    v9 = (char *)this + 356;
    if ( (*(_DWORD *)(*(_QWORD *)v6 + 340LL) & 0x10) == 0 )
      goto LABEL_7;
    v25 = (char *)this + 356;
    if ( EXFORMOBJ::bInverse((EXFORMOBJ *)&v25, (DC *)((char *)this + 320)) )
    {
      *(_DWORD *)(*(_QWORD *)v8 + 340LL) &= ~0x10u;
      if ( !(unsigned int)DC::bDpiScaleTransform(this) )
      {
        v13 = *(_QWORD *)v8;
        *(_OWORD *)(v13 + 68) = *(_OWORD *)v9;
        *(_OWORD *)(v13 + 84) = *(_OWORD *)((char *)this + 372);
        *(_DWORD *)(v13 + 100) = *((_DWORD *)this + 97);
      }
    }
    else
    {
LABEL_12:
      v9 = 0LL;
    }
  }
LABEL_7:
  if ( v5 && (*((_BYTE *)this + 520) & 3) == 3 )
  {
    *((_DWORD *)this + 130) &= ~2u;
    DC::vMarkTransformDirty(this);
    DC::vUpdateCachedDPIScaleValue(v15);
  }
  return (struct MATRIX *)v9;
}
