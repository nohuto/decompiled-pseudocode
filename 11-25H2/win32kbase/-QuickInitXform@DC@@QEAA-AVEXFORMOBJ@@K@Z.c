/*
 * XREFs of ?QuickInitXform@DC@@QEAA?AVEXFORMOBJ@@K@Z @ 0x14008F280
 * Callers:
 *     GreGetClipBox @ 0x14008E7A0 (GreGetClipBox.c)
 * Callees:
 *     ?vUpdateCachedDPIScaleValue@DC@@QEAAXXZ @ 0x140075604 (-vUpdateCachedDPIScaleValue@DC@@QEAAXXZ.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x140075BA8 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ?vUpdateWtoDXform@DC@@QEAAXXZ @ 0x14008F4E0 (-vUpdateWtoDXform@DC@@QEAAXXZ.c)
 *     ?bInverse@EXFORMOBJ@@QEAA_NAEBUMATRIX@@@Z @ 0x14008FDF0 (-bInverse@EXFORMOBJ@@QEAA_NAEBUMATRIX@@@Z.c)
 *     ?bDpiScaleTransform@DC@@QEBAHXZ @ 0x14008FFF0 (-bDpiScaleTransform@DC@@QEBAHXZ.c)
 *     ?vRealizeLineAttrs@DC@@QEAAXAEAVEXFORMOBJ@@@Z @ 0x14009058C (-vRealizeLineAttrs@DC@@QEAAXAEAVEXFORMOBJ@@@Z.c)
 *     ?bXform@EXFORMOBJ@@QEBA_NPEBU_POINTL@@PEAU2@_K@Z @ 0x1401075A0 (-bXform@EXFORMOBJ@@QEBA_NPEBU_POINTL@@PEAU2@_K@Z.c)
 */

_QWORD *__fastcall DC::QuickInitXform(__int64 a1, _QWORD *a2, int a3)
{
  int v3; // edi
  int v7; // eax
  char v8; // r14
  const struct _POINTL *v9; // rdx
  _OWORD *v10; // rbp
  __int64 v11; // rcx
  __int64 v12; // rcx
  DC *v13; // rcx
  DC *v14; // rcx
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF
  __int64 v16; // [rsp+58h] [rbp+10h] BYREF
  __int64 v17; // [rsp+68h] [rbp+20h] BYREF

  v3 = a3;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 976) + 340LL) & 0x1E000) == 0 && a3 == 516 )
  {
    *a2 = a1 + 320;
    return a2;
  }
  if ( a3 >= 0 )
  {
    v8 = 0;
  }
  else
  {
    v7 = *(_DWORD *)(a1 + 520);
    v8 = 1;
    v3 = a3 & 0x7FFFFFFF;
    if ( (v7 & 1) != 0 && (v7 & 2) == 0 )
    {
      *(_DWORD *)(a1 + 520) = v7 | 2;
      DC::vMarkTransformDirty((DC *)a1);
      DC::vUpdateCachedDPIScaleValue(v14);
    }
  }
  v9 = *(const struct _POINTL **)(a1 + 976);
  if ( (v9[42].y & 0x1E000) != 0 )
  {
    if ( (v9[19].x & 0x100) != 0 )
    {
      v15 = a1 + 356;
      if ( a1 != -356 )
        EXFORMOBJ::bXform((EXFORMOBJ *)&v15, v9 + 1, (struct _POINTL *)&v9[27], 1uLL);
      *(_DWORD *)(*(_QWORD *)(a1 + 976) + 152LL) &= ~0x100u;
    }
    DC::vUpdateWtoDXform((DC *)a1);
    v10 = (_OWORD *)(a1 + 320);
    *(_DWORD *)(*(_QWORD *)(a1 + 976) + 152LL) |= 0x200u;
    v12 = *(_QWORD *)(a1 + 976);
    if ( (*(_DWORD *)(v12 + 340) & 0x80u) != 0 )
    {
      v16 = a1 + 320;
      if ( a1 != -320 )
      {
        DC::vRealizeLineAttrs((DC *)a1, (struct EXFORMOBJ *)&v16);
        v12 = *(_QWORD *)(a1 + 976);
      }
      *(_DWORD *)(a1 + 252) |= 1u;
      *(_DWORD *)(v12 + 340) &= ~0x80u;
    }
    *(_DWORD *)(*(_QWORD *)(a1 + 976) + 340LL) |= 0x10u;
  }
  else
  {
    v10 = (_OWORD *)(a1 + 320);
  }
  if ( v3 != 516 )
  {
    if ( v3 == 1026 )
    {
      v10 = (_OWORD *)(a1 + 356);
      if ( (*(_DWORD *)(*(_QWORD *)(a1 + 976) + 340LL) & 0x10) == 0 )
        goto LABEL_10;
      v17 = a1 + 356;
      if ( EXFORMOBJ::bInverse((EXFORMOBJ *)&v17, (const struct MATRIX *)(a1 + 320)) )
      {
        *(_DWORD *)(*(_QWORD *)(a1 + 976) + 340LL) &= ~0x10u;
        if ( !(unsigned int)DC::bDpiScaleTransform((DC *)a1) )
        {
          v11 = *(_QWORD *)(a1 + 976);
          *(_OWORD *)(v11 + 68) = *v10;
          *(_OWORD *)(v11 + 84) = *(_OWORD *)(a1 + 372);
          *(_DWORD *)(v11 + 100) = *(_DWORD *)(a1 + 388);
        }
        goto LABEL_10;
      }
    }
    else if ( v3 == 515 )
    {
      v10 = (_OWORD *)(a1 + 392);
      goto LABEL_10;
    }
    v10 = 0LL;
  }
LABEL_10:
  if ( v8 && (*(_BYTE *)(a1 + 520) & 3) == 3 )
  {
    *(_DWORD *)(a1 + 520) &= ~2u;
    DC::vMarkTransformDirty((DC *)a1);
    DC::vUpdateCachedDPIScaleValue(v13);
  }
  *a2 = v10;
  return a2;
}
