/*
 * XREFs of ?QuickInitXform@DC@@QEAA?AVEXFORMOBJ@@K@Z @ 0x140039640
 * Callers:
 *     GreDCSelectPen @ 0x140038F40 (GreDCSelectPen.c)
 *     GreGetClipBox @ 0x14003ACA0 (GreGetClipBox.c)
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

_QWORD *__fastcall DC::QuickInitXform(__int64 a1, _QWORD *a2, int a3)
{
  int v4; // ebx
  __int64 v5; // rcx
  int v8; // eax
  char v9; // bp
  const struct _POINTL *v10; // rdx
  _OWORD *v11; // r14
  __int64 v12; // rcx
  __int64 v13; // rcx
  DC *v14; // rcx
  unsigned int v15; // eax
  int v16; // edx
  int v17; // edx
  __int64 v18; // r8
  int v19; // r9d
  unsigned int v20; // edx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // [rsp+40h] [rbp+8h] BYREF

  v4 = a3;
  v5 = *(_QWORD *)(a1 + 976);
  if ( (*(_DWORD *)(v5 + 340) & 0x1E000) == 0 && a3 == 516 )
  {
    *a2 = a1 + 320;
    return a2;
  }
  if ( a3 >= 0 )
  {
    v9 = 0;
  }
  else
  {
    v8 = *(_DWORD *)(a1 + 520);
    v9 = 1;
    v4 = a3 & 0x7FFFFFFF;
    if ( (v8 & 1) != 0 && (v8 & 2) == 0 )
    {
      v15 = v8 & 0xFFFFFFF9 | 2;
      *(_DWORD *)(a1 + 520) = v15;
      v16 = *(_DWORD *)(v5 + 340);
      if ( (v15 & 1) != 0 )
        v17 = v16 | 0x16090;
      else
        v17 = v16 | 0x6090;
      *(_DWORD *)(v5 + 340) = v17;
      if ( (unsigned int)DC::bDpiScaleTransform((DC *)a1) )
      {
        v19 = *(_DWORD *)(a1 + 524);
        v20 = (unsigned __int8)(v19 >> 23);
        if ( v20 <= 0x9E )
        {
          v21 = v19 & 0x7FFFFF | 0x800000LL;
          v22 = v20 < 0x76 ? v21 >> (118 - (unsigned __int8)v20) : v21 << ((unsigned __int8)v20 - 118);
          v18 = (v22 + 0x80000000LL) >> 32;
          if ( v19 < 0 )
            LODWORD(v18) = -(int)v18;
        }
      }
      DC::SetCachedDpiScaleValue((DC *)a1, v18);
    }
  }
  v10 = *(const struct _POINTL **)(a1 + 976);
  if ( (v10[42].y & 0x1E000) != 0 )
  {
    if ( (v10[19].x & 0x100) != 0 )
    {
      v23 = a1 + 356;
      if ( a1 != -356 )
        EXFORMOBJ::bXform((EXFORMOBJ *)&v23, v10 + 1, (struct _POINTL *)&v10[27], 1LL);
      *(_DWORD *)(*(_QWORD *)(a1 + 976) + 152LL) &= ~0x100u;
    }
    DC::vUpdateWtoDXform((DC *)a1);
    v11 = (_OWORD *)(a1 + 320);
    *(_DWORD *)(*(_QWORD *)(a1 + 976) + 152LL) |= 0x200u;
    v13 = *(_QWORD *)(a1 + 976);
    if ( (*(_DWORD *)(v13 + 340) & 0x80u) != 0 )
    {
      v23 = a1 + 320;
      if ( a1 != -320 )
      {
        DC::vRealizeLineAttrs((DC *)a1, (struct EXFORMOBJ *)&v23);
        v13 = *(_QWORD *)(a1 + 976);
      }
      *(_DWORD *)(a1 + 252) |= 1u;
      *(_DWORD *)(v13 + 340) &= ~0x80u;
    }
    *(_DWORD *)(*(_QWORD *)(a1 + 976) + 340LL) |= 0x10u;
  }
  else
  {
    v11 = (_OWORD *)(a1 + 320);
  }
  if ( v4 != 516 )
  {
    if ( v4 == 1026 )
    {
      v11 = (_OWORD *)(a1 + 356);
      if ( (*(_DWORD *)(*(_QWORD *)(a1 + 976) + 340LL) & 0x10) == 0 )
        goto LABEL_10;
      v23 = a1 + 356;
      if ( EXFORMOBJ::bInverse((EXFORMOBJ *)&v23, (const struct MATRIX *)(a1 + 320)) )
      {
        *(_DWORD *)(*(_QWORD *)(a1 + 976) + 340LL) &= ~0x10u;
        if ( !(unsigned int)DC::bDpiScaleTransform((DC *)a1) )
        {
          v12 = *(_QWORD *)(a1 + 976);
          *(_OWORD *)(v12 + 68) = *v11;
          *(_OWORD *)(v12 + 84) = *(_OWORD *)(a1 + 372);
          *(_DWORD *)(v12 + 100) = *(_DWORD *)(a1 + 388);
        }
        goto LABEL_10;
      }
    }
    else if ( v4 == 515 )
    {
      v11 = (_OWORD *)(a1 + 392);
      goto LABEL_10;
    }
    v11 = 0LL;
  }
LABEL_10:
  if ( v9 && (*(_BYTE *)(a1 + 520) & 3) == 3 )
  {
    *(_DWORD *)(a1 + 520) &= ~2u;
    DC::vMarkTransformDirty((DC *)a1);
    DC::vUpdateCachedDPIScaleValue(v14);
  }
  *a2 = v11;
  return a2;
}
